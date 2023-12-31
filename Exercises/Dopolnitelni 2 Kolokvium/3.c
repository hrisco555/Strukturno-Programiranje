/*
Од стандарден влез се чита цел број N (N<100) и потоа N низи од знаци. Низите знаци содржат букви, цифри и специјални знаци, а секоја од нив не е поголема од 50 знаци.

Да се напише програма што ќе ги отпечати на екран сите низи од знаци во кои се содржи поднизата А1c  најмалку 2 пати (пр. A1c01АA1c92, 12A1cwwA1cxy, аA1cwA1cA1ccA1cxab) според редоследот како што се прочитани од влезот. При печатење на зборовите, сите алфабетски знаци треба да се испечатат со мали букви.

Пример

Влез:

6

Ekjqh!!lkjsdh 

 A1c01АA1c92

12A1cwwA1cxy 

12A1cwwA1bxy 

аA1cwA1cA1ccA1cxab

nemaA1c_povekjepati


Излез

а1c01аа1c92

12а1cwwа1cxy 

аа1cwа1cа1ccа1cxab
  */

int main(){
    
    int n;
    scanf("%d", &n);
    char line[51];
    
    for(int i=0;i<n;i++){
//        fgets(line,51,stdin);
        
        int brojac=0;
        
        scanf("%s", line);
        
        int m=strlen(line);
        for (int j = 0; j<m; j++) {
            line[j] = tolower(line[j]);
        }
        
        char *ptr = strstr(line, "a1c");
        
        while(ptr!=0){
            brojac++;
            ptr=strstr(ptr+1, "a1c");
        }
        
        if(brojac>=2){
            printf("%s\n",line);
        }
    }
    
    return 0;
}
