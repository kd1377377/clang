#include<stdio.h>

void error(void);

main()
{
	int a, b;
	printf("“ñ‚Â‚Ì®”‚ğ“ü—Í");
	scanf("%d%d", &a, &b);
	if (b == 0) {
		error();
	}
	else {
		printf("%d / %d =%.2f", a, b, (float)a / b);
	}
}

void error(void) {
	printf("ƒGƒ‰[");
}