#include<stdio.h>

struct syouhin_data {
	char name[20];
	int tanka;
};

main()
{
	struct syouhin_data syouhin1, syouhin2;
	syouhin1.name= 'ƒGƒ“ƒsƒc';
	syouhin1.tanka = 30;
	syouhin2 = syouhin1;
	printf("syouhin1.name = %s\n", syouhin1.name);
	printf("syouhin1.tanka = %d\n", syouhin1.tanka);
	printf("syouhin2.name = %s\n", syouhin2.name);
	printf("syouhin2.tanka = %d\n", syouhin2.tanka);
}