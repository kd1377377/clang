#include<stdio.h>

void shisoku(int x, int y, int* wa, int* sa, int* sk, int *syo);

main()
{
	int a, b, c, d, e, f;
	printf("���l");
	scanf("%d", &a);
	printf("���l");
	scanf("%d", &b);

	shisoku(a, b, &c, &d, &e, &f);
	
	puts("���l�Ɛ��l�̎l���v�Z");
	printf("�a = %d �� = %d �� = %d �� = %d\n", c, d, e, f);
}

void shisoku(int x, int y, int* wa, int* sa, int* sk, int *syo)
{
	*wa = x + y;
	*sa = x - y;
	* sk = x * y;
	* syo = x / y;
}