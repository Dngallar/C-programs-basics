#include <stdio.h>
#include <stdlib.h>

int main( int argc, char *argv[] )  {
  for(int i=0; i<=argc-1; i++){
      printf("%s\t", argv[i]);
  }
   return 0;
}
