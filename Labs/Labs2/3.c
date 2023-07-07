/*
Од стандарден влез се вчитуваат следните податоци за еден студент на ФИНКИ:

индекс (шестцифрен цел број)
шест оценки од последниот семестар кој го слушал
Да се напише програма која што на стандарден излез ќе ги испечати следните информации за студентот: (погледнете во тест примерите за форматот на печатење)

просек на студентот
просекот да се испечати со точност од 3 децимали
година на студии
студентите чијшто индекс почнува на 21 се втора година, 20 се трета година, 19 се четврта година итн.
дали е награден (1 = награден, 0 = не е награден)
Еден студент се наградува доколку има просек еднаков или поголем од 9.5
  */

#include <stdio.h>

int main() {

     int indeks,godina_na_studii;
       scanf("%d", &indeks);
    int ocenka1, ocenka2, ocenka3, ocenka4, ocenka5, ocenka6;
    scanf("%d %d %d %d %d %d", &ocenka1, &ocenka2, &ocenka3, &ocenka4, &ocenka5, &ocenka6);
    float prosek;
    prosek=(ocenka1 + ocenka2 + ocenka3 + ocenka4 + ocenka5 + ocenka6)/6.0;
    printf("Prosek: %.3f\n", prosek);
    printf("Student: %d\n", indeks);
    indeks = indeks/10000;

                if(indeks == 22){
                printf("1 godina\n");
                }
              else if(indeks == 21 ) {
                    printf("2 godina\n");
                }
                else if(indeks == 20){
                   printf("3 godina\n");
                }
                else if(indeks == 19){
                    printf("4 godina\n");
               }
                else if(indeks == 18){
                    printf("5 godina\n");
                }
                else if(indeks == 17){
                    printf("6 godina\n");
                }
                else {
                    printf("Vnesovte pogresna vrednost\n");
                }

    if(prosek >= 9.5){
        printf("Nagraden: 1\n");
    }
    else{
        printf("Nagraden: 0\n");
  }


    
    return 0;
}



