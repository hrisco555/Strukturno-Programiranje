/*
Од стаднарден влез се читаат N низи од знаци (стрингови) не подолги од 80 знаци. На почетокот на програмата се читаат два цели броеви:

N - бројот на низи од знаци кои ќе се читаат и
X - поместување.
Секоја од вчитаните низи од знаци треба да се трансформира на тој начин што секоја од малите и големите букви (a-z, A-Z) се заменува со истата буква поместена X места понапред во азбуката (a-z). Ако се надмине опсегот на буквите во азбуката, се продолжува циклично од почетокот на азбуката. Трансформираната низа да се отпечати на СИ.

Трансформацијата да се имплементира со посебна рекурзивна функција.

Пример:

Welcome -> трансформирано со поместување 5 -> Bjqhtrj
  */
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX 100

void pomestuvanje(char *niza, int x){
    
    if(!*niza){
        return;
    }
    
    // if(niza[0]=='\0'){
    //     return;
    // }
    
    if(isalpha(*niza)){
        char a = 'A';
        char A= 'a';
        if(isupper(*niza)){
            a='A';
            *niza = a + (*niza + x - a)%26;
        }
        if(islower(*niza)){
            A='a';
            *niza = A + (*niza + x - A)%26;
        }
    }
    
    pomestuvanje(niza+1, x); //Se dvizi za edna bukva napred
}

int main(){
    
    char niza[100];
    int n,x;
    scanf("%d%d\n",&n,&x);
    for(int i=0;i<n;i++){
        fgets(niza,100, stdin);
        niza[strlen(niza)-1]='\0';
        pomestuvanje(niza, x);
        printf("%s\n", niza);

    }
    
    return 0;
}
