#include<stdio.h>

main()
{
	int no, sum, i;
	no = 0; sum = 0; i = -1;
	while (no != -999) {
		sum += no; i++;
		printf("®”‚ğ“ü—Í");
		scanf("%d", &no);
	}
	printf("‡Œv = %d", sum);
	printf("‡Œv = %.2f", (float)sum / (float)i);
}