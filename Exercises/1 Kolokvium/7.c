/*
Со помош на знаците ‘@’,'%', и ‘.‘ се формира квадратна слика со „должина“ m (m>2) која претставува квадрат од знаците '.', впишан во квадрат од знаците @ и %(види примери). 
За внесено m да се испечати на екран соодветната слика. Внимавајте – не печатете нити еден дополнителен знак, како празно место, непотребен знак за нов ред... Сликата завршува со знак за нов ред. 
Забелешка: Бидејќи е дадено ограничување за m, во точно решение на задачата не треба да се користи низа/матрица.
*/

#include <stdio.h>


int main() {

    int i, j, m;
    scanf("%d", &m);
    if (m > 2) {
        for (i = 1; i <= m; i++) { //redicite so i
            for (j = 1; j <= m; j++) { //kolonite gi pravime so j
                if (j == 1 || j == m) { //vo prvata i poslednata kolona se %
                    printf("%%");
                } else {
                    if (i == 1 || i==m) { //prvata redica i poslednata da gi popolni so @ megu prvoto i poslednoto
                        printf("@");
                    }
                    else {
                            printf("."); //drugiot del popolni go so .
                    }
                }
            }
            printf("\n");
        }
    }

    return 0;
}
