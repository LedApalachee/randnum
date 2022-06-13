#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include "../src/randnum.h"

int main()
{
	randfloat n;
	n.start = 0;
	n.end = 2;
	n.set[0].i = 32;
	n.set[0].p = 0;
	n.set[1].i = 64;
	n.set[1].p = 0;

	char ch;
	do printf("%f\n", get_randfloat(&n));
	while ((ch = getchar()) != 'q');
}
