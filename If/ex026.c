#include<stdio.h>
main()
{
	int m;
	printf("������� : ");
	scanf("%d", &m);

	if (m == 2) {
		printf("28��\n");
	}
	else if (m == 4 || m == 6 || m == 9 || m == 11) {
		printf("30��\n");
	}

	else {
		printf("31��\n");
	}
	

}