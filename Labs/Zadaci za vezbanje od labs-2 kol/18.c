/*
Од стандарден влез се вчитува квадратна матрица со n редици и колони. Прво се вчитува бројот n, па потоа и n елементите на матрицата.

Доколку n е непарен број да се испечати пораката GRESKA и да заврши програмата.

Потребно е матрицата да се здипли како што е прикажано на сликата. При диплење на матрицата, се собираат елементите на позициите што се поклопуваат при диплењето.
  */

#include <stdio.h>

void Matrix(int a[100][100],int n){
    
    int i,j;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(n % 2 != 0){
                printf("GRESKA\n");
                return 0;
            }
        }
    }
    
    for(i=0;i<n/2;i++){
        for(j=0;j<n;j++){
            a[i][j]+=a[n-1-i][j];
        }
    }
    
    for(i=0;i<n;i++){
        for(j=0;j<n/2;j++){
            a[i][j]+=a[i][n-1-j];
        }
    }
    
    for(i=0;i<n/2;i++){
        for(j=0;j<n/2;j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
     
}

int main() {
    
    int  a[100][100];
    int n;
    scanf("%d", &n);
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d", &a[i][j]);
        }
    }
    
    Matrix(a, n);
        
    return 0;
}
