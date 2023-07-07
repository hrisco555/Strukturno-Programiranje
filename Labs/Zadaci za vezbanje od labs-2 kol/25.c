/*
Да се напише рекурзивна функција преку која бројот ќе се трансформира на тој начин што секоја непарна цифра ќе се намали за 1, а парните цифри ќе бидат заменети со нула. Функцијата треба да го врати трансформираниот број. Да се напише и главна програма која ќе ја тестира работата на функцијата.
  */

#include <stdio.h>

int TransformiranBroj(int n){
    
    if(n==0){
        return 0;
    }
    
    int cifra=n%10;
    
    if(cifra%2==0){
        cifra=0;
    }
    else if(cifra%2!=0){
        cifra=cifra-1;
    }
    
    return cifra + 10 * TransformiranBroj(n/10);
    
}

int main(){
    
    int n;
    scanf("%d", &n);
    
    printf("Brojot e %d\n", TransformiranBroj(n));
    
    return 0;
}


