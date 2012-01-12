#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  printf("You are now connected to Bacon!\n");
  printf("Roses are red, violets are blue\n");
  printf("Tunnel is on, but shell is about as cool as you\n");
  
  while (1){
    sleep(30);
    printf("*");
    fflush(NULL);    
  }
}
