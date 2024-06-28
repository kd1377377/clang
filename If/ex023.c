#include<stdio.h>
main()
{
	int h, m, s;
	printf("秒数を入力");
	scanf("%d", &s);

	if (s <= 5000 && s>0) {
		m = s / 60;
		s = s % 60;

		h = m / 60;
		m = m % 60;
		
		printf("%d時間　%d分　%d秒\n", h, m, s);
	}
	else {
		printf("エラーが発生しました");
	}

}