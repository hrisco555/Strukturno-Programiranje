/*
Да се дефинираат функциите:

divisibleByK (int number, int k) - која ќе враќа 1 доколку бројот k е делител на бројот number, a 0 во спротивно
nextDivisibleByK (int number, int k) - која ќе го врати првиот број поголем од number кој е делив со k. Да се употреби повик до divisibleByK во ова функција.
Да не се менува main функцијата!

Објаснување на примерот: Во секоја линија лево од стрелката се печати секој број од интервалот од [10,20], а десно од стрелката се печати наредниот број поголем од бројот лево којшто е делив со бројот k.

Бонус: Направете ја функцијата nextDivisibleByK рекурзивна.
  */

#include <stdio.h>

int divisiblebyK(int number, int k){

    //vraka 1 dokolku brojot k e delitel na brojot number
    if(number%k==0){
        return 1;
    }
    else {
        return 0;
    }

}

int nextDivisibleByK(int number, int k){

        //tuka ja vikame prethodnata funkcija kadesto gledame k na koj broj e delitel i dodavame +1
    if(divisiblebyK(number+1,k)){  //ako sekoj nareden broj pogolem od brojot levo e deliv so k
        return number+1; //ke go vrati prviot broj od number koj e deliv so k
    }
    else {
        return nextDivisibleByK(number+1, k);
    }

}


int main() {

    int a, b, k;
    scanf("%d %d %d", &a, &b, &k);

    for (int i = a; i <= b; i++) {
        printf("%d -> %d\n", i, nextDivisibleByK(i, k));
    }

    return 0;
}
