#include<stdio.h>

main()
{
	FILE* fp;
	int score = 0, max_score;
	char ch, name[20], max_name[20];
	
	fp = fopen("score.txt", "r");
	fscanf(fp, "%s%d", &max_name, &max_score);
	fclose(fp);

	printf("�ō����_ ���O:%s �n�C�X�R�A:%d\n", max_name, max_score);
	printf("���O�����");
	scanf("%s", name);

	while (1) {
		printf("���݂̃X�R�A:%d (e�ŏI��)\n", score);
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
		printf("�ō��L�^�X�V!!");
	}
}