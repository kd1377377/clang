#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define WIDTH 10
#define HEIGHT 10
#define WALL '#'
#define PLAYER 'o'
#define GOAL 'G'

char maze[HEIGHT][WIDTH];

void generateMaze() {
    // ���H�������������郍�W�b�N������
    // �Ⴆ�΁A�����_���ȕǂ̔z�u��S�[���̐ݒ�Ȃ�
    // ...
}

void printMaze() {
    for (int y = 0; y < HEIGHT; ++y) {
        for (int x = 0; x < WIDTH; ++x) {
            printf("%c ", maze[y][x]);
        }
        printf("\n");
    }
}

int main() {
    srand(time(NULL));
    generateMaze();
    maze[0][0] = PLAYER;
    maze[HEIGHT - 1][WIDTH - 1] = GOAL;

    while (1) {
        printMaze();
        // �L�[���͂��󂯎���ăv���C���[���ړ������鏈��
        // ...
    }

    return 0;
}
