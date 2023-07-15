#include <stdio.h>

/*
Да се напише програма која за матрица внесена од тастатура ќе ја пресмета
разликата на збирот на елементите на непарните колони и збирот на
елементите на парните редици. Матрицата не мора да биде квадратна.
*/
 
/*
int main() {
    
    int i,j,n,m;
    int suma_parni=0, suma_neparni=0;
    int a[100][100];
    scanf("%d %d", &n, &m);
    
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d", &a[i][j]);
        }
    }
    
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if((i+1)%2==1){ //dali redicata e neparna - AKO POCNUVA OD 1
                suma_neparni+=a[i][j];
            }
            if((j+1)%2==0){ //ako kolonite se parni
                suma_parni+=a[i][j];
            }
        }
    }
    
    if(suma_neparni>suma_parni){
        printf("Razlikata e %d\n", suma_neparni-suma_parni);
    }
    else {
        printf("Razlikata e %d\n", suma_parni-suma_neparni);
    }
    
    return 0;
}
*/


//2 ZAD
/*
Да се напише програма која за матрица внесена од тастатура ќе ги замени
елементите од главната дијагонала со разликата од максималниот и
минималниот елемент во матрицата. Резултантната матрица да се испечати
на екран.
*/

/*
int main() {
    
    int i,j,n;
    int max=-99999, min=99999;
    int a[100][100];
    scanf("%d ", &n);
    
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d", &a[i][j]);
        }
    }
    
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i][j]>max){
                max=a[i][j];
            }
            if(a[i][j]<min){
                min=a[i][j];
            }
        }
    }
    
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j){ //glav dijag
                a[i][j]=max; //zameni gi so max elemem
            }
            if(i+j==n-1){ //sporedna dijag
                a[i][j]=min; //zameni gi so min element
            }
            if(i==j && i+j==n-1){ //sredisen element
                a[i][j]=min+max;
            }
        }
    }
    
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    
}
*/


//ZAD3
/*
Да се напише програма која за квадратна матрица внесена од тастатура ќе
испечати на екран дали таа е симетрична во однос на главната дијагонала.
*/

/*
int main() {
    
    int i,j,n;
    int flag=1;
    int a[100][100];
    scanf("%d ", &n);
    
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d", &a[i][j]);
        }
    }
    
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i][j]!=a[j][i]){ //ako ne e simetricna
                flag=0;
                break;
            }
        }
    }
    
    if(flag){
        printf("Matricata e simetricna vo odnos na glavnata dijagonala\n"); //ako se site elem isti vo edna polovina
    }
    
    
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    
}

*/
