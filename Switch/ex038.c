#include<stdio.h>
main() {
	int ten;
	printf("点数を入力");
	scanf("%d", &ten);

	if (ten >= 10 && ten <= 49) {
		switch(ten/10){
		case 1:
			printf("10点台です\n");
			break;
		case 2:
			printf("20点台です\n");
			break;
		case 3:
			printf("30点台です\n");
			break;
		case 4:
			printf("40点台です\n");
			break;
		}
	}
	else {
		printf("エラー\n");
	}
}