#include <stdio.h>
#include <ctype.h>

int hexToOctalDigit(char hexDigit) {
  hexDigit = tolower(hexDigit);  // Ensure case-insensitive handling

  switch (hexDigit) {
    case '0': return 0;
    case '1': return 1;
    case '2': return 2;
    case '3': return 3;
    case '4': return 4;
    case '5': return 5;
    case '6': return 6;
    case '7': return 7;
    case '8': return 10;  // Adjust for octal representation
    case '9': return 11;
    case 'a': return 12;
    case 'b': return 13;
    case 'c': return 14;
    case 'd': return 15;
    case 'e': return 16;
    case 'f': return 17;
    default:
      printf("Invalid hexadecimal digit: %c\n", hexDigit);
      return -1;  // Indicate error
  }
}

void convertHexToOctal(const char hexString[]) {
  printf("Octal equivalent: ");

  for (int i = 0; hexString[i] != '\0'; i++) {
    int octalDigit = hexToOctalDigit(hexString[i]);
    if (octalDigit == -1) {
      return;  // Exit upon error
    }

    // Print octal digit after every two hexadecimal digits (4 bits)
    if (i % 2 == 1) {
      printf("%d", octalDigit);
    } else {
      octalDigit <<= 3;  // Shift left for proper grouping
    }
  }

  printf("\n");
}

int main() {
  char hexString[10];  // Adjust size as needed

  printf("Enter a hexadecimal number: ");
  scanf("%s", hexString);

  convertHexToOctal(hexString);

  return 0;
}
