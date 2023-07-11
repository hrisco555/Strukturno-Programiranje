/*
Да се напише програма која чита две целобројни матрици со димензија mxn, а потоа печати колку колони од првата матрица се наоѓаат во втората матрица.
  */

#include <stdio.h>

int main() {
   
   int a[100][100], b[100][100];
   int i,j,m,n,brojac=0,k;
   scanf("%d , %d", &n, &m);
   for(i=0;i<n;i++){
       for(j=0;j<m;j++){
           scanf("%d", &a[i][j]);
       }
   }
   
   for(i=0;i<n;i++){
       for(j=0;j<m;j++){
           scanf("%d", &b[i][j]);
       }
   }
   
   for(i=0;i<m;i++){
       for(j=0;j<m;j++){
           if(a[i][j]==b[i][j]){
               brojac++;
           }
       }
   }

    printf("%d", brojac);
    
    return 0;
}
