#include<stdio.h>

int add(int a, int b);
main()
{
	int a, b, ans;
	printf("������2���� : ");
	scanf("%d%d", &a, &b);
	ans = add(a, b);
	printf("������%d�ł�", ans);
}

int add(int a,int b)
{
	int ans;
	ans = a + b;
	return ans;
}