/*
Од тастатура се читаат знаци (од некој текст кој се состои од различни знаци и кој претставува некаква реченица, т.е. се состои од неколку збора составени од мали букви и секогаш завршува со точка) се дури не се прочита точка. 

Да се направи програма која на излез ќе ги отпечати истите зборови со таа разлика што на секое појавување на две согласки едно до друго ќе им ги замени местата.

Забелешка: да се претпостави дека нема зборови кои ќе имаат повеќе од две согласки едно по друго.

Пример за влез
ako dime ima 12 evra, kje kupi chokolado.
edno dve tri trinaeset.
petka si e petka


Пример за излез
ako dime ima 12 erva, jke kupi hcokolado
endo vde rti rtinaeset.
pekta si e pekta
*/

#include <stdio.h>

int main() {
    
    char znak,temp=0,kopija;
    scanf("%c", &znak);
     kopija=znak;
    while(znak != '.'){
        scanf("%c",&znak);
        if(znak == '.'){
            printf("%c", kopija);
            break;
        }
    if((znak >= 'b' && znak <= 'z' && znak != 'e' && znak !='i' && znak !='o' && znak !='u') && (kopija >= 'b' && kopija <= 'z' && kopija != 'e' && kopija !='i' && kopija !='o' && kopija !='u')){
        temp=kopija;
        kopija=znak;
        znak=temp;
    
    }
       printf("%c", kopija);
        kopija=znak;
    }
    

    return 0;
}
    
