#include<stdio.h>
main()
{
	int no, sum;
	sum = 0;
	while (1) {
		printf("������� : ");
		scanf("%d", &no);
		if (no == -999) {
			break;
		}
		sum += no;
	}
	printf("���v = %d\n", sum);
}