/*
Да се напише програма во која од дадена датотека со име "input.txt" за секој ред ќе се отпечати бројот на цифри во тој ред, знакот :, па самите цифри подредени според ASCII кодот во растечки редослед. Редовите во датотеката не се подолги од 100 знаци.
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void wtf() {
FILE *f = fopen("input.txt", "w");
char c;
while((c = getchar()) != EOF) {
fputc(c, f);
}

fclose(f);

}

int main(){
    
    wtf();
    FILE *f = fopen("input.txt", "r");
    
    char cifra;
    char a[100]; //nizata od karakteri
    int temp=0,i=0,n=0;
    
    while((cifra=fgetc(f))!=EOF){
        if(cifra=='\n'){ // dodeka ne stignam do kraj na redot
       
            
            for(i=0;i<n;i++){
                for(int j=i+1;j<n;j++){ //trgnuva od naredniot element
                    
                    //sortiranje na niza
                    if(a[i]>a[j]){ //im gi menuvam mestata
                        temp=a[i];
                        a[i]=a[j];
                        a[j]=temp;
                    }
                }
            }
            printf("%d:", n); //gi broi cifrite vo toj red, pa :,
            for(i=0;i<n;i++){
                printf("%c", a[i]);
            }
            printf("\n");
            //gi vrakam na 0 za sekoj red posebno da broi
            i=0;
            n=0;
        }
        if(isdigit(cifra)){ //ako e cifra, izbroj ja
            n++; //gi broi cifrite
            a[i]=cifra; //ako e cifra, stavi go vo nizata.
            i++;
        }
    }
    fclose(f);
    
    return 0;
}

