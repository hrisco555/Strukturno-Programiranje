/*
Од тастатура се внесуваат димензиите m и n на матрица од цели броеви, Аmxn, ( 0 < m, n < 30 ) и нејзините елементи. Потоа се внесуваат два цели броја r и k  (индекси на редица/колона од матрицата, т.е. 0 <= r < m и 0 <= k < n).

Да се напише програма која ja трансформира матрицата А така што елементите над редицата r и лево од колоната k се заменуваат со минималната вредност од матрицата А.

Новодобиената матрица да се запише во датотека "matrica.txt".

Пример

Влез

4 6 // m и n

2 3 // r и k

1 2 3 4 5 1             

2 9 4 5 1 3

4 5 6 7 3 2

1 2 3 3 2 8

 

Излез во датотека "matrica.txt"

1 1 1 4 5 1   

1 1 1 5 1 3

4 5 6 7 3 2

1 2 3 3 2 8
  */


#include <stdio.h>
void printFile() {
    FILE *f=fopen("matrica.txt","r");
    char line[1000];
    while(!feof(f)){
        fgets(line,1000,f);
        if (feof(f))
            break;
        printf("%s",line);
    }
    fclose(f);
}

int main(){
    
    FILE *f=fopen("matrica.txt","w");

    int a[100][100];
    int n,m,i,j,r,k;
    int min=99999;
    
    scanf("%d%d", &n, &m);
    scanf("%d %d", &r, &k); //indeksi na redica i kolona
    
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d", &a[i][j]);
        }
    }
    
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(a[i][j]<min){
                min=a[i][j];
            }
        }
    }
    
    //tuka ke gi zameni broevite - zavisi koi broevi ke gi stavime kaj r i k
    //nad redicata i levo od kolonata - znaci pomalo od r i pomalo od k (i<r i<k)
    for(i=0;i<r;i++){
        for(j=0;j<k;j++){
            a[i][j]=min;
        }
    }
    
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    
    
    printFile();
    
    return 0;
}
