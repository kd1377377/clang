#include<stdio.h>

main()
{
	int a, i, sum;
	
	sum = 0; a = 0; i = 0;
	printf("���l����� :");
	while (scanf("%d", &a) != EOF) {
		sum += a; i++;
		printf("���l����� :");
	}

	printf("���v = %d   ���� = %.2f", sum, (float)sum / i-1);
}