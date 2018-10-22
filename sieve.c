#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "sieve.h"


int sieve (int n){
  int size;
  if ( n < 50000){

    size = (int) (n * log(n) * 1.3);

  }
  else{

    size = (int)(log(n));
    printf("%d", size);
    size *= n;
    size *= 1.15;

  }
  //char table[size];
  //char * pointer = &table[size];
  printf("%d -- %d\n", (int)log(n), size);
  char * pointer = calloc(sizeof(int), size);
  int factor = 2;
  int curr_number = 1;
  
  while (factor < size){

    
    *(pointer + factor) = 0;
    if (curr_number == n){

      
      return factor;

    }
    else {

      //printf("error\n");
      int multiple = factor + factor;
      while (multiple < size - 1 || *(pointer + multiple ) == 1){

	*(pointer + multiple ) = 1;
	multiple = multiple + factor;
	
      }
      
    }
    factor ++;
    curr_number++;
    while ((factor + 1  < size) && *( pointer + factor ) == 1 ){

      factor++;

    }
    //printf("factor -> %d  current -> %d \n", factor, curr_number);
  }
  
  return size;

}

