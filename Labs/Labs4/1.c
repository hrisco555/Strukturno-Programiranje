/*
Да се напише програма што ќе ја испечати сумата на сите броеви деливи со 3 во интервалот [A,B). А и B се внесуваат од тастатура.

Објаснување на примерот.

А=10, B = 20. Броеви кои припаѓаат во интервалот се 10,11,12,13,..,19. Од нив деливи со 3 се броевите 12,15,18, па нивната сума е 45. 
*/

#include <stdio.h>

int main(){

    int a,b,i,suma=0,broj=0;
    scanf("%d%d", &a,&b);
    for(i=a;i<b;i++){
            if(i%3==0){
                suma+=i;
            }
            else {
                continue;
            }
    }
    printf("%d", suma);
    return 0;
}
