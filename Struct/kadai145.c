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
	struct fruit fruits[] = {
							{"peach",300,5,3,0 },
							{"grape",200,4,10,0 },
							{"watermelon",1500,5,8,0 },
							{"end",0,0,0,0} };
	struct fruit* p;
	int i;
	int sum = 0;

	for (p = fruits; strcmp(p->name, "end") != 0; p++) {
		printf("���i��:\t%s\n", p->name);
		printf("���i:\t%d\t", p->price);
		printf("�������ߓx:\t");
		for (i = 0; i < p->point; i++) {
			printf("��");
		}
		printf("\n");
		printf("��:\t%d\t", p->number);
		printf("total:\t%d\n\n", p->price * p->number);
		sum+= p->price * p->number;
	}
	printf("\t���v���z  =  %d\n",sum);
}