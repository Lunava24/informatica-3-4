#include <stdio.h>

int main() {
  // Example: Print numbers from 1 to 10
  /*int i;

  for (i = 1; i < 21; ++i)
  {
    printf("%d ", i);
  }
  return 0;*/

  // Exercise 1
  int n;
  printf("Enter a positive number:");
  scanf("%d", &n);

  int i;
  int sum = 0;
  for (i = 1; i < n + 1; ++i){
    sum = sum + i;
  }
  printf("%d\n", sum);

// Exercise 2
int l;
printf("enter a positive number:");
scanf("%d", &l);

int e;
int factorial = 1;
for (e = 1; e < l + 1; ++e){
  factorial = factorial * e;
}
printf("%d", factorial); 
}

