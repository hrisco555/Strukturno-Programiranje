/*
Од стандарден влез се чита позитивен број n кој ги дава димензиите на квадратна матрица од цели броеви, која се чита во продолжение. Да се напише програма која за таа матрица(макс. 100 x 100) ќе ја испечати должината на најдолгата строго растечка подниза, доколку матрицата ја гледаме ред по ред.

На пример, ако е дадена следната матрица:

1 2 3 9 8
5 5 5 5 5 
0 1 2 0 0 
9 1 2 3 4 
1 1 1 1 1
должината на најдолгата строго растечка подниза е 4, а тоа е должината на поднизата 1 2 3 4, во четвртиот ред.
  */

#include <stdio.h>


int rasteckaPodniza (int a[100][100], int n){
    int max=0,brojac,i,j;
    for(i=0;i<n;i++) {
        brojac=0;
        for (j = 0; j < n; j++) {
            if(a[i][j]<a[i][j+1]){
                brojac++;
            }
            if(brojac>max){
                max=brojac;
            }
        }
    }

return max;
}

int main(){

    int a[100][100];
    int n,i,j,max=0,brojac;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0;i<n;i++) {
        brojac=1;
        for (j = 0; j < n; j++) {
            if(a[i][j]<a[i][j+1]){
                brojac++;
            }
            if(brojac>max){
                max=brojac;
            }
        }
    }

    printf("%d", max);
    
    return 0;
}
