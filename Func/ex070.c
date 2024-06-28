#include<stdio.h>

int add(int a, int b);
main()
{
	int a, b, ans;
	printf("®”‚ğ2‚Â“ü—Í : ");
	scanf("%d%d", &a, &b);
	ans = add(a, b);
	printf("“š‚¦‚Í%d‚Å‚·", ans);
}

int add(int a,int b)
{
	int ans;
	ans = a + b;
	return ans;
}