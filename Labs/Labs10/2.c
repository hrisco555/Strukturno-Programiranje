/*
Од стандарден влез се вчитува бројот N, бројот K и знакот C. Потоа се вчитуваат N текстуални низи (секоја во нов ред). 
Да се испечатат на екран текстуалните низи кои го содржат знакот C точно K пати без разлика на големината на буквата.
Ако нема такви низи, да се испечати порака NONE.
  */

#include <stdio.h>
#include <string.h>


int main() {
    int N, K, i,j,brojac=0, flag=0;
    char c, a[100];

    scanf("%d %d %c", &N, &K, &c);

    for (i = 0; i < N; i++) {
        scanf("%s", a);
        brojac = 0;
        for (j = 0; j < strlen(a); j++) { 
            if (a[j] == c) { //ako nizata go sodrzi znakot izbroj go
                brojac++;
            }
        }
        if (brojac == K) { //ako brojacot e ednakov na brojot na znaci 
            printf("%s\n", a);
          flag=1;
        }
    }
    if(flag==0) 
    printf("NONE");
    
    return 0;
}
