/*
Од стандарден влез се внесуваат број на елементи на низа и самата низа. Ваша задача е да најдете најголем и најмал елемент на низата, како и да ја трансформирате низата така што секој елемент ќе се зголеми за разликата помеѓу најголемиот и најмалиот елемент и на крајот да ги испечатите најголемиот, најмалиот елемент и трансформираната низата
*/


#include <stdio.h>

void sort(int *a, int n){
    
    int max=a[0], min=a[0];
    int zbir=0;
    
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
        if(a[i]<min){
            min=a[i];
        }
    }
    
    for(int i=0;i<n;i++){
        a[i]+=(max-min);
    }
    
        printf("MAX -> %d\n", max);
        printf("MIN -> %d\n", min);
        for (int i = 0; i < n; i++) {
            printf("%d ", a[i]);
        }
        printf("\n");
    
}

int main(){
    
    int n;
    int a[100];
    scanf("%d", &n);
    
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    
    sort(a, n);
    
    
    return 0;
}
