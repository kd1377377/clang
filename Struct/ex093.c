#include<stdio.h>

struct syouhin_data {
	char name[20];
	int tanka;
	int kosuu;
};

main()
{
	struct syouhin_data syouhin[3] = { {"�G���s�c",30,5},
										{"�P�V�S��",50,2},
										{"�t�f�o�R",500,3} };
	struct syouhin_data* p;
	p = &syouhin[0];
	int i;

	for (i = 0; i < 3; i++,*p++) {
		printf("���i�� : %s\t", p->name);
		printf("�P�� : %4d\t", p->tanka);
		printf("�� : %4d\t", p->kosuu);
		printf("���z : %4d\n", (p->tanka) * (p->kosuu));
	}
									
}