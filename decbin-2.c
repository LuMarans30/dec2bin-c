#include <stdio.h>
#include <limits.h>

unsigned long long toBin(unsigned long long decimale)
{
    unsigned long long m = decimale ? toBin(decimale / 2) : 0;
    printf("%d", (int)(decimale % 2));
    return m;
}

int main(){
    unsigned long long dec;
    int k;
    char binary[64];
    printf("\nImmettere un valore decimale--> ");
    scanf("%llu",&dec);
    printf("\nIl numero binario e'--> ");
    toBin(dec);

    return 0;
}
