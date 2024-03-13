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

int decimalToOctal(int decimal) {
  int octal = 0, base = 8;
  int remainder;

  while (decimal > 0) {
    remainder = decimal % base;
    octal = octal * 10 + remainder;
    decimal /= base;
  }

  return octal;
}

int main() {
  int binaryNumber;

  printf("Enter a binary number: ");
  scanf("%d", &binaryNumber);

  int decimalNumber = binaryToDecimal(binaryNumber);
  int octalNumber = decimalToOctal(decimalNumber);

  printf("The equivalent octal number is: %d\n", octalNumber);

  return 0;
}
