#include <stdio.h>

int main(void)
{
    int enemy_image[14][32] = {
        {0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0},
        {1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1},
        {1, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1},
        {1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1},
        {0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0},
        {0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0},
        {0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1}
    };

    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 16; j++) {
            enemy_image[(6 - i) * 2][(15 - j) * 2] = enemy_image[6 - i][15 - j];
            enemy_image[(6 - i) * 2 + 1][(15 - j) * 2] = enemy_image[6 - i][15 - j];
            enemy_image[(6 - i) * 2][(15 - j) * 2 + 1] = enemy_image[6 - i][15 - j];
            enemy_image[(6 - i) * 2 + 1][(15 - j) * 2 + 1] = enemy_image[6 - i][15 - j];
        }
    }

    for (int i = 0; i < 14; i++) {
        for (int j = 0; j < 32; j++) {
            if (enemy_image[i][j] == 1) {
                printf("●");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}
