#include <stdio.h>

typedef struct {
    char typ;
    unsigned int num;
    unsigned int idx;
    struct node* prev;
    struct node* next;
}node;

inline item* make_item(char typ, unsigned int num, unsigned int idx)
{
    node* item = (node*)malloc(sizeof(node));
    item->typ = typ;
    item->num = num;
    item->idx = idx;
    item->prev = NULL;
    item->next = NULL;
    return item;
}

inline void insert_item(node* list, node* item)
{
    item->next = list->next;
    item->prev = list;
    list->next = item;
}

inline int cmp_item(node* item1, node* item2)
{
    if (item1->num < item2->num)
        return -1;
    else if (item1->num > item2->num)
        return 1;
    else
        return 0;
}

inline void add_item(node* list, node* item)
{
    if (list != NULL)
    {

    }
    else
    {
        list = item;
    }
    return list
}

inline node* get_list(char* str)
{
    node* list = NULL;
    return list
}

int main()
{
    node* listI;
    node* listR;
    char strI[10000];
    char strR[10000];

    listI = get_list(strI);
    listR = get_list(strR);

    return 0;
}