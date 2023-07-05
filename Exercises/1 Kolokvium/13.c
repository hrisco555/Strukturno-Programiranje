/*
Од тастатура се внесува број на студенти кои ќе полагаат колоквиум, а потоа и индексите (цели броеви) на сите студенти кои ќе полагаат колоквиум. Програмата треба да ги подели студентите во три групи: студенти со индекси кои завршуваат на цифрата 0, 1 и 2, студенти со индекси кои завршуваат на цифрата 3, 4, 5 и студенти со индекси кои завршуваат на цифрата 6, 7, 8, 9. Програмата треба да ги испечати индексите за секоја група, во истиот редослед како што биле внесени. Максималниот број на студенти што може да се внесат е 1000.

Напомена: Оваа задача е за материјалот наменет за втор колоквиум и истата се решава со користење на низи.

Влез:

10 //Kolku studenti?

20010 20145 20147 20139 20581 19452 19873 19825 19458 20653 //Koi studenti?

Излез

Grupa 1
20010 20581 19452 

Grupa 2
20145 19873 19825 20653

Grupa 3
20147 20139 19458
  */

#include <stdio.h>

int lastDigit(int n, int d) {
  return (n % 10) == d;
}

int main() {
  int n;
  scanf("%d", &n);

  int studenti[n];
  for(int i = 0; i < n; i++) {
    scanf("%d", &studenti[i]);
  }

  printf("Grupa 1\n");
  for(int i = 0; i < n; i++) {
    if(lastDigit(studenti[i], 0) || lastDigit(studenti[i], 1) || lastDigit(studenti[i], 2)) {
      printf("%d ", studenti[i]);
    }
  }

  printf("\nGrupa 2\n");
  for(int i = 0; i < n; i++) {
    if(lastDigit(studenti[i], 3) || lastDigit(studenti[i], 4) || lastDigit(studenti[i], 5)) {
      printf("%d ", studenti[i]);
    }
  }

  printf("\nGrupa 3\n");
  for(int i = 0; i < n; i++) {
    if(lastDigit(studenti[i], 6) || lastDigit(studenti[i], 7) || lastDigit(studenti[i], 8) || lastDigit(studenti[i], 9)) {
      printf("%d ", studenti[i]);
    }
  }

  return 0;
}

