#include <stdio.h>

/*
Да се напише програма која за две низи кои се внесуваат од тастатура ќе
провери дали се еднакви или не. На екран да се испачати резултатот од
споредбата. Максимална големина на низите е 100.
 */



/*
int main() {
    
    int n1, n2;
    int array1[100], array2[100];
    
    scanf("%d", &n1);
    for(int i=0;i<n1;i++){
        scanf("%d", &array1[i]);
    }
    
    scanf("%d", &n2);
    for(int i=0;i<n1;i++){
        scanf("%d", &array2[i]);
    }
    
    if(n1!=n2){
        printf("Different");
        return 0;
    }
    
    for(int i=0;i<n1;i++){
        
        if(array1[i]!=array2[i]){ //ako se razlicni
            printf("Different");
            return 0;
        }
    }
    
    printf("Same"); //ako dvete nizi se isti
    
    
    return 0;
}
*/


//ZAD 2

/*
Да се напише програма која за низа чии елементи се внесуваат од тестатура, ќе
го пресмета збирот на парните елементи, збирот на непарните елементи, како
и односот помеѓу бројот на парни и непарни елементи. Резултатот да се
испечати на екран

//Input
За низата: 3 2 7 6 2 5 1 На екран ќе се испечати:

//Output
Suma parni: 8
Suma neparni: 16
Odnos: 0.75
*/


/*
int main(){
    
    int n;
    int array[100];
    scanf("%d", &n);
    
    for(int i=0;i<n;i++){
        scanf("%d", &array[i]);
    }
    
    int zbir_parni=0, zbir_neparni=0;
    
    for(int i=0;i<n;i++){
        if(array[i]%2==0){
            zbir_parni+=array[i];
    
        }
        else{
            zbir_neparni+=array[i];
        }
    }
    
    printf("Suma parni: %d\nSuma neparni: %d\nOdnos: %.2f\n", zbir_parni, zbir_neparni, (float)zbir_parni/zbir_neparni);
    
    
    return 0;
}
*/


//ZAD 3
/*
Да се напише програма која ќе го пресмета скаларниот производ на два
вектори со по n координати. Бројот на координати n, како и координатите на
векторите се внесуваат од стандарден влез. Резултатот да се испечати на екран.
*/

/*
int main(){
    
    int n;
    int array1[100];
    int array2[100];
    int scalar=0;
    scanf("%d", &n);
    
    for(int i=0;i<n;i++){
        scanf("%d", &array1[i]);
    }

    for(int i=0;i<n;i++){
        scanf("%d", &array2[i]);
    }
    
    for(int i=0;i<n;i++){
        scalar+=(array1[i] * array2[i]);
    }
    
    printf("%d", scalar);
    
    return 0;
}
*/


//ZAD 4
/*
Да се напише програма која ќе провери дали дадена низа од n елементи која се
чита од стандарден влез е строго растечка, строго опаѓачка или ниту строго
растечка ниту строго опаѓачка. Резултатот да се испечати на екран.
*/

/*

int main(){
    
    int n;
    int array[100];
    int flag_rastecka=1;
    int flag_opagacka=1;
    scanf("%d", &n);
    
    for(int i=0;i<n;i++){
        scanf("%d", &array[i]);
    }
    
    //ako e rastecka - flag=1
    //ako ne e rastecka - flag=0
    
    //a[i]>a[i-1] - rastecka
    //a[i]<a[i-1] - opagacka
    
    for(int i=1;i<n;i++){ //pocnuva od 1 deka nema prethodnik
        
        if(array[i]<=array[i-1]){ //prvo proveruvame deka ne e rastecka
            flag_rastecka=0; //flag na 0 ako ne e rastecka;
        }
        
        if(array[i]>=array[i-1]){ //sega naopaku, ako ne e opagacka
            flag_opagacka=0;
        }
    }
    
    //ako ne e ni rastecka, nitu opagacka
    if(!flag_rastecka && !flag_opagacka){
        printf("Neither ascending nor descending\n");
    }
    else if(flag_rastecka){
        printf("Ascending\n");
    }
    else {
        printf("Descending\n");
    }
    
    return 0;
}
*/

//2 NACIN
/*
int main(){
    
    int n;
    int array1[100];
    int flag_opagacka=1, flag_rastecka=1;
    
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &array1[i]);
    }
    
    for(int i=1;i<n;i++){
        if(array1[i-1]<=array1[i]){
            flag_opagacka=0;
        }
        if(array1[i-1]>=array1[i]){
            flag_rastecka=0;
        }
    }
        
    if(!flag_rastecka && !flag_opagacka){
        printf("Nitu rastecka, nitu opagacka");
    }
    else if(flag_rastecka){
        printf("Rastecka");
    }
    else {
        printf("Opagacka");
    }
    
    return 0;
}
*/


//ZAD 5

/*
Да се напише програма за ротирање на елементите на една низа за едно место
во десно. На крај, да се испечати на екран ротираната низа. Елементите од
низата се читаат од стандарден влез.
*/


//1 nacin
/*
int main(){
    
    int n, pom;
    int array[100];
    
    scanf("%d", &n);
    
    for(int i=0;i<n;i++){
        scanf("%d", &array[i]);
    }
    
    pom=array[n-1]; //da zacuvam posledniot element VO NEKOJA POMOSNA promenliva
    for(int i=n-1;i>0;i--){ //gi premestuvame soodvetno mestata
        array[i]=array[i-1]; //na posledna pozicija sakam da go dodelam elementot sto e negov prethodnik
//        a[4]=a[3]
//        a[3]=a[2]
//        a[2]=a[1]
//        a[1]=a[0]
    }
    
    array[0]=pom; //posledniot element e zacuvan vo prviot
    
    for(int i=0;i<n;i++){
        printf("%d ", array[i]);
    }
    
    return 0;
}
*/

//2 nacin - Stefan

/*
int main(){
    
    int n;
    int array[100];
    
    scanf("%d", &n);
    
    for(int i=0;i<n;i++){
        scanf("%d", &array[i]);
    }
    
    int temp=array[n-1]; //ke ja smestime vo temp
    
    for(int i=n-1;i>=1;i--){ //pocnuvame od posl.element na nizata. >=1 bidejki na 1 mu go zimame prethodnikot
        array[i]=array[i-1];
        
    }
    
    array[0]=temp; //na prva pozicija stavi posledno

    for(int i=0;i<n;i++){
        printf("%d", array[i]);
    }
    
    return 0;
}
*/


//ZAD 6
/*
Да се напише програма за ротирање на елементите на една низа за m местa во
десно. На крај, да се испечати на екран ротираната низа. Елементите од низата
и бројот на ротирања се читаат од стандарден влез
*/

/*
int main(){
    
    int n,m;
    int array[100];
    int temp[100];
    
    scanf("%d", &n);
    
    for(int i=0;i<n;i++){
        scanf("%d", &array[i]);
    }
    
    scanf("%d", &m);
    
    for(int i=0;i<m;i++){
        temp[i]=array[n-m+i]; //vo temp gi smestuvame site elementi sto treba da se vratat na pocetok
    }
    
    for(int i=n;i>=m;i--){ //pocnuvame od posledniot element na nizata
        array[i]=array[i-m];
    }
    
    for(int i=0;i<m;i++){
        array[i]=temp[i];
    }
    
    for(int i=0;i<n;i++){
        printf("%d ", array[i]);
    }
    
}
*/

//2 NACIN
/*
int main(){
    
    int n,m;
    int array[100];
    int temp[100];
    
    scanf("%d", &n);
    
    for(int i=0;i<n;i++){
        scanf("%d", &array[i]);
    }
    
    scanf("%d", &m);
    
    int pom;
    //VRTI DO M
    for(int j=0;j<m;j++){ //ZA ROTIRANJE NA NIZATA M PATI - samo se dodava od prethodnoto
        pom=array[n-1]; //da zacuvam posledniot element VO NEKOJA POMOSNA promenliva
        for(int i=n-1;i>0;i--){ //gi premestuvame soodvetno mestata
            array[i]=array[i-1];
        }
        array[0]=pom;
    }
    
    for(int i=0;i<n;i++){
        printf("%d ", array[i]);
    }
    
    return 0;
}
*/

//ZAD 7
/*
Да се напише програма која што ќе ги избрише дупликатите од една низа. На
крај, да се испечати на екран новодобиената низа. Елементите од низата се
читаат од стандарден влез.
 
 input
 1 2 3 1 1 1 2 8
 output
 1 2 3 8
*/

int main(){
    
    int n;
    int array[100];
    
    scanf("%d", &n);
    
    for(int i=0;i<n;i++){
        scanf("%d", &array[i]);
    }
    
    int i,j;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(array[i]==array[j]){
                for(int k=j;k<n-1;k++){
                    array[k]=array[k+1];
                }
                j--;
                n--;
            }
        }
    }
    
    return 0;
}

/*
int main(){
    
    int n;
    int array[100];
    
    scanf("%d", &n);
    
    for(int i=0;i<n;i++){
        scanf("%d", &array[i]);
    }
    
    //dali ima duplikati
    
    //Use nested for loops to compare each element of the array to every other element.
    
  //  The outer loop iterates over all elements of the array, and the inner loop iterates over all elements to the right of the current element.
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){ //We start the inner loop at i + 1 to avoid comparing an element to itself or to any element to its left, since we have already compared those elements in previous iterations.
            if(array[i]==array[j]){ //ima duplikat, izbrisi go
              //  If we find a duplicate, shift all the elements to the right of that duplicate one position to the left, effectively deleting the duplicate.
                for(int k=j;k<n-1;k++){ //go zimame sledbenikot so n-1
                    array[k]=array[k+1]; //vrakanje na elementite od desno kon edno mesto kon levo
                  //  If arr[i] is equal to arr[j], we have found a duplicate. We then shift all the elements to the right of arr[j] one position to the left using another for loop, effectively deleting the duplicate. We also decrement the size of the array n by 1 and decrement the value of j by 1 to account for the shifted elements.
                }
                j--;
                n--;
                //To delete duplicates from the array, we use nested for loops to compare each element of the array to every other element. If we find a duplicate, we shift all the elements to the right of that duplicate one position to the left, effectively deleting the duplicate. We also decrement the size of the array and the value of j to account for the shifted elements.
            }
        }
    }
    
    for(int i=0;i<n;i++){
        printf("%d", array[i]);
    }
    
    return 0;
}

*/

//2 nacin
/*
int main(){
    
    int n;
    int array[100];
    
    scanf("%d", &n);
    
    for(int i=0;i<n;i++){
        scanf("%d", &array[i]);
    }
    
    int m;
    scanf("%d", &m); //element koj sakam da go izbrisam
    
    //pomestuvanje 1 mesto vo levo == brisenje element od niza
    for(int i=0;i<n;i++){ //go baram elementot kojsto treba da go brisam
        if(array[i]==m){
                    //ili n-1
            for(int j=i;j<n-1;j++){
                array[j]=array[j+1];
            }
            n--;
            break; //sim go nasol elementot i sum go izbrisal elementot
        }
    }
    
    for(int i=0;i<n;i++){
        printf("%d", array[i]);
    }
    
}
*/
