#include<stdio.h>
main() {
	int cnt,i;
	char data[] = "orange";
	i = 0;
	cnt = 0;

	while (data[i] != '\0') {
		cnt++;
		i++;
	}

	printf("��������%d����\n", cnt);
}