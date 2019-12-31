#ifndef _Z_ALIGN_H_MZ_
#define _Z_ALIGN_H_MZ_

typedef struct align1 {
	I8  value1_i8;
	I8  value2_i8;
	I8  value3_i8;
}align1;

typedef struct align2 {
	I8  value1_i8;
	I8  value2_i8;
	I8  value3_i8;
	I16 value4_i16;
}align2;

typedef struct align3 {
	I8  value1_i8;
	I16 value2_i16;
	I8  value3_i8;
}align3;

typedef struct align4 {
	I8  value1_i8;
	I8  value2_i8;
	I16 value3_i16;
}align4;

typedef struct align5 {
	I8  value1_i8;
	I32 value2_i32;
	I16 value3_i16;
}align5;

typedef struct align6 {
	I8  value1_i8;
	I16 value2_i16;
	I32 value3_i32;
}align6;

typedef struct align_store {
	I16 value1_i16;
	I16 value2_i16;
	I32 value3_i32;
	I16 value4_i16;
	I16 value5_i16;
}align_store;

#endif
