#include <stdio.h>

int main()
{
    int b0, b1, b2, b3, d;
    printf("QUal o valor em binario? ");
    scanf("%d %d %d %d", &b3, &b2, &b1, &b0);
    d = b3*8 + b2*4 + b1*2 + b0*1;
    printf("O valor na base decimal: %d\n", d);
    printf("O valor na base octal: %o\n", d);
    printf("O valor na base hexadecimal:  %X\n", d);
}