#include<stdio.h>

int add(int a, int b);
main()
{
	int a, b, ans;
	printf("整数を2つ入力 : ");
	scanf("%d%d", &a, &b);
	ans = add(a, b);
	printf("答えは%dです", ans);
}

int add(int a,int b)
{
	int ans;
	ans = a + b;
	return ans;
}