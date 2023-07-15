#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*
Да се напише функција што ќе одредува колку пати даден знак се наоѓа во
даден стринг. Знакот за споредување и стрингот се внесуваат од тастатура.
Пример
За стрингот
HELLO FINKI
знакот L се појавува 2 пати.
*/

/*
int broj_pojavuvanja(char *a, char character){
    
    int brojac=0;
//    while(*a!='\0'){ //se dur ne dojde do null terminator
//        if(*a==character){
//            brojac++;
//        }
//        a++; //odime na sledniot element
//        //obavezno so while da odi na sl. element
//    }
//    return brojac;
    
    for(int i=0;i<strlen(a);i++){
        if(*(a+i)==character){
            brojac++;
        }
    }
    return brojac;
}


int main() {
   
    char a[100];
    gets(a);
    
    char character;
    scanf("%c", &character);
    
    printf("%d ", broj_pojavuvanja(a, character));
    
    return 0;
}
*/


/*
Да се напише функција што ќе ја одредува должината на една текстуална низа.
Да се даде итеративно и рекурзивно решение.
Пример
Ако на функцијата како аргумент и се предаде стрингот
zdravo!
тогаш таа треба да врати: 7
*/

/*
int dolzina(char *a){
    
    int brojac=0;
    while(*a!='\0'){ //se dur ne dojdeme do null terminator
 
        brojac++;
        a++;
    }
    return brojac;
}

int rekurzivno_Dolzina(char *a){
    if(*a=='\0'){
        return 0;
    }
    else {
        return 1+rekurzivno_Dolzina(a+1);
    }
}

int main(){
    
    char a[100];
    gets(a);
    
    printf("%d\n", dolzina(a));
    printf("%d\n", rekurzivno_Dolzina(a));
    
    
    return 0;
}
*/


/*
 Да се напишепрограма која ќе ја отпечати поднизата на дадена текстуална
 низа (што се внесува од тастатура) определена со позицијата и должината, што
 како параметри се внесуваат од тастатура. Поднизата започнува од знакот што
 се наоѓа на соодветната позиција во текстуалната низа, броејќи од лево.
 Ако од тастатура се внесе:
 banana
 позиција: 3
 должина: 4
 тогаш програмата треба да отпечати: nana
 */


/*
int main(){
    
    char a[100];
    gets(a);
    int pozicija, dolzina;
    scanf("%d %d", &pozicija, &dolzina);
    
    //pocnuva od pozicijata, pa od 3ta pozicija primer ke treba do 7ma pozicija da gi procita do dolzinata - 3,4,5,6, bez samata 7
    for(int i=pozicija-1;i<pozicija+dolzina-1;i++){
        printf("%c", a[i]);
        
    }
    
    //2 nacin
    
    char newchar[100];
    
   // destinacija - newchar (novata promenliva),
    //vtoriot e source a+pozciija-1

    strncpy(newchar, a+pozicija-1, dolzina);
    newchar[dolzina]='\0'; stavame null terminator
     
    
    return 0;
}
*/



/*
Да се напише функција која ќе одредува дали една текстуална низа е подниза
на друга текстуална низа.
Пример
face е подниза на Please faceAbook
*/


//SO OBICNA FUNKCIJA

/*
int contains(char *a, char *b){
    
    int l1=strlen(a); //dolzina na prvata niza
    int l2=strlen(b); //l2 - dolzina na vtorata niza
    
    if(l2>l1){ //ako vtorata podniza ep ogolema od vtorata niza vrakame 0, ne e vozmozno
        return 0;
    }
     
    int sodrzi=1;
    for(int i=0;i<=l1-l2;i++){
        if(a[i]==b[0]) { //dokolku vo niza a momentalnata pozicija e ednakva so prvata bukva na taa sto ni e podniza b, ke pretpostavime deka se sodrzi
            for(int j=0;j<l2;j++){ //gi proveruva bukvite vo podnizata
                if(b[j]!=a[i+j]){ //dokolku j-ta bukva e rzlicna
                    sodrzi=0;
                    break;
                }
            }
            if(sodrzi){ //ako sme gi nasle site bukvi, ova e podrsting
                return 1;
            }
        }
    }
    
    return 0;
}

int contains2(char *a, char *b){
    
    //strstr - go naoga prvoto pojavuvanje na dadena podniza - VRAKA pokazuvac vo str1(prvata niza), mestoto kade se pojavuva prvata bukva od podnizata.POTOCNO LITTLE KADE STO SE SRETNUVA VO BIG
    
    if(strlen(b)>strlen(a)){
        return 0;
    }
                // big   little
    char *res=strstr(a, b);
    
    if(res!=0){
        return 1;
    }
    else{
        return 0;
    }

    //vraka rezultat kajsto pocnuva facebook - podnizata
    
}

int main(){
    
    char a[100], b[100];
    gets(a);
    gets(b);
    
    if(contains(a, b)){
        printf("YES, it's a substring");
    }
    else {
        printf("NO, it's not a substring");
    }
    
    return 0;
}
*/


/*
Да се напише функција која ќе проверува дали дадена текстуална низа е
палиндром.
Една текстуална низа е палиндром ако таа се чита исто од лево на десно и од
десно на лево.
Примери за палиндроми
dovod
ana
kalabalak
*/

/*
int isPalindrome(char *str){
    
    int n=strlen(str);
    for(int i=0;i<n/2;i++){ //do sredinata na stringot proveruvame
        if(str[i]!=str[n-i-1]){ //prvo negacija so negoviot ogledalen element. AKO SE RAZLICNI VRAKAME 0
            return 0;
        }
    }
    return 1; //ako naideme i najdeme par ke vrati 1
    
}

int main(){
    
    char a[100];
    
    fgets(a, 100, stdin); //vo fgets posledniot karakter se racuna kako enter i broi +1
    a[strlen(a)-1]='\0'; //null terminatorot ke go stavime, OBAVEZNO POSLEDNIOT KARAKTER DA BIDE NULL TERMINATOR VO FGETS
    
    if(isPalindrome(a)){
        printf("YES");
    }
    else {
        printf("NO");
    }
    
    return 0;
}
*/


/*
Да се напише функција која за дадена текстуална низа ќе одредува дали таа е
доволно сложена за да биде лозинка.
Секоја лозинка мора да содржи барем една буква, барем една цифра и барем
еден специјален знак и да има најмалку 8 карактери.
Пример
zdr@v0! е валидна лозинка.
zdravo не е валидна лозинка.
*/

/*
int strongPassword(char *password){
    
    int n=strlen(password);
    if(n<8){ //ako ima pomala golemina od 8
        return 0;
    }
    
    int golema_bukva=0, cifri=0, spec=0;
    
    for(int i=0;i<n;i++){
        
        if(isupper(password[i])){
            golema_bukva=1;
            //golema_bukva++;
        }
        
        if(isdigit(password[i])){
            cifri=1;
            //cifri++;
        }
        
        //specijalen karakter ako e
        if(!isalpha(password[i]) && !isdigit(password[i])) {
            spec=1;
            //spec++;
        }
    }
    
    return spec && golema_bukva && cifri;
    
}

int main(){
    
    char password[100];
    fgets(password,100,stdin);
    password[strlen(password)-1]='\0';
    
    if(strongPassword(password)){
        printf("VALID");
    }
    else {
        printf("NOT VALID");
    }
    
    return 0;
}
*/



/*
Да се напише функција која во стринг што и се предава како влезен параметар
ќе ги промени малите букви во големи и обратно, и ќе ги отстрани сите цифри и специјални знаци.
Пример
За низата:
0v@ePr1m3R
треба да се добие:
VEpRMr
*/

/*
void transform(char *str1){
 
    //bukvite se shiftaat za levo 1 mesto, stavame null terminator na poslednoto, n se namaluva i i se namaluva
    int i=0,j=0;
    int n=strlen(str1);
    
    while(str1[i]!='\0'){
        if(isalpha(str1[i])){ //ako e bukva
            if(islower(str1[i])){ //ako e mala bukva
                str1[j]=toupper(str1[i]); //ja pretvarame vo golema bukva
            }
            else if(isupper(str1[i])){ //ako e golema bukva
                str1[j]=tolower(str1[i]); //ja pretvarame vo mala bukva
            }
            j++;
        }
        i++;
    }
    str1[j]='\0';
   
//    for(i=0;i<n;i++){
//        if(!isalpha(str1)){
//            for(j=0;j<n-1;j++){
//                str1[j]=str1[j+1];
//            }
//            str1[j]='\0';
//            n--; //goleminata ja namaluva
//            i--;
//        }
//        else {
//            if(isupper(str1[i])){
//                str1[i]=tolower(str1[i]);
//            }
//            else {
//                str1[i]=toupper(str1[i]);
//            }
//        }
//    }
}

int main(){
    
    char str1[100];
    fgets(str1,100,stdin);
    str1[strlen(str1)-1]='\0';
   
    transform(str1);
    
    puts(str1);
    
    return 0;
}
*/



/*
Да се напише функција која во дадена текстуална низа ќе ги отстранува
празните места на почетокот и крајот од низата.
Пример
За низата:
" make trim "
треба да се добие:
"make trim"
*/

/*
void trim(char *str){

    int firstLetterind=-1;
    int i;
    char tmp[100];

    for(int i=0;i<strlen(str);i++){
        if(!isspace(str[i])){
            firstLetterind=i; //ke go zacuvame indeksot
            break;
        }
    }

    strcpy(tmp, str+firstLetterind); //vo temp zacuvaj go
    strcpy(str, tmp);

    for(i=strlen(str)-1;i>=0;i--){
        if(!isspace(str[i])){
            str[i+1]='\0';
            break;
        }
    }

    printf("%d\n", firstLetterind);
}


int main(){

    char str[100];
    fgets(str, 100, stdin);
    str[strlen(str)-1]='\0';

    trim(str);
    puts(str);

    return 0;
}
*/
