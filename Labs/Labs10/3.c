/*
Да се напише програма која што од датотека со име "text.txt" ќе ги одреди и ќе ги испечати на стандарден излез:

релативната фреквенција на сите мали букви
релативната фреквенција на сите големи букви
Релативната фреквенција на даден(и) карактер(и) се пресметува како количник на вкупното појавување на тој/тие карактер/и со вкупниот број на карактери во текстот (да се игнорираат празните места и специјалните знаци).

Да не се менува функцијата writeToFile().
  */
#include <stdio.h>

void writeToFile() {
    FILE *f = fopen("text.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    writeToFile();
    
    FILE *f = fopen("text.txt", "r");
    
    char c;
    int brojac_golema=0, brojac_mala=0;
    float vkupno;
    
    while((c = fgetc(f))!= EOF){
		if(isalpha(c)){  //ako e bukva
			if(isupper(c)){ //ako e golema bukva izbroj ja
			   brojac_golema++; 
			} 
			if(islower(c)) { //ako e mala bukva izbroj ja
			    brojac_mala++;
			}
			vkupno++; //site vkupno izbroj
		}
	}
	printf("%.4f\n", brojac_golema/vkupno);//relativna frekvencija za golemi bukvi
	printf("%.4f", brojac_mala/vkupno); //relativna frekvencija za mali bukvi
}
