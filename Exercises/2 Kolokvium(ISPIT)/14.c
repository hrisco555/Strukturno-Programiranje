/*
Да се напише програма во која се вчитува матрица од цели броеви A со N редици и N * 2 колони (N не е поголемо од 50). Програмата треба да ја трансформира вчитаната матрица во нова матрица B, така што сите елементи десно од N-тата колона ќе ги префрли под N-тата редица, односно од матрица со димензија N редици и 2 * N колони ќе се добие матрица со 2 * N редици x N колони.

Пример за N = 3 Влез:
3
1  2  3  4  5  6
7  8  9  10  11  12
13  14  15  16  17  18

Излез:

1  2  3  
7  8  9  
13  14  15
4  5  6
10  11  12
16  17  18

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
//#define MAX 100
#define MAX_N 50

void Matrix_2N(int A[MAX_N][MAX_N*2],int B[MAX_N][MAX_N*2], int N){
   
    
    for(int i=0;i<N;i++){//redicite N
        for(int j=0;j<N*2;j++){ //kolonite N*2
            B[i][j]=A[i][j];//transformira matricata od a vo b
            }
        }
    
    for(int i=0;i<N;i++){//redicite N
        for(int j=0;j<N*2;j++){ //kolonite N*2
            B[i][j]=A[i][j];//transformira matricata od a vo b
            B[i+N][j]=A[i][j+N];
            }
        }
    
    for(int i=0;i<N*2;i++){//redicite N
        for(int j=0;j<N;j++){ //kolonite N*2
            printf("%d ", B[i][j]);
            }
        printf("\n");
        }
}

int main(){

    int A[MAX_N][MAX_N*2], B[MAX_N][MAX_N*2];
    int N;
    scanf("%d", &N);
    
    for(int i=0;i<N;i++){//redicite N
        for(int j=0;j<N*2;j++){ //kolonite N*2
                scanf("%d ", &A[i][j]);
            }
        }
    
    Matrix_2N(A, B, N);
    
}
