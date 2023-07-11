/*
Од стандарден влез да се прочита една низа од знаци со најмногу 100 карактери. Да се трансформира низата така што левата и десната половина од стрингот ќе си ги сменат местата. 

Напомена: Сите тест примери ќе имаат парен број на знаци. 
  */

#include <stdio.h>
#include <string.h>

int main(){
    
    char a[100];
    scanf("%s", a);
    int n=strlen(a);
    int sredina=n/2;
    char temp;
    int i;
    
    //se menuvaat levata i desnata polovina na stringot
    for(i=0;i<sredina;i++){
        temp=a[i];
        a[i]=a[sredina+i];
        a[sredina+i]=temp;
    }
    
    printf("%s\n", a);
    
    return 0;
}
