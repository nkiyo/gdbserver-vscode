#include <stdio.h>
#include <unistd.h>

int main() {
  int cnt = 0;
  while(true) {
    printf("cnt = %d\n", cnt);
    cnt++;
    sleep(1);
  }
}

