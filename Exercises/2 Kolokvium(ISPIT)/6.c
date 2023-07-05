/*
Да се напише програма која вчитува матрица со димензии MxN (макс. 100x100). На почетокот се внесуваат димензиите на матрицата, а потоа и елементите на матрицата кои се само вредностите 1 и 0. Програмата треба да изброи и отпечати на СИ во колку од редиците и колоните има барем 3 последователни елементи со вредност 1.

Пример:

 1  1  1  0
 1  0  1  1
 1  0  0  1
 
1 ред + 1 колона = 2
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX 100

int main() {
   
    int m, n;
    int a[MAX][MAX];
    int posledovatelni_edinici = 0, redovi_posledovatelni = 0, koloni_posledovatelni = 0;

    scanf("%d%d", &n, &m);
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    //Proveruva redovite dali ima 3 posledovatelni edinici
    for (int i = 0; i < n; i++) {
        int posledovatelni_edinici = 0;
        for (int j = 0; j < m; j++) {
            if (a[i][j] == 1) {
                posledovatelni_edinici++;
                if (posledovatelni_edinici == 3) {
                    redovi_posledovatelni++; //ako ima 3 posledovatelni edinici vo redovite izbroj mi gi i i tie. Koga ke stignes do 3, break.
                    break;
                }
            } else {
                posledovatelni_edinici = 0;
            }
        }
    }
    
    for (int j = 0; j < m; j++) {
        int posledovatelni_edinici = 0;
        for (int i = 0; i < n; i++) {
            if (a[i][j] == 1) {
                posledovatelni_edinici++;
                if (posledovatelni_edinici == 3) {
                    koloni_posledovatelni++; //ako ima 3 posledovatelni koloni vo redovite izbroj mi gi i i tie. Koga ke stignes do 3, break.
                    break;
                }
            } else {
                posledovatelni_edinici = 0;
            }
        }
    }

    printf("%d\n",redovi_posledovatelni+koloni_posledovatelni);
   

    return 0;
}
