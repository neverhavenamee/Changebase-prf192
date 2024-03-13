#include <stdio.h>

void octalToBinary(int octal) {
  int binary = 0, i = 0;

  while (octal > 0) {
    int digit = octal % 10;
    int temp = digit;
    while (temp > 0) {
      binary = binary * 10 + (temp % 2);
      temp /= 2;
      i++;
    }
    octal /= 10;
  }

  // In dãy nhị phân ngược
  for (i = i - 1; i >= 0; i--) {
    printf("%d", binary % 10);
    binary /= 10;
  }

  printf("\n");
}

int main() {
  int octalNumber;

  printf("Enter the octal number: ");
  scanf("%d", &octalNumber);

  octalToBinary(octalNumber);

  return 0;
}
