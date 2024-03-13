#include <stdio.h>

char digitToHex(int digit) {
  switch (digit) {
    case 0: return '0';
    case 1: return '1';
    case 2: return '2';
    case 3: return '3';
    case 4: return '4';
    case 5: return '5';
    case 6: return '6';
    case 7: return '7';
    case 8: return '8';
    case 9: return '9';
    case 10: return 'A';
    case 11: return 'B';
    case 12: return 'C';
    case 13: return 'D';
    case 14: return 'E';
    case 15: return 'F';
    default: return 'X'; // Handle invalid input (optional)
  }
}

void decimalToHex(int decimal) {
  int i = 0;
  char hex[32]; // Array to store hexadecimal digits (maximum 32 nibbles)

  // Process decimal in groups of 4 bits (nibbles)
  while (decimal > 0) {
    int remainder = decimal % 16; // Get the last 4 bits (nibble)
    hex[i++] = digitToHex(remainder);
    decimal /= 16; // Shift decimal right by 4 bits to process the next nibble
  }

  // Print hex in reverse order (most significant nibble first)
  printf("Hexadecimal equivalent: 0x");
  for (i = i - 1; i >= 0; i--) {
    printf("%c", hex[i]);
  }
  printf("\n");
}

int main() {
  int decimalNumber;

  printf("Enter a decimal number: ");
  scanf("%d", &decimalNumber);

  decimalToHex(decimalNumber);

  return 0;
}
