#include<stdio.h>

int hikaku(int a, int b);

main()
{
	int a, b, big;

	printf("二つの整数 : ");
	scanf("%d%d", &a, &b);

	big = hikaku(a, b);
	printf("大きいのは%d", big);
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