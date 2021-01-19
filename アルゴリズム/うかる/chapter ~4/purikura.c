#include <stdio.h>
#define HEIGHT 9
#define WIDTH 9

int data[HEIGHT][WIDTH] = {
  {0,0,0,1,1,1,1,1,1},
  {0,0,0,1,1,1,1,1,1},
  {0,0,0,1,1,1,1,1,1},
  {0,0,0,1,1,1,0,0,0},
  {0,0,0,1,1,1,0,0,0},
  {0,0,0,1,1,1,0,0,0},
  {1,1,1,1,1,1,0,0,0},
  {1,1,1,1,1,1,0,0,0},
  {1,1,1,1,1,1,0,0,0}
};

int upload[9][9];

void main(void) {
  int mini_height  = HEIGHT / 3;
  int mini_width  = WIDTH / 3;
097: 2m45s, 90%405-92m2o

  for (int tate = 0; tate < HEIGHT / 3 - 1; tate += 3) {
    for (int yoko = 0; yoko < WIDTH / 3 - 1; yoko += 3) {
      for (int i = 0; i < mini_height; i++) {
        for (int j = 0; j < mini_width; j++) {
          int mini_tate = mini_height * i + tate / 3;
          int mini_yoko = mini_width * j + yoko / 3;
          upload[mini_tate][mini_width] = data[tate][yoko];
        }
      }
    }
  }

  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      printf("%s", upload[i][j] == 1 ? "#" : " ");
    }
    printf("\n");
  }
}
