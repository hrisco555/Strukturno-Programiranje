/*
  Од стандарден влез се чита цел број N (N<=100) и потоа N низи од знаци. Низите знаци содржат букви, цифри и специјални знаци (без знаци за празно место), а секоја од нив не е подолга од 80 знаци.

Да се напише програма со која што на стандарден излез ќе се отпечати најдолгата низа, којашто е палиндром (се чита исто од од лево на десно и од десно на лево) и што содржи барем еден специјален знак. Ако нема такви низи, се печати "Nema!". Ако има две или повеќе низи што го задоволуваат овој услов, се печати првата низа којашто го задоволува условот.

Влез:

9
a!bcdedcb!a
Kfd?vsvv98_89vvsv?dfK
Ccsvsdvdfv
342425vbbcb
352!2353696969625
gdg??dfg!!
5336346644747
8338736767867
12344321

Излез:

Kfd?vsvv98_89vvsv?dfK

  */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int palindrome(char *niza){
    
    int palindrom=1, imaspecialkarakter=0;
    int n=strlen(niza);
    for(int i=0;i<n;i++){
        if(niza[i] != niza[n-i-1]){
            palindrom=0;
        }
        if(!isalnum(niza[i])){ //AKO NE E ALFANUMERICKI ZNAK, SIGURNO E SPECIAL CHARACTER
            imaspecialkarakter=1;
        }
    }
    return palindrom==1 && imaspecialkarakter==1;
}

int main(){
    
    int n,max=0;
    scanf("%d", &n);
    char niza[100], max_niza[100];
    int palindrom=0;
    
    for(int i=0;i<n;i++){
        scanf("%s", niza);
        if(palindrome(niza)==1){ //ako e palindrom
            palindrom=1;
                if(strlen(niza)>max){
                    max=strlen(niza);
                    strcpy(max_niza, niza);
                }
            }
        }
    
    if(palindrom==1){
        puts(max_niza);
    }
    else {
        printf("Nema!");
    }
    
    return 0;
}

