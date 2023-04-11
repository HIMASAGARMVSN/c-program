#include <stdio.h>

int main() {
   int number, digit, sum = 0;

   printf("Enter an integer: ");
   scanf("%d", &number);

   for (; number != 0; number /= 10) {
      digit = number % 10;
      sum += digit;
   }


