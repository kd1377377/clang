#include<stdio.h>
main()
{
	int h, m, s;
	printf("�b�������");
	scanf("%d", &s);

	if (s <= 5000 && s>0) {
		m = s / 60;
		s = s % 60;

		h = m / 60;
		m = m % 60;
		
		printf("%d���ԁ@%d���@%d�b\n", h, m, s);
	}
	else {
		printf("�G���[���������܂���");
	}

}