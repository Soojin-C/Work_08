#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "sieve.h"


int sieve (int n){

  char size = (int)(n * log(n) * 1.15);
  printf("%d -- %d", (int)log(n), size);
  char table[size];
  int factor = 2;
  int curr_number = 1;
  while (factor < size){

    table[ factor ] = 0;
    if (curr_number == n){

      return factor;

    }
    else {

      int multiple = factor + factor;
      while (multiple < size || table[ multiple ] == 1){

	table[ multiple ] = 1;
	multiple = multiple + factor;
	
      }
      
    }
    factor ++;
    curr_number++;
    while (table[ factor ] == 1){

      factor++;

    }
    printf("factor -> %d \n current -> %d ", factor, curr_number);
  }
  
  return size;

}

