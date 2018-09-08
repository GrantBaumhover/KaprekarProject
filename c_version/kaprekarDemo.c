#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(int argc, char **argv) {
 
printf("kaprekarUtils.h\n");
 
  if(argc != 2) {
    printf("Usage: %s n\n", argv[0]);
    exit(1);
  }

  int variable = atoi(argv[1]);

  if(isKaprekar(variable)) {
    printf("%d is a Kaprekar Number!\n", variable);
  } else {
    printf("%d is not a Kaprekar Number!\n", variable);
  }

  return 0;
}
