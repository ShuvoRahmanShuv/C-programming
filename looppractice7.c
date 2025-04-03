#include <stdio.h>
int main() {
  int n = 5, not_prime = 0;
  if (n == 0 || n == 1) {
    not_prime = 1;
  } else {
    for (int i = 2; i < n; i++) {
      if (n % i == 0 && n != 2) {
        not_prime = 1;
      }
      break;
    }
  }
  if (not_prime = 1) {
    printf("%d is not a prime number\n", n);
  } else {
    printf("%d is a prime number\n", n);
  }
  return 0;
}
