#include<stdio.h>

main()
{
	int i = 0;
	int k[20];
	char s[20];
	printf("���������͂��Ă�������");
	scanf("%s", &s[0]);

	while (s[i]!='\0'){
		printf("s[%d]�̕������L�[ >",i);
		scanf("%d", &k[i]);
		s[i] -= k[i];
		i++;
	}

	printf("������������� %s\n", &s);
}