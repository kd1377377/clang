#include<stdio.h>

struct syouhin_data {
	char name[20];
	int tanka;
};

main()
{
	struct syouhin_data syouhin;
	struct syouhin_data* p;
	p = &syouhin;
	printf("¤•i–¼=");
	scanf("%s", p->name);
	p->tanka = 30;
	printf("p->name = %s\n",p->name );
	printf("p->tanka = %d\n",p->tanka );
	printf("syouhin.name = %s\n",syouhin.name );
	printf("syouhin.tanka = %d\n",syouhin.tanka );
	
	
}