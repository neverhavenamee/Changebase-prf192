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
    default: return 'X'; // Handle invalid input (optional)
  }
}

void octalToHex(int octal) {
  int i = 0;
  char hex[32];  // Array to store hexadecimal digits (maximum 3 octal digits)

  // Process octal in groups of 3 digits (octal triad)
  while (octal > 0) {
    int triad = octal % 1000; // Get the last 3 octal digits (triad)
    int hexDigit = triad / 8; // Convert triad to a single hex digit (0-7)
    hex[i++] = digitToHex(hexDigit);
    octal /= 1000; // Shift octal right by 3 digits to process the next triad
  }

  // Print hex in reverse order (most significant digit first)
  printf("Hexadecimal equivalent: 0x");
  for (i = i - 1; i >= 0; i--) {
    printf("%c", hex[i]);
  }
  printf("\n");
}

int main() {
  int octalNumber;

  printf("Enter an octal number: ");
  scanf("%d", &octalNumber);

  octalToHex(octalNumber);

  return 0;
}
