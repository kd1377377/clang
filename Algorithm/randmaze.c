#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#define WIDTH 19 // 迷路の幅(奇数で設定)
#define HEIGHT 15 // 迷路の高さ(奇数で設定)
// 関数プロトタイプ
void InitMaze(void); // 迷路初期化関数
void DrawMaze(void); // 迷路表示関数
void DigMaze(void); // 迷路を掘り進む関数
int CheckDig(void); // 迷路を掘れなくなったか判定する関数
// グローバル変数
int meiro[HEIGHT][WIDTH]; // 迷路データ 0は通路、1は壁
int save[200], cnt = 0; // 掘ってきた方向データ保存用
int x = 1, y = 3; // 現在の位置(起点をセット)
// 迷路初期化関数=============================
void InitMaze(void)
{
	int i, j;
	for (i = 0; i < HEIGHT; i++) { // 行数分の繰返し
		for (j = 0; j < WIDTH; j++) { // 列数分の繰返し
			meiro[i][j] = 1; // 全てを壁にする
		}
	}
	meiro[y][x] = 0; // 起点を、「通路」にする
	return;
}
// 迷路表示関数==============================
void DrawMaze(void)
{
	int i, j;
	printf("動作確認用に現在の位置を「*」で表示\n");
	for (i = 0; i < HEIGHT; i++) { // 行数分の繰返し
		for (j = 0; j < WIDTH; j++) { // 列数分の繰返し
			// 動作確認用に現在の位置を「*」で表示
			if (i == y && j == x) {
				printf("*");
				continue;
			}
			if (meiro[i][j] == 1) {
				printf("四"); // 壁:■だとうまく動かないので四で代用
			}
			else {
				printf(" "); // 通路
			}
		}
		printf("\n");
	}
	return;

}
// 迷路を掘り進む関数===========================
void DigMaze(void)
{
	int h;
	h = rand() % 4 + 1; // 1~4の乱数で掘る方向を決める
	switch (h) {
	case 1: // 上側
		if (y - 2 >= 1 && meiro[y - 2][x] == 1) { // 上へ掘れるか?の判定
			meiro[y - 1][x] = 0;
			meiro[y - 2][x] = 0;
			y -= 2;
			save[cnt] = h; // 掘った方向を保存
			cnt++; // 保存用配列の添え字を+1する
		}
		break;
	case 2: // 下側
		if (y + 2 < HEIGHT - 1 && meiro[y + 2][x] == 1) { // 下へ掘れるか?の判定
			meiro[y + 1][x] = 0;
			meiro[y + 2][x] = 0;
			y += 2;
			save[cnt] = h; // 掘った方向を保存
			cnt++; // 保存用配列の添え字を+1する
		}
		break;
	case 3: // 左側
		if (x - 2 >= 1 && meiro[y][x - 2] == 1) { // 左へ掘れるか?の判定
			meiro[y][x - 1] = 0;
			meiro[y][x - 2] = 0;
			x -= 2;
			save[cnt] = h; // 掘った方向を保存
			cnt++; // 保存用配列の添え字を+1する
		}
		break;
	case 4: // 右側
		if (x + 2 < WIDTH - 1 && meiro[y][x + 2] == 1) { // 右へ掘れるか?の判定
			meiro[y][x + 1] = 0;
			meiro[y][x + 2] = 0;
			x += 2;
			save[cnt] = h; // 掘った方向を保存
			cnt++; // 保存用配列の添え字を+1する
		}
		break;
	}
	return;
}
// 迷路を掘れなくなったか判定を行う関数==================
int CheckDig(void)
{
	int flg = 0;
	// 上下左右に掘れるときはflgを1にする
	if (y - 2 >= 1 && meiro[y - 2][x] == 1) { flg = 1; } // 上側判定
	if (y + 2 < HEIGHT - 1 && meiro[y + 2][x] == 1) { flg = 1; } // 下側判定
	if (x - 2 >= 1 && meiro[y][x - 2] == 1) { flg = 1; } // 左側判定
	if (x + 2 < WIDTH - 1 && meiro[y][x + 2] == 1) { flg = 1; } // 右側判定
	if (flg == 0) {
		// 上下左右どこも掘れなくなったとき
		cnt--; // 保存用配列の添え字を-1する
		if (cnt == -1) {
			return 1; // 全てを掘りつくしたときは1をリターン
		}
		if (save[cnt] == 1) {
			y += 2; // 保存されていたのが上の場合は下へ戻す
		}

		if (save[cnt] == 2) {
			y -= 2; // 保存されていたのが下の場合は上へ戻す
		}
		if (save[cnt] == 3) {
			x += 2; // 保存されていたのが左の場合は右へ戻す
		}
		if (save[cnt] == 4) {
			x -= 2; // 保存されていたのが右の場合は左へ戻す
		}
		save[cnt] = 0; // 保存していたデータをクリア
	}
	return 0;
}
// main関数 エントリポイント=======================
main()
{
	srand(time(0));
	InitMaze(); // 迷路初期化
	system("cls"); // 画面クリア
	DrawMaze(); // 迷路表示(初期状態)
	printf("「Enter」キー:処理続行\n");
	getch();
	// 穴掘り法で迷路を作成しつつ途中経過を表示
	while (1) {
		DigMaze();
		system("cls"); // 画面クリア
		DrawMaze(); // 迷路表示(途中経過)
		printf("「Enter」キー:処理続行 「e」キー:強制終了\n");
		if (CheckDig() == 1) {
			break;
		}
		if (getch() == 'e') { // 強制的に終了させる
			break;
		}
	}
}