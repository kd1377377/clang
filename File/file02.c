#include<stdio.h>

main()
{
	FILE* fp;
	int lv, hp;
	char str[256];
	fp = fopen("file02.txt", "r");
	fscanf(fp, "%s",str);
	printf("‘•”õ : %s\n",str);
	fscanf(fp, "%s",str);
	printf("‘•”õ : %s\n",str);
	fscanf(fp, "%s",str);
	printf("‘•”õ : %s\n",str);
	fscanf(fp, "%d%d%s", &lv, &hp, str);
	printf("Lv:%d hp:%d ‘•”õ:%s\n", lv, hp, str);

	fclose(fp);
}