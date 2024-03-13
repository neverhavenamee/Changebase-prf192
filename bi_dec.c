#include <stdio.h>

int binaryToDecimal(int binary) {
  int decimal = 0, base = 1, remainder;

  while (binary != 0) {
    remainder = binary % 10;
    decimal += remainder * base;
    base *= 2;
    binary /= 10;
  }

  return decimal;
}

int main() {
  int binaryNumber;

  printf("Enter a binary number: ");
  scanf("%d", &binaryNumber);

  int decimalNumber = binaryToDecimal(binaryNumber);

  printf("The equivalent decimal number is: %d\n", decimalNumber);

  return 0;
}
