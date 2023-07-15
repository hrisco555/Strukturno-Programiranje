#include <stdio.h>

//int main() {
//
//    int x;
//    int *xPtr=&x;
//
//      float *p=a; //pokazuva kon a

//    //x1ptr ke bide isto so xptr
//    int *x1Ptr=xPtr; //x1Ptr pokazuva kon istata adresa kako xptr, odnosno ke pokazuva kon promenlivata x
//
//    scanf("%d", xPtr);
//
//    printf("%d", *xPtr);
//
//    return 0;
//}



/*
void swap(int *a, int *b){ //pokazuvaci
    
    int tmp=*a; //da ja zemam sodrzinata na pokazuvacot a
    *a=*b; //sodrzinata na a, ke stane sodrzinata na b
    *b=tmp; //vrednosta na b ke stane tmp
    
}

int main(){
    
    int x=5, y=6;
    //swap(x,y);
    swap(&x, &y); //ako sakame da gi smenime vrednosite na x i y - promena na promenliva - SO &
    printf("%d %d", x, y); // 6i 5
    
    return 0;
}

*/



//DELENJE NA NIZA
//5
//1 2 3 4 5
//2 4 6 8 10 - MNOZENJE
/*
 
void divideArray(int *array, int n){
    
    int i;
    for(i=0;i<n;i++){
        *(array+i)/=2; //sekoj element od nizata ke bide podelen so 2
        *(array+i)*=2; //sekoj element ke bide pomnozen so 2
    }
}

int main(){
    
    int array[50];
    int n;
    
    scanf("%d", &n);
    
    for(int i=0;i<n;i++){
        scanf("%d", array+i);
    }
    
    divideArray(array, n);
    
    for(int i=0;i<n;i++){
        printf("%d ", *(array+i));
    }
    
    return 0;
}
*/



//2 3 1 4 7 12 7 9 1
//RASTECKA PODNIZA E 1 4 7 12

//1VA ZAD
/*
Да се напише функција која за низа од N цели броеви ќе ги пронајде почетокот
и должината на најголемата растечка подниза.
Пример:
За низата
2 3 1 4 7 12 7 9 1
ќе ја најде низата со почеток во индексот 2, со должина од 4 - 1 4 7 12
*/

void rastecka_podniza(int *niza, int n, int *pocetok, int *dolzina){
    
    
    int currentPocetok=0, currentDolzina=1;
    *pocetok=0;
    *dolzina=1; //radi prviot element
    
    for(int i=0;i<n;i++){ //do posledniot element odi zodto posl. elem nema sledbenik
        
        if(niza[i] > niza[i-1]){ //sporeduva za da vidi dali nizata e rastecka
            currentDolzina++;
        }
        
        else {
            currentPocetok=i;
            currentDolzina=1;
        }
        
        if(currentDolzina > *dolzina){
            
            //pocetok i dolzina gi imaat pocetokot i dolzinata na podnizata sto e vo rastecki raedosled
            *pocetok = currentPocetok;
            *dolzina = currentDolzina;
            
        }
        
    }
    
}

int main(){
    
    int niza[100];
    int n;
    int pocetok, dolzina;
    scanf("%d", &n);
    
    int i;
    for(i=0;i<n;i++){
        scanf("%d", &niza[i]);
    }
    
    rastecka_podniza(niza, n, &pocetok, &dolzina);
    
    printf("Start: %d, Length: %d", pocetok, dolzina);
    
    return 0;
}

/*
                //ni treba pocetokot i dolzinata da gi najdeme
void rastecka_podniza(int *niza, int n, int *pocetok, int *dolzina){
    
    int currentPocetok, currentDolzina;
    *pocetok=0; //pocetokot ni e 0
    *dolzina=1; //radi prviot element
    for(int i=0;i<n-1;i++){z //n-1 bidejki posl. element nema sledbenik
        
        currentPocetok=i;
        currentDolzina=1;
        
            //niza[i] < niza[i+1]
        while(*(niza+i)<*(niza+i+1)){ //za sekoj od elementite ke vidi desno od nego kolku elem ima vo koj sto e zadovolen uslovot da se vo rastecki radosled, i se dur se vo rastecki redosled ke ja zgolemuva dolzinata na nizata i indeksot, ke odi nadesno SO IZMINUVANJE na nizata
            currentDolzina++;
            i++;
            if(i==n-1){ //koa ke doe kraj ke napraime break da ne iskoci od RAMKITE NA nizata
                break;
            }
            if(currentDolzina>*dolzina){ //sme nasle podniza koja ima dolzina od inicalnata dolzina koja sto sme ja setirale
                
                *dolzina=currentDolzina;
                *pocetok=currentPocetok; //currPocetok e i
            }
        }
        
    }
}


int main(){
    
    int niza[100];
    int i,n;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &niza[i]);
    }
    
    int pocetok;
    int dolzina;
                            //adresite na pocetok i dolzina
    rastecka_podniza(niza, n, &pocetok, &dolzina);
    
    for(i=pocetok;i<dolzina;i++){
        printf("%d ", *(niza+i)); //ispecati gi elem od rasteckata podniza
        
    }
    
    printf("\nPocetok: %d\nDolzina: %d", pocetok, dolzina);
    
    return 0;
}
*/



//ZAD 2
/*
Да се напише програма која влезната низа \[ a_0, a_1, … a_{n-1} \]
ќе ја трансформира во излезната низа: \[ b_0, b_1, b_2, …, b_{n-1} \]
на следниот начин: \[b_0 = a_0 + a_{n-1} b_1 = a_1 + a_{n-2} . . . b_{n-1} = a_{n-1} +
a_0 \]
Пример
Влезната низа
1 2 3 5 7
треба да се трансформира во
8 7 6 7 8
 
 input
 5
 1 2 3 4 5
 result
 6 6 6 6 6 - site so sebe da se soberat i sredisniot ke se mnozi so 2
 
 ke se soberat prviot i posledniot i ke se stavat na prvo i posledno mesto na vtora i na pretposledna pozicija.Elementot na sredina ke se sobere sam so sebe
*/

//potrebni ni se 2 iteratori vo eden for
//i se zgolemuva, j se namaluva

/*
void transform(int *niza, int n){
    
    int i;
    for(i=0;i<n/2;i++){ //odime do sredinata na nizata
        //negoviot ogledalen element - odpozadi elementtite gi zima
        int tmp=*(niza+i) + *(niza+n-i-1);
        //array[i] + array[n-i-1]
        *(niza+i)=tmp;
        *(niza+n-i-1)=tmp; //i 3kata sama so sebe da se sobere(Vo sredina ako e neparen)
    }
    
    //SREDISNIOT ELEMENT
    if(n%2==1){ //sodrzinata sto se naoga na n/2 pozicija na nizata(vo sredina)
        *(niza+n/2)*=2;//dupol da stane elementot, sam so sebe d ase sobere
    }
}

int main(){
    
    int niza[100];
    int n,i;
    scanf("%d", &n);
    
    for(i=0;i<n;i++){
        scanf("%d", &niza[i]);
    }
    
    transform(niza, n);
    
    for(i=0;i<n;i++){
        printf("%d ", niza[i]);
    }
    
    return 0;
}

*/


//ZAD 3
/*
Да се напишат следните функции за пребарување во низа:
• Линеарно пребарување
• Бинарно пребарување - daden broj koj sto treba
Потоа да се напише главна програма во која ќе се пополнува низа со броевите
од 1 до 1 000 000, а потоа се генерира случаен број во овој опсег чија што
позиција треба да се пронајде со повикување на двете функции за
пребарување.
 
 input
 10
 1 5 8 91 95 100 101 205 206 209
 result 5 5 

*/

int linearno_prebaruvanje(int *niza, int n, int vrednost){
    
    int i;
    for(i=0;i<n;i++){
        if(*(niza+i)==vrednost){ //se dur ne go najde elementot
            return i;
        }
    }
    return -1; //elementot ne postoi vo edna niza
}

//mora nizata da e sortirana
//sekogas ja deli nizata na polovina i gleda dali sredisniot element e pogolem, pomal ili ednakov na vrednosta sto ja barame
//ako e ednakov na vrednosta direktno go vrakame negoviot index
//ako e sredisniot element pogolem od toj element sto go barame, vo slednata iteracija ke ja delime levata polovina od nizata na pola i ke ja povtorime istata postapka
//ako e sre. element e pomal od toj element ke go delime desniot del na nizata na pola
//mnogu pomalku iteracii ke zeme VO situacija kadesto imame poveke broevi
int binarno_prebaruvanje(int *niza, int n, int vrednost){
    
    int start=0;
    int end=n-1;
    
    while(start<=end){ //se dur start ne dojde do end
        
        int middle=(start+end)/2; //sredisen element
        
        //niza[middle]
        if(*(niza+middle)==vrednost){ //dali sredniot element e ednakov na vrednosta sto ja barame
            return middle;
        }
        else if(*(niza+middle)>vrednost){ //ako sredisniot element ne e ednakov na vrednosta sto ja baram, tuku e pogolem od vrednosta, levata podniza ke ja razgleduvame
            end=middle-1;
        }
        else { //pomalo od vrednosta - desnata polovina
            start=middle+1;
        }
    }
    //dokolku ne se vratila ni edna vrednost
    return -1;
}

//REKURZIVNO

//int binarySearchRecursive (int * array, int key, int start, int end) {
//    if start>end)
//        return -1;
//    else §
//        int middle = (start+end) /2;
//    if (*(array + middle) == key) {
//        return middle;
//    } else if (key > *(array+middle)) {
//        binarySearchRecursive(array, key, middle+1, end);
//    } else {
//        binarySearchRecursive (array, key, starl, end);
//    }
//}

int main(){
    
    int niza[100];
    int n,i;
    scanf("%d", &n);
    
    for(i=0;i<n;i++){
        scanf("%d", &niza[i]);
    }
    
    printf("%d %d", linearno_prebaruvanje(niza, n, 100), binarno_prebaruvanje(niza, n, 100));
    
    return 0;
}

//binary
/*
prvo pocetniot i krajniot indeks (start+end/2) se sobiraat i se delat na 2. 0 se sobira so 9 bidejki imame 10 brojki, 0 e prv indeks, 9 e posleden. 9+0=9/2=4 ssto znaci na 4 indeks e brojot 95. 95 ne e vrednostsa, i dali vrednosta e pogolema od sredniot element? Da, sega start ke stane 5. 5 I 9 = 14/2=7. 7 INDEKS E 205. Dali 100 e 205? Ne. DALI 100 e pogolemo od 205? Ne, odi vo levata polovina ITN..
*/




