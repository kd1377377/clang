#include<stdio.h>

struct fruit {
	char name[30];
	int price;
	int point;
	int number;
	int total;
};

main()
{
	struct fruit peach[] = { "peach",300,5,3,0 };
	struct fruit* p;
	p = peach;
	int i;

	printf("���i��:\t%s\n",p->name);
	printf("���i:\t%d\n",p->price);
	printf("�������ߓx:\t");
	for (i = 0; i < p->point; i++) {
		printf("��");
	}
	printf("\n");
	printf("��:\t%d\n", p->number);
	printf("total:\t%d\n", p->price*p->number);
}