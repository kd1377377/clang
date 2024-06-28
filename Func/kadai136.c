#include<stdio.h>

int hikaku(int a, int b);

main()
{
	int a, b, big;

	printf("“ñ‚Â‚Ì®” : ");
	scanf("%d%d", &a, &b);

	big = hikaku(a, b);
	printf("‘å‚«‚¢‚Ì‚Í%d", big);
}

int hikaku(int a, int b)
{
	int c;
	if (a > b) {
		c = a;
	}
	else {
		c = b;
	}

	return c;
}