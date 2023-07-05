/*
Дадена е текстуална датотека (livce.txt) која претставува ливче во спортска обложувалница.

На почетокот во датотеката, во посебен ред е запишана сумата на уплата (цел број).

Потоа во секој ред од датотеката е запишан по еден тип во следниот формат:

ab12 1 1.25
Првиот број е шифрата на типот (низа од знаци која не е подолга од 9 знаци), вториот број е типот (може да биде 1, 0 или 2) додека третиот број е коефициентот (реален број).

Ваша задача е да се испечати типот со најголем коефициент како и можната добивка на ливчето. Доколку има повеќе типови со ист максимален коефициент, да се испечати првиот.

Можната добивка се пресметува како производ на сите коефициенти со сумата на уплата.
  */
#include <stdio.h>
#include <ctype.h>
#include <string.h>

// ne menuvaj ovde
void wf() {
    FILE *f = fopen("livce.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int main(){

    wf(); 
    FILE *f = fopen("livce.txt", "r"); 

    int uplata, tip, max_tip;
    char sifra[100];
    char max_sifra[100];
    float koeficient, max_koeficient=0, dobivka;
    
    fscanf(f, "%d", &uplata);
    
    dobivka=uplata;
    
    while(fscanf(f, "%s %d %f", sifra, &tip, &koeficient)!=EOF){
        
        if(koeficient>max_koeficient){
            
            max_koeficient=koeficient;
            max_tip=tip;
            strcpy(max_sifra, sifra);
            
        }
        dobivka*=koeficient;
    }
    printf("%s %d %.2f\n", max_sifra, max_tip, max_koeficient);
    printf("%.2f\n", dobivka);
    
return 0;
}   

