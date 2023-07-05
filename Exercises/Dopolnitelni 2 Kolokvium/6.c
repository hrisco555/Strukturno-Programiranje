/*
Од стандарден влез се чита природен број N (N <= 100), како и низа од позитивни цели броеви a[ ] со N елементи. 

Да се напише функција int par(a, n) која ќе го врати најмалиот елемент во низата кој се појавува парен број пати во низата. Доколку нема таков елемент, функцијата враќа вредност 0.

Напишете програма што ќе ја повика функцијата par за внесената низа a[ ] и ќе го испечати најмалиот број којшто се појавува парен број пати во низата a[ ].

Пример 1.

Влез

12 // бројот N на елементи

1 3 4 5 3 1 4 5 5 3 2 3 // елементи на низата


Излез

Najmaliot element koj se pojavuva paren broj pati e 1 // овде функцијата par враќа вредност 1, а се печати оваа порака

Пример 2.

Влез

12 // бројот N на елементи

7 3 4 5 3 8 4 5 5 3 2 6 // елементи на низата


Излез

Nitu eden element ne se pojavuva paren broj pati! // овде функцијата par враќа вредност 0, се печати оваа порака 
*/

#include <stdio.h>

int par(int a[100], int n){

    int i,j,brojac=0,min=99999;
    for(i=0;i<n;i++){
        brojac=0;
        for(j=0;j<n;j++){
            if(a[i]==a[j]){ //ako edniot element(i) e ist so drugiot(j)
                brojac++;
            }
        }
        if(brojac%2==0){ //se pojavuva paren broj pati
            if(a[i]<min){ //da se najde najmaliot element vo nizata
                min=a[i];
            }
        }
    }
    if(min!=99999){ //ako ne dojde do 99999
    return min;
    }
    else {
        return 0;
    }
}

    int main(){
        
        int n,i,j;
        int a[100];
        scanf("%d", &n);
        
        for(i=0;i<n;i++){
            scanf("%d", &a[i]);
        }
        
        int min_element=par(a, n); //na nekoja promenliva davame vrednost - funkcijata

        if(min_element!=0){ //par(a,n) samo vo if
            printf("Najmaliot element koj se pojavuva paren broj pati e %d\n", min_element);
        }
        else {
            printf("Nitu eden element ne se pojavuva paren broj pati!\n");
        }
        
    return 0;
}



