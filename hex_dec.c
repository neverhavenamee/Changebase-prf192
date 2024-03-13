#include <stdio.h>
#include <ctype.h>

long hexToDecimal(const char hexString[]) {
  long decimal = 0;
  for (int i = 0; hexString[i] != '\0'; i++) {
    int hexDigit = tolower(hexString[i]);  // Convert to lowercase for case-insensitive handling
    if (hexDigit >= '0' && hexDigit <= '9') {
      decimal = 16 * decimal + (hexDigit - '0');  // Multiply by 16 for each digit and add value
    } else if (hexDigit >= 'a' && hexDigit <= 'f') {
      decimal = 16 * decimal + (hexDigit - 'a' + 10);  // Handle letters a-f
    } else {
      printf("Invalid hexadecimal digit: %c\n", hexDigit);
      return -1;  // Indicate error
    }
  }
  return decimal;
}

int main() {
  char hexString[10];  // Adjust size as needed

  printf("Enter a hexadecimal number: ");
  scanf("%s", hexString);

  long decimalValue = hexToDecimal(hexString);
  if (decimalValue != -1) {  // Check for errors
    printf("Decimal equivalent: %ld\n", decimalValue);
  }

  return 0;
}
