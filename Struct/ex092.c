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
	int i;

	for (i = 0; i < 3; i++) {
		printf("���i�� : %s\t", syouhin[i].name);
		printf("�P�� : %4d\t", syouhin[i].tanka);
		printf("�� : %4d\n", syouhin[i].kosuu);
	}
									
}