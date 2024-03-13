#include <stdio.h>
#include <math.h> // For pow function

int octalToDecimal(int octal) {
  int decimal = 0, i = 0;

  while (octal > 0) {
    int digit = octal % 10;
    if (digit >= 8) {
      printf("Invalid octal digit: %d\n", digit);
      return -1; // Indicate error
    }
    decimal += digit * pow(8, i);
    octal /= 10;
    i++;
  }

  return decimal;
}

int main() {
  int octalNumber;

  printf("Enter an octal number: ");
  scanf("%d", &octalNumber);

  int decimalNumber = octalToDecimal(octalNumber);

  if (decimalNumber != -1) {
    printf("The equivalent decimal number is: %d\n", decimalNumber);
  }

  return 0;
}
