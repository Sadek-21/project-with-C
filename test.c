#include <stdio.h>
void SuppDouble(int T[], int *N) {
  int i = 0;
  int j = 1;
  while (j < *N) {
    if (T[i] != T[j]) {
      T[++i] = T[j];
    }
    j++;
  }
  *N = i + 1;
}
int main(void) {
  int T[] = {1, 3, 3, 8, 8, 12};
  int N = 6;

  SuppDouble(T, &N);

  for (int i = 0; i < N; i++) {
    printf("%d ", T[i]);
  }
  printf("\n"); // prints "1 3 8 12"

  return 0;
}
