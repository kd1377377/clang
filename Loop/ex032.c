#include<stdio.h>
main()
{
	int i,no;
	no = 0;
	printf("�������� : ");
	scanf("%d" ,&no);
	for (i = 1; i <=5; i++) {
		printf("%d\n", no*i);
	}
}