#include <stdio.h>
#include <stdlib.h>
#include "sieve.c"

int main(){

  printf("The 25th prime: %d\n", sieve(25));
  printf("The 1,000,000th prime: %d\n", sieve(1000000));

}
