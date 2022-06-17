#include "randnum.h"
#include <stdlib.h>
#include <time.h>

int8_t get_randint8_t(randint8_t* n)
{
	srand(time(0));
	int r = rand() % 100 + 1;
	int t = 0;
	for (int i = 0; n->set[i].p != 0 && i < MAX_RANDNUM_MEMBERS; ++i)
	{
		t += n->set[i].p;
		if (r <= t) return n->set[i].i;
	}
	return (rand() % (n->end - n->start + 1)) + n->start;
}


int16_t get_randint16_t(randint16_t* n)
{
	srand(time(0));
	int r = rand() % 100 + 1;
	int t = 0;
	for (int i = 0; n->set[i].p != 0 && i < MAX_RANDNUM_MEMBERS; ++i)
	{
		t += n->set[i].p;
		if (r <= t) return n->set[i].i;
	}
	return (rand() % (n->end - n->start + 1)) + n->start;
}


int32_t get_randint32_t(randint32_t* n)
{
	srand(time(0));
	int r = rand() % 100 + 1;
	int t = 0;
	for (int i = 0; n->set[i].p != 0 && i < MAX_RANDNUM_MEMBERS; ++i)
	{
		t += n->set[i].p;
		if (r <= t) return n->set[i].i;
	}
	return (rand() % (n->end - n->start + 1)) + n->start;
}


int64_t get_randint64_t(randint64_t* n)
{
	srand(time(0));
	int r = rand() % 100 + 1;
	int t = 0;
	for (int i = 0; n->set[i].p != 0 && i < MAX_RANDNUM_MEMBERS; ++i)
	{
		t += n->set[i].p;
		if (r <= t) return n->set[i].i;
	}
	return (rand() % (n->end - n->start + 1)) + n->start;
}


uint8_t get_randuint8_t(randuint8_t* n)
{
	srand(time(0));
	int r = rand() % 100 + 1;
	int t = 0;
	for (int i = 0; n->set[i].p != 0 && i < MAX_RANDNUM_MEMBERS; ++i)
	{
		t += n->set[i].p;
		if (r <= t) return n->set[i].i;
	}
	return (rand() % (n->end - n->start + 1)) + n->start;
}


uint16_t get_randuint16_t(randuint16_t* n)
{
	srand(time(0));
	int r = rand() % 100 + 1;
	int t = 0;
	for (int i = 0; n->set[i].p != 0 && i < MAX_RANDNUM_MEMBERS; ++i)
	{
		t += n->set[i].p;
		if (r <= t) return n->set[i].i;
	}
	return (rand() % (n->end - n->start + 1)) + n->start;
}


uint32_t get_randuint32_t(randuint32_t* n)
{
	srand(time(0));
	int r = rand() % 100 + 1;
	int t = 0;
	for (int i = 0; n->set[i].p != 0 && i < MAX_RANDNUM_MEMBERS; ++i)
	{
		t += n->set[i].p;
		if (r <= t) return n->set[i].i;
	}
	return (rand() % (n->end - n->start + 1)) + n->start;
}

uint64_t get_randuint64_t(randuint64_t* n)
{
	srand(time(0));
	int r = rand() % 100 + 1;
	int t = 0;
	for (int i = 0; n->set[i].p != 0 && i < MAX_RANDNUM_MEMBERS; ++i)
	{
		t += n->set[i].p;
		if (r <= t) return n->set[i].i;
	}
	return (rand() % (n->end - n->start + 1)) + n->start;
}


double get_randdouble(randdouble* n)
{
	srand(time(0));
	int r = rand() % 100 + 1;
	int t = 0;
	for (int i = 0; n->set[i].p != 0 && i < MAX_RANDNUM_MEMBERS; ++i)
	{
		t += n->set[i].p;
		if (r <= t) return n->set[i].i;
	}
	return ((rand() % (int)(n->end*1000 - n->start*1000 + 1)) + n->start*1000) / 1000;
}


float get_randfloat(randfloat* n)
{
	srand(time(0));
	int r = rand() % 100 + 1;
	int t = 0;
	for (int i = 0; n->set[i].p != 0 && i < MAX_RANDNUM_MEMBERS; ++i)
	{
		t += n->set[i].p;
		if (r <= t) return n->set[i].i;
	}
	return ((rand() % (int)(n->end*100 - n->start*100 + 1)) + n->start*100) / 100;
}
