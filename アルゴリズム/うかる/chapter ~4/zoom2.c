#include <stdio.h>

int main(void)
{
  int enemy_image[7][16] = {
    {0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0},
    {1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1},
    {1, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1},
    {1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1},
    {0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0},
    {0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0},
    {0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1}
  };
  int enemy_image2[14][32];

  for (int i = 0; i < 7; i++) {
    for (int j = 0; j < 16; j++) {
      for (int k = 0; k <= 1; k++) {
        for (int l = 0; l <= 1; l++) {
          int tate = i * 2 + k;
          int yoko = j * 2 + l;
          enemy_image2[tate][yoko] = enemy_image[i][j];
        }
      }
    }
  }

   for (int i = 0; i < 14; i++) {
     for (int j = 0; j < 32; j++) {
       if (enemy_image2[i][j] == 1) {
           printf("●");
       } else {
           printf(" ");
       }
     }
     printf("\n");
   }
}
