/*
Од тастатура во низа се внесуваат N позитивни цели броеви (N <= 100), а потоа се внесува и цел број ind (ind >= 0).

Да се напише функција sum_pos која ја прима низата, бројот ind (кој претставува индекс во низата) и бројот на валидни елементи во низата. Функцијата треба да врати сумата на сите елементи почнувајќи од дадениот индекс ind па се до крајот на низата. Ако индексот ind е поголем од Nфункцијата треба да врати 0.

НАПОМЕНА: Задачата да се реши со помош на покажувачи (без користење на оператор [ ]).

Пример
влез:

10
2 4 6 8 1 3 9 12 33 44
6
излез:

98
98 = 9+12+33+44
  */


#include <stdio.h>

int sum_pos(int *a, int n, int ind){

    if(ind > n){ //ako indeksot e pogolem od n
        return 0;
    }

    int *ptr = a+ind; //pokazuvac vo elementtot na index ind

    int zbir=0;

    for(int i=ind;i<n;i++){ //pocnuvajki od indeksot pa se do krajot na nizata

        zbir+=*ptr; //dodadi ja vrednosta sto pokazuva od pokazuvacot na sumata.
        ptr++; //mora da dvizi na slednite elementi vo nizata
    }

    return zbir;//vrati go zbirot
}

int main() {

    int a[100];
    int n,zbir,ind;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }

    scanf("%d", &ind); //od koj element da pocnuva da broi

  zbir=sum_pos(a, n, ind);//ja bara sumata pocnuvajki od indeksot ind

    printf("%d\n", zbir);

    return 0;
}
