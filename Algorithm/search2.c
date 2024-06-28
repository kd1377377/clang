#include<stdio.h>

main()
{
	int i, s;
	int d[] = { 10,5,30,77,16,3,47,29,37,33,55 };

	printf("’Tõ’l‚ð“ü—Í :");
	scanf("%d", &s);
	d[10] = s;
	
	i = 0;
	while (s != d[i]) {
		i++;
	}

	if (i > 10) {
		printf("Œ©‚Â‚©‚ç‚È‚©‚Á‚½\n");
	}
	else {
		printf("%d”Ô–Ú‚É‚ ‚è‚Ü‚·\n",i);
	}

}