#include<stdio.h>

main()
{
	int no, sum, i;
	no = 0; sum = 0; i = -1;
	while (no != -999) {
		sum += no; i++;
		printf("���������");
		scanf("%d", &no);
	}
	printf("���v = %d", sum);
	printf("���v = %.2f", (float)sum / (float)i);
}