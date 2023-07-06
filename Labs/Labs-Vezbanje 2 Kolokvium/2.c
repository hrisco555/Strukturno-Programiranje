//Да се напише програма со која ќе се печатат најмалите k елементи од низата. Низата и бројот на најмалите елементи се внесуваат преку тастатура.

#include <stdio.h>

void sort(int *a, int n){
    
    int temp;
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}

int main(){
    
    int k,n,i,j,temp;
    int a[100];
    scanf("%d %d", &n, &k);
    
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
  
    sort(a, n);
    
    printf("%d-te najmali elementi se: ", k);
    
    for(i=0;i<k;i++){
        printf("%d ", a[i]);
    }
    
    
    return 0;
}
