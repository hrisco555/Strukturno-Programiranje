#include <stdio.h>
#include <ctype.h>
#include <string.h>

/*
int main() {
    
    //open the file
    FILE *f=fopen("/Users/davidhristov");
    
    //citanje red po red
    char line[100];
    while(fgets(line, 100, f)!=NULL){
        puts(line);
    }
    
    //char po char
    //site vo nov red se napisani
    char curr;
    while((curr=fgetc(f))!=EOF){
        printf("%c", curr);
    }
    
    //formatirano
    int words;
    fscanf(f, "%d", &words);
    
    printf("%d", words);
    
    char word[100];
    //ke citame zbor po zbor
    for(int i=0;i<words;i++){
        fscanf(f, "%s", word);
    }
    
    fclose(f);
    
    return 0;
}
*/


//1va ZAD
/*
Да се напише програма која за дадена текстуална датотека text.txt ќе го
одреди и отпечати на екран односот на самогласките и согласките.
Пример
Ако датотеката text.txt ја има следнава содржина:
Zdravo, kako si?
Eve, dobro sum. A ti?
I jas dobro.
тогаш програмата треба да отпечати:
Odnos samoglaski/soglaski: 16/19 = 0.84
*/

//presmetka na znaci, karakteri - ZNAK PO ZNAK


/*
int esamoglaska(char c){
    c=tolower(c);
    return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
}

int main(){
    
    FILE *f=fopen(<#const char *restrict __filename#>, <#const char *restrict __mode#>)
    
    char current;
    int samoglaski=0, soglaski=0;
    while((current=fgetc(f))!=EOF){
        if(isalpha(current)){
            if(esamoglaska(current)){
                samoglaski++;
            }
            else {
                soglaski++;
            }
        }
    }
    
    fclose(f);
    
    printf("Odnos samoglaski/soglaski: %d/%d = %.2f", samoglaski, soglaski,(float)samoglaski/soglaski);
    
    return 0;
}
*/


//2ra zad
/*
Да се напише програма која секој ред од дадена текстуална датотека
vlezna.txt ќе го копира во друга датотека izlezna.txt, така што пред секој
прочитан ред од датотеката vlezna.txt ќе додаде уште еден ред во кој ќе стои
бројот на знаци што ги содржи прочитаниот ред. Во секој ред може да има
најмногу 80 знаци.
 
 Ако датотеката vlezna.txt ја има следнава содржина:
 Jas ucham Strukturno Programiranje.
 Koga se polaga vtoriot kolokvium?
 Ne znam, seushte ne e objaveno na sajtot.
 
 
 тогаш по извршувањето на програмата содржината на датотеката izlezna.txt
 треба да биде следнава:
 36
 Jas ucham Strukturno Programiranje.
 34
 Koga se polaga vtoriot kolokvium?
 41
 Ne znam, seushte ne e objaveno na sajtot.
*/

/*
int main(){
    
    FILE *inputfile = fopen("/Users/davidhristov/Desktop/Strukturno Auditoriski /Auditoriski7-Datoteki/vlezna.txt", "r");
    
    FILE *outputfile = fopen("/Users/davidhristov/Desktop/Strukturno Auditoriski /Auditoriski7-Datoteki/izlezna.txt", "w");
    
    char line[100];
    while(fgets(line, 100, inputfile)!=NULL){
        int strLength=strlen(line);
        
        fprintf(outputfile, "%d\n",strLength); //vo koj file ke zapisuva
        fprintf(outputfile, "%s", line);
    }
    
    fclose(inputfile);
    fclose(outputfile);
    
    return 0;
}
*/


/*
 TRANSPONIRANA MATRICA
Да се напише програма која ќе ги прочита елементите од една матрица
сместена во текстуална датотека matrica1.txt. Во првиот ред од датотеката се
запишани бројот на редици и бројот на колони на матрицата. Секој елемент од
матрицата е реален број запишан во посебен ред од датотеката. Потоа
матрицата треба да се транспонира и да се запише во нова датотека
matrica2.txt на истиот начин.

 Ако датотеката matrica1.txt ја има следнава содржина:
 
 3 4
 2.1    3.2    4.3    5.4
 1.1    2.2    3.3    4.4
 6.0    5.5    3.9    1.8
 
 тогаш по извршувањето на програмата содржината на датотеката
 matrica2.txt треба да биде следнава:
 2.1 1.1 6.0
 3.2 2.2 5.5
 4.3 3.3 3.9
 5.4 4.4 1.8
*/

/*
int main(){
    
    FILE *inputFile = fopen("/Users/davidhristov/Desktop/Strukturno Auditoriski /Auditoriski7-Datoteki/matrica.txt", "r");
    
    FILE *outputFile = fopen("/Users/davidhristov/Desktop/Strukturno Auditoriski /Auditoriski7-Datoteki/matrica2.txt", "w");
    
    float matrica[100][100];
    int i,j,n,m;
    
    fscanf(inputFile, "%d %d", &n, &m);
        
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            fscanf(inputFile, "%f", &matrica[i][j]);
        }
    }
    
    //transponirana
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            fprintf(outputFile, "%.1f ", matrica[j][i]);
        }
        fprintf(outputFile, "\n");

    }
    
    fclose(inputFile);
    fclose(outputFile);
    
    return 0;
}
*/


//4ta ZAD
/*
Дадена е текстуална датотека SP_primer.txt. Да се напише програма која ќе ја
прочита датотеката и на екран ќе го отпечати бројот на редови во кои има
повеќе од 10 самогласки, како и вкупниот број на самогласки во датотеката.

Ако датотеката SP_primer.txt ја има следнава содржина:
Zdravo, kako si?
Eve, dobro sum. A ti?
I jas dobro. Kako se tvoite? Ima li neshto novo?
Dobri se i tie. Si kupiv avtomobil.

тогаш програмата треба да отпечати:
Vkupno 2 reda imaat povekje od 10 samoglaski.
Vo datotekata ima vkupno 42 samoglaski.
*/


/*
int esamoglaska(char c){
    c=tolower(c);
    return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
}

int izbroj_samoglaski(char *line){
    int samoglaski=0;
    for(int i=0;i<strlen(line);i++){
        if(esamoglaska(line[i])){
            samoglaski++;
        }
    }
    return samoglaski;
}

int main(){
    
    FILE *inputFile = fopen("/Users/davidhristov/Desktop/Strukturno Auditoriski /Auditoriski7-Datoteki/primer.txt", "r");
    
    char currline[100];
    int redovi=0;
    int vkupen_broj=0;
    
    while(fgets(currline, 100, inputFile)!=NULL){
        
        int samoglaski=izbroj_samoglaski(currline);
        vkupen_broj+=samoglaski;
        if(samoglaski>10){
            redovi++;
        }
    }
    
    printf("Vkupno %d reda imaat povekje od 10 samoglaski. Vo datotekata ima vkupno %d samoglaski.", redovi,vkupen_broj);
    
    
    fclose(inputFile);
    
    return 0;
}
*/

//zad 5
/*
Да се напише програма која за дадена текстуална датотека zborovi.txt ќе ги
отпечати на екран сите зборови во кои се појавуваат повеќе од две исти букви
(некоја буква се појавува три или повеќе пати). Да не се прави разлика помеѓу
мали и големи букви. На крајот треба да се отпечати и бројот на зборови што го
задоволуваат условот.
Секој ред во датотеката содржи по еден збор (зборовите се разделени меѓу себе
со знак за нов ред). Секој збор е составен само од букви. Максималната должина
на зборовите е 20 знаци.
 
 Ако датотеката zborovi.txt ја има следнава содржина:
 banana
 jabolko
 Obratnoto
 binarnata
 dekadniot
 Kopakabana
 
 тогаш програмата треба да отпечати:
 banana
 Obratnoto
 binarnata
 Kopakabana
 Vkupno 4 zborovi.
 */

/*
int povtoruvanjezborovi(char *zbor){
    
    int brojac;
    for(int i=0;i<strlen(zbor);i++){
        brojac=0;
        for(int j=0;j<strlen(zbor);j++){
            if(tolower(zbor[i])==tolower(zbor[j])){ //ke gi napravi site mali i ke bidat ednakvi
                brojac++;
            }
            
            }
        if(brojac>2){
            return 1;
        }
    }
    return 0;
}

int main(){
    
    FILE *inputFile = fopen("/Users/davidhristov/Desktop/Strukturno Auditoriski /Auditoriski7-Datoteki/zborovi.txt", "r");
    
    char zbor[100];
    int brojac_zborovi=0;
    
    while(fgets(zbor,100,inputFile)!=NULL){
        if(povtoruvanjezborovi(zbor)){
            puts(zbor);
            brojac_zborovi++;
        }
    }
    
    printf("Vkupno %d zborovi", brojac_zborovi);
    
    fclose(inputFile);
}
*/


/*
Да се напише програма која на екран ќе го отпечати бројот на појавувања на
даден збор составен само од цифри (зборот се чита од тастатура) во текстуална
датотека со име dat.txt.

Пример
Ако од тастатура се внесе зборот
123
и ако датотеката dat.txt ја има следнава содржина:
Zdravo 123, kako si?
Eve 321, dobro sum. A ti?
I jas dobro. Kako se tvoite 123? Ima li neshto novo? 123
Dobri se i tie. Si kupiv avtomobil.
тогаш програмата треба да отпечати:
Zborot 123 se pojavuva 3 pati vo datotekata.
*/

/*
int izbroj_pojavuvanja(char *line, char *word){
    
    int brojac=0;
    for(int i=0;i<strlen(line)-strlen(word);i++){
        if(strncmp(word, line+i, strlen(word))==0){
            brojac++;
        }
    }
    return brojac;
}

int main(){
    
    FILE *f = fopen("/Users/davidhristov/Desktop/Strukturno Auditoriski /Auditoriski7-Datoteki/zborovi.txt", "r");

    
    char word[100];
    
    scanf("%s", word);
    
    char currLine[100];
    int pojavuvanja=0;
    while(fgets(currLine,100,f)!=NULL){
        pojavuvanja+=izbroj_pojavuvanja(currLine, word);
    }
    
    printf("Zborot %s ke se pojavuva %d pati vo datotekata.", word, pojavuvanja);
    
    fclose(f);
    return 0;
}

*/



//KOLOKVIUMSKA
/*
Во една датотека vlezna.txt се запишани низи од знаци (содржат букви, цифри и специални знаци), секоа во посебен ред. Низите знаци, секоа за себе, не е поголема од 80 знаци.
Да се напише програма со коа на стандарден излез ке го отпечати редот со наголем броj знаци, што содржи само букви или само цифри. Ако нема такви редови, се печати "Nema". Ако има два или повеке реда што го задоволуваат ово услов, се печати првиот ред што го задоволува условот.
Пример:

Влез:
Kfd?vsvv985%vdvfb
Ccsvsdvdfv
342425vbbcb
3521235325
gdg??dfg!!
5336346644747
8338736767867


Излез:
5336346644747
*/

/*
int onlyLettersOrDigits (char *line){
    
    int brojac_cifri=0, brojac_bukvi=0;
    
    for(int i=0;i<strlen(line);i++){
        if(isdigit(*line)){
            brojac_cifri++;
        }
        if(isalpha(*line)){
            brojac_bukvi++;
        }
    }
    return brojac_cifri==strlen(line) || brojac_bukvi==strlen(line);
    //SITE DA SE BUKVI ILI SITE DA SE BROJKI
    //DA E EDNAKVA SO GOLEMINATA ZNACI SITE DA SE ISTI (ILI BUKVI ILI BROJKI)
    //ako iamme !abcd - digits=0,letters=4, strlen=5
}



int main(){
    
    FILE *f = fopen("/Users/davidhristov/Desktop/Strukturno Auditoriski /Auditoriski7-Datoteki/kolokviumska.txt", "r");

    
    char line[100];
    char maxLine[100];
    int first=1;
    
    while(fgets(line,100,f)!=NULL){
        if(onlyLettersOrDigits(line)){
            if(first){
                strcpy(maxLine, line); //vo maxline linijata ke ja iskopiram
                first=0;
            }
            else {
                if(strlen(line)>strlen(maxLine)){
                    strcpy(maxLine, line);
                }
            }
        }
    }
    
    if(first){
        printf("nema!");
    }
    else{
        printf("%s", maxLine);
    }
    
    
    return 0;
}
*/
