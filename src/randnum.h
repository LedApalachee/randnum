#ifndef randnum_h
#define randnum_h

#include <stdint.h>


#define MAX_RANDNUM_MEMBERS 10


typedef struct randset_int64_t
{
	int64_t i; // number itself
	uint8_t p; // probability (percent)
} randset_int64_t;


typedef struct randset_int32_t
{
	int32_t i;
	uint8_t p;
} randset_int32_t;


typedef struct randset_int16_t
{
	int16_t i;
	uint8_t p;
} randset_int16_t;


typedef struct randset_int8_t
{
	int8_t i;
	uint8_t p;
} randset_int8_t;


typedef struct randset_uint64_t
{
	uint64_t i;
	uint8_t p;
} randset_uint64_t;


typedef struct randset_uint32_t
{
	uint32_t i;
	uint8_t p;
} randset_uint32_t;


typedef struct randset_uint16_t
{
	uint16_t i;
	uint8_t p;
} randset_uint16_t;


typedef struct randset_uint8_t
{
	uint8_t i;
	uint8_t p;
} randset_uint8_t;


typedef struct randset_double
{
	double i;
	uint8_t p;
} randset_double;



typedef struct randset_float
{
	float i;
	uint8_t p;
} randset_float;




/*
// if array "set"'s first element's "p" equals 0, then it chooses a number from "start" to "end" (inclusive)
// otherwise it chooses a number from "set"
*/

typedef struct randint64_t
{
	int64_t start;
	int64_t end;
	randset_int64_t set[MAX_RANDNUM_MEMBERS];
} randint64_t;


typedef struct randint32_t
{
	int32_t start;
	int32_t end;
	randset_int32_t set[MAX_RANDNUM_MEMBERS];
} randint32_t;


typedef struct randint16_t
{
	int16_t start;
	int16_t end;
	randset_int16_t set[MAX_RANDNUM_MEMBERS];
} randint16_t;


typedef struct randint8_t
{
	int8_t start;
	int8_t end;
	randset_int8_t set[MAX_RANDNUM_MEMBERS];
} randint8_t;


typedef struct randuint64_t
{
	uint64_t start;
	uint64_t end;
	randset_uint64_t set[MAX_RANDNUM_MEMBERS];
} randuint64_t;


typedef struct randuint32_t
{
	uint32_t start;
	uint32_t end;
	randset_uint32_t set[MAX_RANDNUM_MEMBERS];
} randuint32_t;


typedef struct randuint16_t
{
	uint16_t start;
	uint16_t end;
	randset_uint16_t set[MAX_RANDNUM_MEMBERS];
} randuint16_t;


typedef struct randuint8_t
{
	uint8_t start;
	uint8_t end;
	randset_uint8_t set[MAX_RANDNUM_MEMBERS];
} randuint8_t;


typedef struct randdouble
{
	double start;
	double end;
	randset_double set[MAX_RANDNUM_MEMBERS];
} randdouble;


typedef struct randfloat
{
	float start;
	float end;
	randset_float set[MAX_RANDNUM_MEMBERS];
} randfloat;




int8_t get_randint8_t(randint8_t* n);
int16_t get_randint16_t(randint16_t* n);
int32_t get_randint32_t(randint32_t* n);
int64_t get_randint64_t(randint64_t* n);

uint8_t get_randuint8_t(randuint8_t* n);
uint16_t get_randuint16_t(randuint16_t* n);
uint32_t get_randuint32_t(randuint32_t* n);
uint64_t get_randuint64_t(randuint64_t* n);

double get_randdouble(randdouble* n);
float get_randfloat(randfloat* n);


#endif
