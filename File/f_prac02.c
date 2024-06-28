#include<stdio.h>

main()
{
	FILE* fp;
	int score = 0, max_score;
	char ch, name[20], max_name[20];
	
	fp = fopen("score.txt", "r");
	fscanf(fp, "%s%d", &max_name, &max_score);
	fclose(fp);

	printf("最高得点 名前:%s ハイスコア:%d\n", max_name, max_score);
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
	
	if (score > max_score) {
		fp = fopen("score.txt", "w");
		fprintf(fp, "%s\n%d\n", name, score);
		fclose(fp);
		printf("最高記録更新!!");
	}
}