/*
Да се напише програма која за низа од N броеви ќе проверува дали парот кој се наоѓа еден до друг е прост број.

НАПОМЕНА: низата е составена од цифри од 0 до 9
  */

#include <stdio.h>

int Prosti_Broevi(int n){
    
    int brojac=0;
    //stavame od 2 deka moze da ima 2 deliteli
    for(int i=2;i<=(n/2);i++){ //do polovina ides za da proveris kolku deliteli ima
        if(n%i==0){ 
            brojac++;
        }
    }
    if(brojac==0){
        return 1;
    }
    else {
        return 0;
    }
    
}

int main(){
    
    int a[100];
    int n,i;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
            //i+2 za da odi na sledniot par
    for(i=0;i<n;i+=2){
        if(i==(n-1)){ //za posledniot broj da go odzeme, primer ako e ednocifren broj, ako go neame ova ke bide 70
            if(Prosti_Broevi(a[i])){
                printf("brojot %d e prost\n",  a[i]);
            }
            else {
                printf("brojot %d NE e prost\n", a[i]);
                break;
            }
        }
        else {      
             if(Prosti_Broevi(a[i]*10+a[i+1])){
                printf("brojot %d e prost\n", a[i]*10+a[i+1]);//go zima brojot go mnozi so 10 i go sobira so sledniot element
            }
            else {
                printf("brojot %d NE e prost\n", a[i]*10+a[i+1]);
            }
            //i++; //da otide na sledniot par 
        }
    }
    
    return 0;
}
