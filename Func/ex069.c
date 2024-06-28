#include<stdio.h>

main()
{
	int a, i, sum;
	
	sum = 0; a = 0; i = 0;
	printf("”’l‚ğ“ü—Í :");
	while (scanf("%d", &a) != EOF) {
		sum += a; i++;
		printf("”’l‚ğ“ü—Í :");
	}

	printf("‡Œv = %d   •½‹Ï = %.2f", sum, (float)sum / i-1);
}