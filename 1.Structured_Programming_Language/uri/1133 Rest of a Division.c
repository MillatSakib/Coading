#include <stdio.h>

int main(void) {
  int x, y;

  scanf("%d %d", &x, &y);
    if(x>y){
        int temp;
        temp=x;
        x=y;
        y=temp;
    }
  if (x > y) {
    int tmp = x;
    x = y;
    y = tmp;
  }

  for (int i = x+1; i < y; i++) {
    if (i % 5 == 2 || i % 5 == 3) {
      printf("%d\n", i);
    }
  }

  return 0;
}