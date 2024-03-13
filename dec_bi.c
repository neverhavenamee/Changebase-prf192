#include <stdio.h>

void decimalToBinary(int decimal) {
  int binary[32]; // Array to store binary digits (maximum 32 bits)
  int i = 0;

  while (decimal > 0) {
    binary[i] = decimal % 2;
    decimal /= 2;
    i++;
  }

  // Print binary in reverse order (rightmost digit first)
  printf("Binary equivalent: ");
  for (i = i - 1; i >= 0; i--) {
    printf("%d", binary[i]);
  }
  printf("\n");
}

int main() {
  int decimalNumber;

  printf("Enter a decimal number: ");
  scanf("%d", &decimalNumber);

  decimalToBinary(decimalNumber);

  return 0;
}
