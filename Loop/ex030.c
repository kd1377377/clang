#include<stdio.h>
main()
{
	int no, i;
	i = 0;
	printf("������� :");
	scanf("%d",&no);
	while (i <= 10) {
		printf("%d + %d = %d\n", no, i, no + i);
		i++;
	}
}