/*
Од стандарден влез се чита број N, а потоа низа на N цели броеви. Да се дефинира функција int isInteresting(int number) која што ќе врати 1 доколку е интересен број, односно доколку цифрите на бројот се парна-непарна цифра, наизменично. Во спротивно враќа 0. Да се дефинира функција void printArray(int numbers[], int n) која што ќе ги испринта сите броеви во низата кои што се интересни. 

Пример интересни броеви: 1634, 678, 141858

За се освојат сите поени од вежбата, потребно е функцијата printArray да биде рекурзивна.
  */

#include <stdio.h>

int isInteresting(int number){
    
    int flag=0;
    while(number>0){
        
    int posledovatelna_cifra=number%10;
    int prethodna_cifra=number/10%10;
    
    if(prethodna_cifra==0){
        break;
    }
        
        if(((posledovatelna_cifra%2==0)&&(prethodna_cifra%2!=0))||((posledovatelna_cifra%2!=0)&&(prethodna_cifra%2==0))){
            flag=1;
        }
        else {
            flag=0; 
            break;
        }
        number/=10;
    }
    
   if(flag==1){
       return 1;
   }
   else {
       return 0;
   }
    
}

void printArray(int numbers[], int n, int start){
    
    if(start<0){
        return 0;
    }
    
    if(isInteresting(numbers[start])){
        printf("%d\n", numbers[start]);
    }
    printArray(numbers, n,start-1);
}


int main(){
    
    int n,i,start;
    int a[100];
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    
    printArray(a,n,n-1);
    
    return 0;
}
