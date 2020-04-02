#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char typ;
    unsigned int idx;
    unsigned int val;
    struct node* prev;
    struct node* next;
}node;

int cmp_item(node* item1, node* item2)
{
    if (item1->val < item2->val)
        return -1;
    else if (item1->val > item2->val)
        return 1;
    else
        return 0;
}

node* make_item(char typ, unsigned int num, unsigned int idx)
{
    node* item = (node*)malloc(sizeof(node));
    item->typ = typ;
    item->val = num;
    item->idx = idx;
    item->prev = 0;
    item->next = 0;
    return item;
}

void insert_item(node* list, node* item)
{
    item->next = list->next;
    item->prev = list;
    list->next = item;
}

node* add_item(node* list, node* item)
{
    node* it;

    if (list != 0) {
        if (cmp_item(item, list) < 0) {
            insert_item(item, list);
            list = item;
        }
        else {
            for (it = list; it != 0; it = it->next) {
                if (it->next == 0 ||
                    (cmp_item(item, it) > 0 &&
                        cmp_item(item, it->next) < 0))
                {
                    insert_item(it, item);
                    break;
                }
            }
        }
    }
    else {
        list = item;
    }
    return list;
}

node* add_item_u(node* list, node* item)
{
    node* it;

    if (list != 0) {
        for (it = list; it != 0; it = it->next) {
            if (cmp_item(item, it) == 0) {
                break;
            }
            else if (cmp_item(item, it) > 0
                || it->next == 0) {
                insert_item(it, item);
                break;
            }
        }
    }
    else {
        list = item;
    }
    return list;
}

node* get_list(char typ, char* str)
{
    int off = 0;
    int val = 0;
    int idx = 0;
    node* list = 0;
    node* item;

    while (str[off] != '\0') {
        if (str[off] == ' ') {
            item = make_item(typ, val, idx++);
            list = add_item(list, item);
            val = 0;
        }
        else {
            val *= 10;
            val += str[off] - '0';
        }
        off++;
    }
    item = make_item(typ, val, idx++);
    list = add_item(list, item);
    return list;
}

int main(void)
{
    node* item;
    node* listI;
    node* listR;
    char strI[1000];
    char strR[1000];

    gets(strI);
    gets(strR);

    listI = get_list(1, strI);
    listR = get_list(2, strR);

    for (item = listI; item != 0; item = item->next)
    {
        printf("%d-%d\n", item->idx, item->val);
    }

    for (item = listR; item != 0; item = item->next)
    {
        printf("%d-%d\n", item->idx, item->val);
    }

    return 0;
}