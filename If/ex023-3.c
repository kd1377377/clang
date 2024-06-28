#include<stdio.h>
main()
{
	int n, no1, no2;
	printf("‰‰Zq‚ğ“ü—Í : ");
	scanf(" %d", &n);
	printf("2‚Â‚Ì®”‚ğ“ü—Í : ");
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
		printf("%d¥¥¥%d", no1 / no2, no1 % no2);
	}
	else {
		printf("ƒGƒ‰[");
	}
}