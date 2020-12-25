#include <stdio.h>

int main(){
  int dec;
  char bin[16][5]={"0000","0001","0010","0011","0100","0101","0110","0111","1000","1001","1010","1011","1100","1101","1110","1111"};
  do{
    printf("\nImmettere il numero decimale minore di 256-->  ");
    scanf("%d",&dec);
  }while(dec>255 || dec<0);
  printf("%s %s",bin[dec>>4],bin[dec&15]);
  return 0;
}