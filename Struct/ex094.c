#include<stdio.h>

#define NIN 5

struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};

main()
{
	struct profile data[NIN];
	struct profile* p;
	int i;
	
	for (i = 0, p = data; i < NIN; i++, p++) {
		printf("���O����� :");
		scanf("%s", &p->name);
		printf("���N�������󔒂ŋ�؂��ē��� :");
		scanf("%d%d%d", &p->birth[0], &p->birth[1], &p->birth[2]);
		printf("���t�^����� :");
		scanf("%s", &p->blood);
	}

	for (i = 0,p=data; i < NIN; i++,p++) {
		if(*p->blood == 'a' || *p->blood == 'A') {
			printf("%s --%d �N %d �� %d ���� - %s �^\n", p->name, p->birth[0], p->birth[1], p->birth[2], p->blood);
		}
	}

}