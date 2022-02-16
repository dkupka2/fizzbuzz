#include <stdio.h>

int main(void) {

  int n = 1;

  while (n <= 100) {

    if ((n % 3 == 0) && (n % 5 == 0)) {
      printf("FizzBuzz\t");
    }
    else if (n % 3 == 0) {
      printf("Fizz\t");
    }
    else if (n % 5 == 0) {
      printf("Buzz\t");
    }
    else
      printf("%d\t", n);
    n++;
  }

  printf("\n");

  return 0;
}
