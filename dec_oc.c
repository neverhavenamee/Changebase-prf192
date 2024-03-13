#include <stdio.h>

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
  int decimalNumber;

  printf("Enter a decimal number: ");
  scanf("%d", &decimalNumber);

  int octalNumber = decimalToOctal(decimalNumber);

  printf("The equivalent octal number is: %d\n", octalNumber);

  return 0;
}
