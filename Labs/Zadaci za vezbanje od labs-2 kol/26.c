/*
Да се напише програма во која со помошна функција што користи покажувачи, елементите на низата ќе се променат така што секој елемент ќе биде еднаков на збирот од него самиот и неговиот претходник кој е изменет според истата логика.
*/

void Niza(int *a, int n){
    
    int i,j,prethoden_broj=0;
    
    for(i=0;i<n;i++){
        a[i]+=prethoden_broj; //sekoj element ke bide ednakov na zbirot na nego samiot i negoviot prethodnik
        prethoden_broj=a[i];
    }
    
}


int main(){
    
    int n,i;
    int a[100];
    scanf("%d", &n);
    
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    
    printf("Vnesenata niza e:\n");
    for(i=0;i<n;i++){
        printf("%d ", a[i]);
    }
    
    Niza(a, n);
    
    printf("\nNovata niza e:\n");
    for(i=0;i<n;i++){
        printf("%d ", a[i]);
    }
    
    
    return 0;
}
