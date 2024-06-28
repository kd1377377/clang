#include<stdio.h>
main()
{
	char ch;
	printf("•¶Žš‚ð“ü—Í");
	scanf("%c", &ch);

	if (ch >= 'A' && ch <= 'Z') {
		printf("•ÏŠ·‚·‚é‚Æ%c\n", ch + 0x20);
	}
	else if (ch >= 'a' && ch <= 'z') {
		printf("•ÏŠ·‚·‚é‚Æ%c\n", ch - 0x20);
	}
	else {
		printf("ƒGƒ‰[\n");
	}
}