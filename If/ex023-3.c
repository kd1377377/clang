#include<stdio.h>
main()
{
	int n, no1, no2;
	printf("演算子を入力 : ");
	scanf(" %d", &n);
	printf("2つの整数を入力 : ");
	scanf("%d%d", &no1, &no2);
	
	if (n == 1) {
		printf("%d", no1 + no2);
	}
	else if (n == 2) {
		printf("%d", no1 - no2);
	}
	else if (n == 3) {
		printf("%d", no1 * no2);
	}
	else if (n == 4) {
		printf("%d", no1 / no2);
	}
	else if (n == 5) {
		printf("%d･･･%d", no1 / no2, no1 % no2);
	}
	else {
		printf("エラー");
	}
}