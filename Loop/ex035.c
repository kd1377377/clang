#include<stdio.h>
main()
{
	int no, sum;
	sum = 0;
	while (1) {
		printf("数を入力 : ");
		scanf("%d", &no);
		if (no == -999) {
			break;
		}
		sum += no;
	}
	printf("合計 = %d\n", sum);
}