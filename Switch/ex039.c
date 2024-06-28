#include<stdio.h>
main()
{
	int a[3], i, sum, mx;
	float avg;
	char ope;

	sum = 0;
	avg = 0;
	printf("処理を入力 ");
	scanf("%c", &ope);

	for (i = 0; i < 3; i++) {
		printf("整数を入力 ");
		scanf("%d", &a[i]);
		sum += a[i];
	}

	switch (ope){
	case 'd':
		if (a[0] > a[1]) {
			if (a[0] > a[2]) {
				mx = a[0];
			}
		}
		else if (a[1] > a[2]) {
			mx = a[1];
		}
		else {
			mx = a[2];
		}
		printf("最大値は%d\n", mx);
		break;
	
	case 'D':
		if (a[0] > a[1]) {
			if (a[0] > a[2]) {
				mx = a[0];
			}
		}
		else if (a[1] > a[2]) {
			mx = a[1];
		}
		else {
			mx = a[2];
		}
		printf("最大値は%d\n", mx);
		break;

	case's':
		if (a[0] < a[1]) {
			if (a[0] < a[2]) {
				mx = a[0];
			}
		}
		else if (a[1] < a[2]) {
			mx = a[1];
		}
		else {
			mx = a[2];
		}
		printf("最小値は%d\n", mx);
		break;
	case'S':
		if (a[0] < a[1]) {
			if (a[0] < a[2]) {
				mx = a[0];
			}
		}
		else if (a[1] < a[2]) {
			mx = a[1];
		}
		else {
			mx = a[2];
		}
		printf("最小値は%d\n", mx);
		break;

	case'g':
		printf("合計は%d\n", sum);
		break;
	case'G':
		printf("合計は%d\n", sum);
		break;

	case'h':
		printf("平均は%.2f\n", (float)sum / 3.0);
		break;
	case'H':
		printf("平均は%.2f\n", (float)sum / 3.0);
		break;

	default:
		printf("エラー\n");
	}
}