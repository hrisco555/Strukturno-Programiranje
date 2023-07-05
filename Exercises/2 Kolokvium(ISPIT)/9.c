/*
Да се имплементира рекурзивна функција која за низа од цели броеви $[a{0}, a{1}, ..., a_{n-1}]$ ќе ја пресмета вредноста на непрекинатата дропка дефинирана како:

𝑣=𝑎0+1𝑎1+...1𝑎𝑛−2+1𝑎𝑛−1

Да се напише програма во која се чита цел број N, по што се читаат елементите на низа од N цели броеви (не повеќе од 100). Потоа се повикува рекурзивната функција и се печати резултатот во нов ред.
  */
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#define MAX 100

double Neprekinata_Dropka(int broj[100],int n){
    
    if(n==1){
        return broj[0]; //vraka 0 vo nizata
    }
    
    return broj[0] + 1.0 / Neprekinata_Dropka(broj+1 , n-1);
    
}

int main(){
    
    int broj[100],n;
    scanf("%d", &n);
    
    for(int i=0;i<n;i++){
        scanf("%d", &broj[i]);
    }
    
    double v = Neprekinata_Dropka(broj, n);
    printf("%f", v);
    
    return 0;
}
