#include<stdio.h>
#include<string.h>

void decrypt(char *secret) {
  int big_offset = 65;
  int little_offset = 97;
  while(*secret != '\0') {
    if((int)*secret > 64 && (int)*secret < 91) {
      *secret -= 65;
      *secret = (*secret + 13) % 26 + big_offset;
    }
    if((int)*secret > 96 && (int)*secret < 123) {
      *secret -= 97;
      *secret = (*secret + 13) % 26 + little_offset;
    }
    secret++;
  }
}

int main(void) {
  char genome[100];
  printf("Enter the genome sequence: ");
  scanf("%[^\n]s", genome);
  decrypt(genome);
  printf("%s\n", genome);
  return 0;
}

