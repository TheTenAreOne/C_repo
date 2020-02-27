#include <stdio.h>

int main(){
  int i;
  long long int f[100];

  f[0] = 0;
  f[1] = 1;

  for(i = 2; i <= 45; i++){
    f[i] = f[i-1] + f[i-2];
    printf("%d\n", f[i]);
  }

  return 0;
}
