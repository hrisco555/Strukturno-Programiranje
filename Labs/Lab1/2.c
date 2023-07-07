//Да се пресмета просечна висина(cm) на тројца студенти и истата да се испечати претставена во m и cm.

#include <stdio.h>

int main() {

    int cm, m, a,b,c, prosecna_visina;
    scanf("%d%d%d", &a, &b, &c);
    prosecna_visina=(a+b+c)/3;
    printf("%d m %d cm", prosecna_visina/100, prosecna_visina%100);

    return 0;
}
