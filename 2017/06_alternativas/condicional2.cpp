#include <stdio.h>
#include <stdlib.h>

int main(){
  int bit1,
      bit2;
  printf("Introduce el primer bit: ");
  scanf(" %i", &bit1);
  printf("Introduce el segundo bit: ");
  scanf(" %i", &bit2);
  
  if (bit2 == 0)
      if (bit1 == 0)
          printf("0");
      else
          printf("1");
  else
      if (bit1 == 0)
          printf("2");
  else
      printf("3");
      printf("\n");

	return EXIT_SUCCESS;
}
