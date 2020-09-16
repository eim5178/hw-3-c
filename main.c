//Author: Evelyn Moore eim5178@psu.edu
//Collaborators:
#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int digit_sum(int n) {
  if (n<10){
    return n;
  }
  else{
    double l = n%10;
    double d = n/10;
    n = l+digit_sum(d);
    return n;
  }
}
int main(void) {
  int n = atof(readline("Enter an int: "));
  int n_sum = digit_sum(n);
  printf("sum of digits of %d is %d.\n",n,n_sum);
  return 0;
}

