/*
Од стандарден влез се вчитува број N, а потоа и N цели броеви. 

Да се испечати на екран најголемата разлика помеѓу два последователно внесени броја.

Да се реши без користење на низи!

Објаснување на примерот:
N=5, па се внесуваат 5 броја: 1,3,0,5,2. Разликите се соодветно:
3-1 = 2
0-3 = -3
5-0 = 5
2-5 = -3

Најголема разлика е 5.


  */

#include <stdio.h>
int main ()
{
    int n,i,c,broj;
    scanf("%d",&N);
    scanf("%d",&broj);
    int flag = 1;
    int razlika=0;

    for (i=0;i<n-1;i++)
    {
        scanf("%d",&c);
        if(c - broj > razlika || flag)
        {
            razlika = c - broj;
            flag = 0;
        }

        broj = c;


    }
    printf("%i", razlika);
    return 0;
}
