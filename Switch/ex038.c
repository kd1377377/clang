#include<stdio.h>
main() {
	int ten;
	printf("�_�������");
	scanf("%d", &ten);

	if (ten >= 10 && ten <= 49) {
		switch(ten/10){
		case 1:
			printf("10�_��ł�\n");
			break;
		case 2:
			printf("20�_��ł�\n");
			break;
		case 3:
			printf("30�_��ł�\n");
			break;
		case 4:
			printf("40�_��ł�\n");
			break;
		}
	}
	else {
		printf("�G���[\n");
	}
}