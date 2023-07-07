/*
Од стандарден влез се чита број n, а потоа се читаат и n броеви. Потребно е на екран да се испечатат сите броеви кои што се строго растечки односо секоја цифра е поголема од претходната (1589 е растечки, 1529 не е растечки). Проверката за тоа дали бројот е растечки да се реализира со посебна функција која ќе врати 1 ако е растечки и -1 ако не е растечки. Дополнително ако бројот е растечки за него треба да се повика функција која ќе ја пресмета сумата на цифрите од кои е составен.

Дополнително: функцијата за пресметување на сума на цифри да биде рекурзивна

Печатењето треба да е во следен формат: 1234 (suma:  10)
  */

//ne iskaca

#include <stdio.h>

int RastechkiBroj(int n){

    int prva_cifra=n%10; //poslednata cifra od brojot ja vadi
    int prethodna_cifra=n/10%10; //pretposlednata cifra od brojot ja vadi

    if(n==0){ //ako e strogo rastecka vrati 1
        return 1;
    }

    if(prethodna_cifra>prva_cifra){ //ako ne e strogo rastecka vrati mi -1
        return -1;
    }
    else if(prva_cifra>prethodna_cifra){
        return RastechkiBroj(n/10);
    }

}

int SumaNaCifri(int n){

    int prva_cifra=n%10;

    if(n==0){
        return n;
    }
    return  prva_cifra+SumaNaCifri(n/10);

}

int main(){

    int broj,n;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &broj);
        if(RastechkiBroj(n)){
            printf("%d (suma: %d) \n", broj, SumaNaCifri(broj));
        }
    }

    return 0;
}
