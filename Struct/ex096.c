#include <stdio.h>

struct syouhin_data {
	char name[20];
	int tanka;
};

void display(struct syouhin_data syouhin);

main()
{
	struct syouhin_data syouhin = { "ƒPƒVƒSƒ€",50 };
	display(syouhin);
}

void display(struct syouhin_data syouhin)
{
	struct syouhin_data* p;
	p = &syouhin;
	printf("%s  %d\n", p->name, p->tanka);
}