#include<stdio.h>
main()
{
	int i,su;
	su = 0;
	for (i = 1; i <= 10; i++) {
		su += i;
		printf("1から%dまでの和 = %d\n", i, su);
	}
}