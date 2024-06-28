#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#define WIDTH 19 // ���H�̕�(��Őݒ�)
#define HEIGHT 15 // ���H�̍���(��Őݒ�)
// �֐��v���g�^�C�v
void InitMaze(void); // ���H�������֐�
void DrawMaze(void); // ���H�\���֐�
void DigMaze(void); // ���H���@��i�ފ֐�
int CheckDig(void); // ���H���@��Ȃ��Ȃ��������肷��֐�
// �O���[�o���ϐ�
int meiro[HEIGHT][WIDTH]; // ���H�f�[�^ 0�͒ʘH�A1�͕�
int save[200], cnt = 0; // �@���Ă��������f�[�^�ۑ��p
int x = 1, y = 3; // ���݂̈ʒu(�N�_���Z�b�g)
// ���H�������֐�=============================
void InitMaze(void)
{
	int i, j;
	for (i = 0; i < HEIGHT; i++) { // �s�����̌J�Ԃ�
		for (j = 0; j < WIDTH; j++) { // �񐔕��̌J�Ԃ�
			meiro[i][j] = 1; // �S�Ă�ǂɂ���
		}
	}
	meiro[y][x] = 0; // �N�_���A�u�ʘH�v�ɂ���
	return;
}
// ���H�\���֐�==============================
void DrawMaze(void)
{
	int i, j;
	printf("����m�F�p�Ɍ��݂̈ʒu���u*�v�ŕ\��\n");
	for (i = 0; i < HEIGHT; i++) { // �s�����̌J�Ԃ�
		for (j = 0; j < WIDTH; j++) { // �񐔕��̌J�Ԃ�
			// ����m�F�p�Ɍ��݂̈ʒu���u*�v�ŕ\��
			if (i == y && j == x) {
				printf("*");
				continue;
			}
			if (meiro[i][j] == 1) {
				printf("�l"); // ��:�����Ƃ��܂������Ȃ��̂Ŏl�ő�p
			}
			else {
				printf(" "); // �ʘH
			}
		}
		printf("\n");
	}
	return;

}
// ���H���@��i�ފ֐�===========================
void DigMaze(void)
{
	int h;
	h = rand() % 4 + 1; // 1~4�̗����Ō@����������߂�
	switch (h) {
	case 1: // �㑤
		if (y - 2 >= 1 && meiro[y - 2][x] == 1) { // ��֌@��邩?�̔���
			meiro[y - 1][x] = 0;
			meiro[y - 2][x] = 0;
			y -= 2;
			save[cnt] = h; // �@����������ۑ�
			cnt++; // �ۑ��p�z��̓Y������+1����
		}
		break;
	case 2: // ����
		if (y + 2 < HEIGHT - 1 && meiro[y + 2][x] == 1) { // ���֌@��邩?�̔���
			meiro[y + 1][x] = 0;
			meiro[y + 2][x] = 0;
			y += 2;
			save[cnt] = h; // �@����������ۑ�
			cnt++; // �ۑ��p�z��̓Y������+1����
		}
		break;
	case 3: // ����
		if (x - 2 >= 1 && meiro[y][x - 2] == 1) { // ���֌@��邩?�̔���
			meiro[y][x - 1] = 0;
			meiro[y][x - 2] = 0;
			x -= 2;
			save[cnt] = h; // �@����������ۑ�
			cnt++; // �ۑ��p�z��̓Y������+1����
		}
		break;
	case 4: // �E��
		if (x + 2 < WIDTH - 1 && meiro[y][x + 2] == 1) { // �E�֌@��邩?�̔���
			meiro[y][x + 1] = 0;
			meiro[y][x + 2] = 0;
			x += 2;
			save[cnt] = h; // �@����������ۑ�
			cnt++; // �ۑ��p�z��̓Y������+1����
		}
		break;
	}
	return;
}
// ���H���@��Ȃ��Ȃ�����������s���֐�==================
int CheckDig(void)
{
	int flg = 0;
	// �㉺���E�Ɍ@���Ƃ���flg��1�ɂ���
	if (y - 2 >= 1 && meiro[y - 2][x] == 1) { flg = 1; } // �㑤����
	if (y + 2 < HEIGHT - 1 && meiro[y + 2][x] == 1) { flg = 1; } // ��������
	if (x - 2 >= 1 && meiro[y][x - 2] == 1) { flg = 1; } // ��������
	if (x + 2 < WIDTH - 1 && meiro[y][x + 2] == 1) { flg = 1; } // �E������
	if (flg == 0) {
		// �㉺���E�ǂ����@��Ȃ��Ȃ����Ƃ�
		cnt--; // �ۑ��p�z��̓Y������-1����
		if (cnt == -1) {
			return 1; // �S�Ă��@��������Ƃ���1�����^�[��
		}
		if (save[cnt] == 1) {
			y += 2; // �ۑ�����Ă����̂���̏ꍇ�͉��֖߂�
		}

		if (save[cnt] == 2) {
			y -= 2; // �ۑ�����Ă����̂����̏ꍇ�͏�֖߂�
		}
		if (save[cnt] == 3) {
			x += 2; // �ۑ�����Ă����̂����̏ꍇ�͉E�֖߂�
		}
		if (save[cnt] == 4) {
			x -= 2; // �ۑ�����Ă����̂��E�̏ꍇ�͍��֖߂�
		}
		save[cnt] = 0; // �ۑ����Ă����f�[�^���N���A
	}
	return 0;
}
// main�֐� �G���g���|�C���g=======================
main()
{
	srand(time(0));
	InitMaze(); // ���H������
	system("cls"); // ��ʃN���A
	DrawMaze(); // ���H�\��(�������)
	printf("�uEnter�v�L�[:�������s\n");
	getch();
	// ���@��@�Ŗ��H���쐬���r���o�߂�\��
	while (1) {
		DigMaze();
		system("cls"); // ��ʃN���A
		DrawMaze(); // ���H�\��(�r���o��)
		printf("�uEnter�v�L�[:�������s �ue�v�L�[:�����I��\n");
		if (CheckDig() == 1) {
			break;
		}
		if (getch() == 'e') { // �����I�ɏI��������
			break;
		}
	}
}