/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the
main() function.

Do not change the code given in the main() function when you are implementing
your solution.*/

#include <stdio.h>

int minimum(int a, int b);  // minimun function prototype
int maximum(int c, int d);  // maximum function prototype
int multiply(int x, int y); // multiply function prototype

int main() {
  int no1, no2;
  printf("Enter a value for no 1 : ");
  scanf("%d", &no1);
  printf("Enter a value for no 2 : ");
  scanf("%d", &no2);
  printf("%d ", minimum(no1, no2));
  printf("%d ", maximum(no1, no2));
  printf("%d ", multiply(no1, no2));
  return 0;
}

int minimum(int a, int b) {

  return a > b ? b : a; // returning the minimum number by using the conditional
                        // operator
}

int maximum(int c, int d) {

  return c > d ? c : d; // returning the maxium number by using the conditional
                        // operator
}

int multiply(int x, int y) { return x * y; }
