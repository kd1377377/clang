#include<stdio.h>

main()
{
	int no, sum, i;
	no = 0; sum = 0; i = -1;
	while (no != -999) {
		sum += no; i++;
		printf("整数を入力");
		scanf("%d", &no);
	}
	printf("合計 = %d", sum);
	printf("合計 = %.2f", (float)sum / (float)i);
}