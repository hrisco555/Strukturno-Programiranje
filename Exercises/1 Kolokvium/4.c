/*
Од стандарден влез се читаат знаци се додека не се прочита извичник. Во вака внесениот текст се скриени цели броеви (помали од 100). 
Да се напише програма што ќе ги прочита сите знаци и на излез ќе го испечати збирот на сите броеви скриени во текстот.
*/

#include <stdio.h>

int main(){

    int zbir=0, broj=0;
    char znak;
    while(znak != '!'){ //se dodeka ne se procita izvicnik, koa ke vneseme ke prekine
        scanf("%c", &znak);
        if(znak >= '0' && znak <= '9'){ //cifrite od 0 do 9
            broj=broj*10+(znak-'0'); //se odzema 0 bidejki na kraj imame sekogas null operator i mora d ase trgne
            //broj=0*10+3, pa 3*10+4=34

            //zbir=zbir+znak; //ako e vaka go sobira ASCII kodot na site, ne treba taka treba samo brojkite da gi sobira. Plus gi sobira 3+4 ne zaedno 34
        }
        else {
            zbir=zbir+broj;
            broj=0;// se navraka na 0 koga nema da naideme na 0
        }
    }
        printf("%d", zbir);

        return 0;
}
