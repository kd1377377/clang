#include<stdio.h>
#include<string.h>
#define DATA_END 8

void up(int data[]);
void down(int data[]);


main()
{
	int data[8] = { 6,10,8,2,9,5,1,7 };
	char str[256];

	printf("ソート方向を入力");
	gets(str);

	if (strcmp(str, "昇順") == 0) {
		up(data);
	}
	else if (strcmp(str, "降順") == 0) {
		down(data);
	}
	else {
		printf("ソート方向は、昇順か降順で入力してください\n");
		return 1;
	}

	for (int i = 0; i < DATA_END; i++) {
		printf("%d ", data[i]);
	}
}

void up(int data[])
{
	int i,j, w;
	for (i = 0; i < DATA_END-1; i++) {
		for (j = i + 1; j < DATA_END; j++) {
			if (data[i] > data[j]) {
				w = data[i];
				data[i] = data[j];
				data[j] = w;
			}
		}
	}
}

void down(int data[])
{
	int i,j, w;
	for (i = 0; i < DATA_END-1; i++) {
		for (j = i + 1; j < DATA_END; j++) {
			if (data[i] < data[j]) {
				w = data[i];
				data[i] = data[j];
				data[j] = w;
			}
		}
	}
}

