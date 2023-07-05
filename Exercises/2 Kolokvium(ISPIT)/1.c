/*
Дадена е текстуална датотека text.txt.
Да се избројат и испечатат сите последнователни појавувања на соседни самогласки во датотеката. Појавата на големи и мали букви да се игнорира. Пронајдените парови самогласки да се испечатат на екран, секој во нов ред со мали букви. Потоа во нов ред се печати бројот на појавувања на паровите самогласки.

Пример: за датотеката:
IO is short for Input Output
medioio medIo song

излез:
io
ou
io
oi
io
io
6
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

void writeToFile() {
  FILE *f = fopen("text.txt", "w");
  char c;
  while((c = getchar()) != '#') {
    fputc(c, f);
  }
  fclose(f);
}

int samoglaska(char bukva){ //f-ja za da proveram dali e samoglaska, proveruvam vnatre vo bukvata dali e samoglaska

    //Pojavata na golemi i mali bukvi da se ignorira
    //Ja pravam vo mala bezrazlika dali e golema
    if(tolower(bukva)=='a' || tolower(bukva)=='e' || tolower(bukva)=='i' || tolower(bukva)=='o' || tolower(bukva)=='u'){
        
        return 1; //ke vrati 1 ako e samoglaska
    }
    else {
        return 0;
    }
    
}

int main() {
    
  writeToFile();
    FILE *f = fopen("text.txt", "r");

    int brojac=0;
    char bukva, prethodna_bukva='t';//mu davam bilo koja vrednist na prethodna bukva ,potocnoo nekoja bukva sto ne e samoglaska.
    while ((bukva=fgetc(f))!=EOF) {
        
        if(samoglaska(bukva)){ //proveruvam dali sekoja bukva sto ja vnel e samoglaska.
            if(samoglaska(prethodna_bukva)){ //Ako e samoglaska, proveruvam dali narednata sto ja imam e samoglaska, ako ne e, ne vleguva
                printf("%c%c\n", tolower(prethodna_bukva),tolower(bukva)); //ako dvete se samoglaski, gi pravi mali i gi pecati i gi broi
                brojac++;
            }
        }
        prethodna_bukva=bukva; //prvata samoglaska ja dodeluva na prvata bukva
    }
    
    printf("%d", brojac);//gi broi kolku se na kraj i gi pecati
    
    fclose(f);
    


  return 0;
}
