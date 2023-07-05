/*
Во дадена датотека dat.txt да се најде најдолгиот ред во кој има барем 2 цифри. На стандарден излез да се испечатат знаците од најдолгиот ред кои се наоѓаат помеѓу првата и последната цифра (заедно со тие 2 цифри) во истиот редослед. Доколку има повеќе такви редови се печати последниот. Се претпоставува дека ниту еден ред на датотеката не е подолг од 100 знаци.

Пример.

Влез: 
dat.txt:
    aaa123aa222aa2aaa23aaaaa22
    aaaaaaaaaaaa 23aaaa
    123 aaa aaa aaa aaa 12345 aaa aaa 2a

Излез:
    123 aaa aaa aaa aaa 12345 aaa aaa 2
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

// ne menuvaj ovde
void wtf() {
    FILE *f = fopen("dat.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    wtf();
    FILE *f = fopen("dat.txt", "r");
    
    char a[100], max_red[100];
    int i, brojac_cifri=0, brojac_vkupno=0,max=0;
    int prva_cifra=0, posledna_cifra=0, znaci=0;
    int prva,prc,posc;
    
    while((fgets(a, 100, f))!=NULL){
        brojac_vkupno=0;
        brojac_cifri=0;
        
        prva=1;
        for(i=0;i<strlen(a);i++){
            if(isdigit(*(a+i))){
                if(prva){ //ako e prva cifra sto sej avuva
                    brojac_cifri++;
                    prva_cifra=i; //mi treba pozicijcija za pocetok na pecatenjeto
                    prva=0;
                }
                else {
                    brojac_cifri++;
                    posledna_cifra=i; //mi treba i poslednata pozicija za krajot
                }
            }
            brojac_vkupno++;
        }
        if(brojac_cifri>1 && brojac_vkupno>=max){
            max=brojac_vkupno;
            strcpy(max_red, a);
            prc=prva_cifra; //POCETOK I KRAJ NA CIFRITE, ZA PECATENJE
            posc=posledna_cifra;
        }
    }
    for(i=prc;i<=posc;i++){
        printf("%c", max_red[i]); //Pecatenje na najdolgiot red, od prvata do poslednata cifra
    }
    fclose(f);
}
