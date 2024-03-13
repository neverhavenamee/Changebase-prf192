#include <stdio.h>
#include <ctype.h> // For tolower function

int hexToBinary(char hex) {
  hex = tolower(hex); // Convert hex digit to lowercase for case-insensitive handling
  switch (hex) {
    case '0': return 0;
    case '1': return 1;
    case '2': return 10;
    case '3': return 11;
    case '4': return 100;
    case '5': return 101;
    case '6': return 110;
    case '7': return 111;
    case '8': return 1000;
    case '9': return 1001;
    case 'a': return 1010;
    case 'b': return 1011;
    case 'c': return 1100;
    case 'd': return 1101;
    case 'e': return 1110;
    case 'f': return 1111;
    default: return -1; // Handle invalid input (optional)
  }
}

void hexToBinaryString(char hexString[]) {
  int i = 0, binary = 0;

  // Loop through each character in the hex string
  while (hexString[i] != '\0') {
    int binaryDigit = hexToBinary(hexString[i]);
    if (binaryDigit == -1) {
      printf("Invalid hexadecimal digit: %c\n", hexString[i]);
      return; // Exit if invalid digit encountered
    }

    // Shift existing binary value left by 4 bits to make space for the new digit
    binary = binary << 4;
    // Add the new binary digit to the least significant position
    binary |= binaryDigit;

    i++;
  }

  // Print binary representation (reverse order for readability)
  printf("Binary equivalent: ");
  for (int j = 31; j >= 0; j--) { // Loop for 32 bits (maximum for a 4-digit hex)
    printf("%d", (binary >> j) & 1);
  }
  printf("\n");
}

int main() {
  char hexNumber[10]; // Buffer to store the hex number (assuming max 4 digits)

  printf("Enter a hexadecimal number: ");
  scanf("%s", hexNumber);

  hexToBinaryString(hexNumber);

  return 0;
}
