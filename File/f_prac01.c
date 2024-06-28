#include<stdio.h>

main()
{
	FILE* fp;
	int score = 0;
	char ch, name[20];
	
	printf("名前を入力");
	scanf("%s", name);

	while (1) {
		printf("現在のスコア:%d (eで終了)\n", score);
		ch = getch();
		if (ch == 'e') {
			break;
		}
		score++;
	}
	fp = fopen("score.txt", "w");
	fprintf(fp, "%s\n%d\n", name, score);
	fclose(fp);
}