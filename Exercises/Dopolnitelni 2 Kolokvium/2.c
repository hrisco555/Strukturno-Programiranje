/*
  Од тастатура се чита природен број N (N < 400).

Да се напише програма којашто формира квадратна матрица што ги содржи броевите од 1 до N по растечки редослед на следниот начин: во првата колона во правец од горе надолу, па продолжува во втората колона од долу нагоре, па продолжува во третата колона од горе надолу итн. Да се избере најмалата димензија на матрицата во која ќе ги собере сите броеви до N. Доколку има преостанати празни места, тие да се пополнат со нули.

Формираната матрица да се запише во датотека "shema.txt".


Пример.

Влез

22


Излез во датотеката "shema.txt"

1 10 11 20 21

2 9 12 19 22

3 8 13 18 0

4 7 14 17 0

5 6 15 16 0
*/

#include <stdio.h>
#include <math.h>
#include <ctype.h>

void printFile() {
    FILE *f=fopen("shema.txt","r");
    char line[1000];
    while(!feof(f)){
        fgets(line,1000,f);
        if (feof(f))
            break;
        printf("%s",line);
    }
    fclose(f);
}

int main(){
    
    FILE *f=fopen("shema.txt","w");

    int a[100][100];
    int br_koloni,i,n,j;
    int broj=1;
    
    scanf("%d", &n);
    br_koloni=ceil(sqrt(n));
    
    for(j=0;j<br_koloni;j++){
        if(j%2==0){
            for(i=0;i<br_koloni;i++){
              if(broj<=n){
                  a[i][j]=broj;
                  broj++;
              }
              else {
                  a[i][j]=0;
                  broj++;
              }
            }
        }
        
        if(j%2!=0){
            for(i=br_koloni-1;i>=0;i--){
              if(broj<=n){
                  a[i][j]=broj;
                  broj++;
              }
              else {
                  a[i][j]=0;
                  broj++;
              }
            }
        }
    }
    
    for(i=0;i<br_koloni;i++){
        for(j=0;j<br_koloni;j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    
    printFile();
    
    fclose(f);
    
    return 0;
}
