//Благ број е број што е составен само од парни цифри (0, 2, 4, 6, 8). Во зададен опсег (почетокот m и крајот на опегот n се цели броеви чија вредност се внесува 
//од тастатура), да се најде и испечати најмалиот „благ број“. Ако не постои таков број, да се испечати NE.

#include <stdio.h>

int main() {

    int pocetok,kraj,broj,i,kopija,brojac,cifra;
    scanf("%d%d", &pocetok,&kraj);
    for(i=pocetok;i<=kraj;i++){
        kopija=i;
        brojac=0;
        while(kopija>0){
            cifra=kopija%10;
            kopija=kopija/10;
        }
        if(cifra%2==0){
            printf("%d", i);
            break;
        }
    }
    if(cifra%2!=0) {
            printf("NE");
            
        }

    return 0;
}
