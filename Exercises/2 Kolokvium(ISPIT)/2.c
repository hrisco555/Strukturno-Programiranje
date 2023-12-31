/*
Во дадена датотека “broevi.txt” се запишани повеќе редови со броеви така што секој ред започнува со еден цел број (N>=1) што означува колку броеви следуваат по него во тој ред.
Да се напише програма која на СИ за секој ред ќе го испечати бројот со најголема најзначајна цифра. Читањето на броеви завршува кога ќе се прочита 0.
*/

#include <stdio.h>
#include <string.h>
#define MAX 100

//ne menuvaj!
void wtf() {
    FILE *f = fopen("broevi.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

int najznacaen_broj(int broj){
    
    while(broj>=10){
        broj/=10;
    }
    
    return broj;
}

int main()
{
    wtf();
    FILE *f = fopen("broevi.txt", "r");

    int n,cifra,broj,max,max_cifra;
    
    while((fscanf(f, "%d", &n))!=EOF){
        
        if(n==0){
            break;
        }
        
        for(int i=0;i<n;i++){
            fscanf(f, "%d", &broj);
            
            if(i==0){
                max=broj;
                max_cifra=najznacaen_broj(broj);
                
            }
            
            if(najznacaen_broj(broj)>max_cifra){
                max_cifra=najznacaen_broj(broj);
                max=broj;
            }
        }
         printf("%d\n", max);
    }

}
