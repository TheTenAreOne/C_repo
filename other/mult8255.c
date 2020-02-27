#include <stdio.h>

int main(){

  int num, ans;
  printf("Enter number:\n");
  scanf("%d", &num);

  ans = num<<13;
  ans += num<<6;
  ans -= num;

  printf("%d * 8255 = %d\n", num, ans);
}
