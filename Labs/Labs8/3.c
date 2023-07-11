/*
Да се прочита број N од тастатура. Да се дефинира функција form(int n) што ќе испечати форма од ѕвезди како што е прикажано на сликата.

За да се освојат сите поени од вежбата, потребно е функцијата form да биде рекурзивна.


5
*****
****
***
**
*

  */

#include <stdio.h>

void pechati_zvezdi(int n, char znak){
    
    if(n==0){
        printf("\n");
        return;
    }
    printf("%c", znak);
    pechati_zvezdi(n-1,znak);
}


void form(int n){
    
    if(n==0){
        return;
    }
    
    if(n>0){
        pechati_zvezdi(n, '*');
    }
    
    form(n-1);
    
}

int main(){
    
    int n;
    scanf("%d", &n);
    form(n);
    
    return 0;
}
