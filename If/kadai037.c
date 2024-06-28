#include<stdio.h>
main()
{
	int no;
	printf("0～100までの整数");
	scanf("%d", &no);
	
	if (no > 100) {
		printf("その数値の判定結果は「エラー」です\n");
	}
	else if (no >= 90) {
		printf("その数値の判定結果は「5」です\n");
	}
	else if (no >= 80) {
		printf("その数値の判定結果は「4」です\n");
	}
	else if (no >= 50) {
		printf("その数値の判定結果は「3」です\n");
	}
	else if (no >= 30) {
		printf("その数値の判定結果は「2」です\n");
	}
	else {
		printf("その数値の判定結果は「1」です\n");
	}
}