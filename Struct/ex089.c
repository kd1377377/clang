#include<stdio.h>

struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};

main()
{
	struct profile student;

	printf("���O����� :");
	scanf("%s",&student.name);

	printf("���N�������󔒂ŋ�؂��ē��� :");
	scanf("%d%d%d", &student.birth[0], &student.birth[1], &student.birth[2]);

	printf("���t�^����� :");
	scanf("%s",&student.blood);

	printf("%s --%d �N %d �� %d ���� - %s �^", student.name, student.birth[0], student.birth[1], student.birth[2], student.blood);
}