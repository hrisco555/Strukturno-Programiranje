/*
Да се напише програма која чита две целобројни матрици со димензија mxn, а потоа печати колку колони од првата матрица се наоѓаат во втората матрица.
*/

#include <stdio.h>

void Matrix(int a[100][100], int b[100][100],int n, int m){
    
    int brojac=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(a[j][i]==b[j][i]){
                brojac++;
            }
        }
    }
    printf("%d\n", brojac-m);
}

int main() {
    
    int  a[100][100], b[100][100];
    int n, m;
    scanf("%d %d", &n, &m);
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d", &a[i][j]);
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d", &b[i][j]);
        }
    }
    
    Matrix(a,b,n,m);
        
    return 0;
}
