//Да се прочитаат два цели броеви од тастатура и на екран да се испечатат нивните сума и производ.

#include <stdio.h>

int main()
{
    int a,b,suma, proizvod;
    scanf("%d%d", &a,&b);
    suma=a+b;
    proizvod=a*b;
    printf("%d\n%d", suma, proizvod);

    return 0;
}
