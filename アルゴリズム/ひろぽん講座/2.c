#include <stdio.h>

void r(int);
int i = 1;

int main(){
  r(4);
  return 0;
}

void r(int n){
  if(n > 0){
    r(n - 2);
    printf("%3d : %d\n", n, i++);
    r(n - 1);
  }
}
