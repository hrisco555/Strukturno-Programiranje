/*
Од тастатура се внесуваат димензиите на една матрица (m,n <= 100), а потоа и елементите од матрицата. Да се трансформира матрицата така што средниот елемент во секоја редица ќе се замени со разликата (по апсолутна вредност) на сумата на елементите во првата половина од редицата и сумата на елементите во втората половина на редицата. Ако матрицата има парен број колони, се менува вредноста на средните два елемента. Средниот/те елемент/и влегува/ат во сумите (при непарен број на колони, средниот елемент влегува во двете суми!). Да се испечати на екран променетата матрица.
 Пример.

Влез:

m = 4

n = 4

1 3 -5 4

2 10 2 10

7 2 3 5

3 2 10 3

Излез:

1 5 5 4

2 0 0 10

7 1 1 5

3 8 8 3
  
  */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void Matrix(int a[100][100],int b[100][100],int n, int m){
    
    int zbir_leva_polovina=0, zbir_desna_polovina=0;
    int i,j;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            b[i][j]=a[i][j];
        }
    }
    
    for(i=0;i<n;i++){
        zbir_desna_polovina=0;
        zbir_leva_polovina=0;
        for(j=0;j<m/2;j++){
            zbir_leva_polovina+=a[i][j];
        }
        for(j=m/2;j<m;j++){
            zbir_desna_polovina+=a[i][j];
        }
        //(n%2==0)
        if(m%2==0){ //ako redicata e parna
            //levata polovina sto sme ja sobrale ja odzemame od desnata
           
            b[i][m/2-1]=abs(zbir_leva_polovina-zbir_desna_polovina);
            b[i][m/2]=abs(zbir_leva_polovina-zbir_desna_polovina);
        }
        else {
          b[i][m/2]=abs(zbir_leva_polovina-zbir_desna_polovina)+a[i][m/2];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
}

int main(){
    
    int a[100][100], b[100][100];
    int n,m;
    scanf("%d%d", &n,&m);
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d", &a[i][j]);
        }
    }
    
    Matrix(a, b, n, m);
    
    return 0;
}
