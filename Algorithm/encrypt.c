#include<stdio.h>

main()
{
	int i = 0;
	char s[20];
	printf("���������͂��Ă�������");
	scanf("%s", &s[0]);

	while (s[i]!='\0'){
		s[i] += 1;
		i++;
	}

	printf("�Í���������� %s\n", &s);
}