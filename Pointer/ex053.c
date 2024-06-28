#include<stdio.h>

main()
{
	int a, b ;
	int* p_a, * p_b ,*p_w;
	a = 100; b = 200;

	p_a = &a;
	p_b = &b;

	p_w = p_a; p_a = p_b; p_b = p_w;
	printf("%d %d", *p_a,*p_b);
}