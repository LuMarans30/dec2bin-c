#include <stdio.h>
#define MAXINT 2147483648
int main(){
  unsigned long dec;
  int k;
  unsigned long mask;
  printf("\nImmettere un valore decimale--> ");
  scanf("%lu",&dec);
  printf("\nIl numero binario e'--> ");
  for(mask=MAXINT,k=0;mask;mask=mask>>1,k++)
  {
    if(k%4==0)
      printf(" ");
    if(dec&mask)
      printf("1");
    else
      printf("0");
  }
  return 0;
}