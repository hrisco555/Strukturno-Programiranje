/*
Од стандарден влез се читаат соодветно низа со M елементи и низа со N елементи, ваша задача е да ги споите двете низи во трета сортирана низа по растечки редослед. 

Објаснување: Се внесува најпрвин должината на првата низа М, па потоа се чита првата низа, потоа се внесува должината на втората низа N, па втората низа.

Напомена: Елементите во двете низи кои се внесуваат се сортирани. Максималната должина на низите е 100. 
  */

#include <stdio.h>

void sort(int *a,int n){
    
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
    
    int n,i,m,j;
    int k=0;
    int a[100], b[100], c[200];
    
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    
    scanf("%d", &m);
    for(j=0;j<m;j++){
        scanf("%d", &b[j]);
    }
    
    for(i=0;i<n;i++){
        c[k]=a[i];
        k++;
    }
    
    for(j=0;j<m;j++){
        c[k]=b[j];
        k++;
    }
    
    sort(c,k); //koja niza se sortira- 3ta i k - broj na elementi kaj sto se sortira

    for(int i=0;i<k;i++){
        printf("%d ", c[i]);
    }
    
    
    return 0;
}

