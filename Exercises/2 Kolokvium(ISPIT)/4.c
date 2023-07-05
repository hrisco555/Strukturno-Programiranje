/*
Еден елемент од матрица ја дели матрицата на 4 квадранти (прикажани на сликата). Притоа самиот елемент кој ја дели матрицата припаѓа во четвртиот квадрант (-5 во примерот на сликата).

Од стандарден влез се внесува матрица со димензии NxM (1 <= N, M < 100). Потоа се внесуваат два броеви кои претставуваат индекси на еден елемент од матрицата.

Да се најдат сумите на секој од квадрантите и да се испечатат на стандарен излез. Притоа се печати сумата за првиот квадрант, па за вториот, па третиот и на крај за четвртиот. Доколку не може да се креира квадрант, тогаш за сумата на тој квадрант треба да се испечати 0.
  */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX 100

void KvadrantiMatrica(int a[MAX][MAX], int n, int m){
    
    int indeks1,indeks2;
    int zbir1=0,zbir2=0,zbir3=0,zbir4=0;
    scanf("%d%d", &indeks1, &indeks2);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            
            if(i<indeks1 && j<indeks2){
                zbir1+=a[i][j];
                }
            else if(i<indeks1 && j>=indeks2){
                zbir2+=a[i][j];
                }
            else if(i>=indeks1 && j<indeks2){
                zbir3+=a[i][j];
                }
            else if(i>=indeks1 && j>=indeks2){
                zbir4+=a[i][j];
                }
            }
        }
        
    printf("%d %d %d %d", zbir2, zbir1, zbir3, zbir4);

        }

int main(){
    
    int a[MAX][MAX];
    int n,m,i,j;
    int indeks1, indeks2;
    
    scanf("%d%d", &n, &m);

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
            }
        }
    
    KvadrantiMatrica(a, n, m);
    
    return 0;
}
