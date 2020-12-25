#include <stdio.h>
#define N 255
int main() {
  int dec;
  int bit[8];
  int i;

  do{
    printf("\nImmettere un numero naturale minore di 256--> ");
    scanf("%d",&dec);
  }while(dec<=0 || dec>N);
  i=0;
  while(dec>0)
  {
    bit[i++]=dec%2;
    dec/=2;

  }
  printf("\nIl numero binario corrispondente e'--> ");
  i--;
  while(i>=0)
  {
    printf("%d",bit[i--]);
  }
  return 0;
}