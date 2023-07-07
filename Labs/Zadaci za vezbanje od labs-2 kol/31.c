/*
Од стандарден влез се читаат броевите N и k, потоа се внесуваат N елементи во низа. Ваша задача е да ја испечатите низата и да испечатите колку пати во низата се појавува k.

Напомена: Печатењето на елементите во низата да биде во функција.
  */

int main(){
    
    int n,k,brojac=0,i;
    int a[100];
    scanf("%d %d", &n, &k);
    
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    
    for(i=0;i<n;i++){
        if(a[i]==k){
            brojac++;
        }
    }
    
    for(i=0;i<n;i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    
    
    printf("Brojot %d vo nizata se naogja %d pati.\n", k, brojac);

    

    return 0;
    
}
