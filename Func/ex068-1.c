#include<stdio.h>

main()
{
	int a, b, c, ret;
	
	printf("数値を三つ入力");
	ret = scanf("%d%d%d", &a, &b, &c);
	printf("ret:%d\ta:%d\tb:%d\tc:%d\t", ret, a, b, c);
	
}