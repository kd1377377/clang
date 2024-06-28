#include<stdio.h>
main()
{
	char moji;
	moji = 'A';
	int i ;
	for (i=0; i < 26; i++) {
		printf("moji=%c\n", moji);
		moji = moji + 1;
	}
}