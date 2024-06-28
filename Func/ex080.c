#include<stdio.h>
#include<string.h>

#define TBL_END 5

int tbl_gokei4(int *p);

main()
{
	int a[] = { 10,20,30,40,50 }, gokei;
	gokei = tbl_gokei4(a);
	printf("çáåv=%d\n", gokei);
}

int tbl_gokei4(int *p)
{
	int i = 0;
	for (i = 0; i < TBL_END;i++) {
		strcmp(data[i], data[i + 1]);
	}
}