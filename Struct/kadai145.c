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
		printf("è§ïiñº:\t%s\n", p->name);
		printf("âøäi:\t%d\t", p->price);
		printf("Ç®Ç∑Ç∑Çﬂìx:\t");
		for (i = 0; i < p->point; i++) {
			printf("Åö");
		}
		printf("\n");
		printf("å¬êî:\t%d\t", p->number);
		printf("total:\t%d\n\n", p->price * p->number);
		sum+= p->price * p->number;
	}
	printf("\tçáåvã‡äz  =  %d\n",sum);
}