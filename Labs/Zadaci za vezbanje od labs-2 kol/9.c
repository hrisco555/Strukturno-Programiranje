/*
Се чита низа од n цели броеви. Провери дали низата е специјална. Ако од сите броеви на парни позиции 50% или повеќе се парни броеви, и од сите броеви на непарна позиција 30% или помалку се непарни броеви, тогаш низата е специјална. Испечати 1 ако е низата специјална, испечати 0 ако не е.
  */

#include <stdio.h>
#include <string.h>

int isSpecial(int niza[], int n){
    
    int parni=0, neparni=0;
    double procent_parni = (double) parni/(n/2)*100;
    double procent_neparni=(double) neparni/(n/2)*100;
    
    for(int i=0;i<n;i++){
        if(i%2==0){
            if(niza[i]%2==0){
                parni++;
            }
        }
        else {
            if(niza[i]%2!=0){
                neparni++;
            }
        }
    }
    
    if(procent_parni >= 50 && procent_neparni <= 30){
        return 1; //nizata e specijalna
    }
    else {
        return 0;
    }
}

int main(){
    
    int n;
    int niza[50];
    int parni=0, neparni=0;
    scanf("%d", &n);
    
    for(int i=0;i<n;i++){
        scanf("%d", &niza[i]);
    }
    
    int result = isSpecial(niza, n);
    
    printf("%d\n", result);
    
    
    return 0;
}
