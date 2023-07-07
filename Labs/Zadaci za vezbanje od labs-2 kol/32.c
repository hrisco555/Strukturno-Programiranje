/*
Од тастатура се вчитуваат броевите A и B. На екран да се испечатат сите броеви од интервалот [A,B] кои се палиндроми и се составени само од цифрите 0,1,2,3 и 4. 

Предлог за работа: 
Да се имплементира функција reverseNumber (int number) која ќе го пресмета обратниот број на определен број number.
Да се имплементира функција isPalindrome (int number) која ќе врати 1 доколку бројот number е палиндром, а 0 во спротивно
Да се имплементира функција containsDigits (int number) која ќе врати 1 доколку сите цифри во бројот се 0,1,2,3 или 4, а 0 во спротивно. 
Да се искористат функциите isPalindrome и containsDigits во main функцијата
Дополнително: Направете ја функцијата containsDigits рекурзивна.
  */


int reverseNumber(int number){
    
    int cifra, prevrten=0;
    while(number){
        cifra=number%10;
        prevrten=prevrten*10+cifra;
        number/=10;
    }
    
    return prevrten;
}

int containsDigits(int number){
    
    int cifra=number%10;
    
    if(number==0){
        return 1;
    }
    
    if(cifra>4){
        return 0;
    }
    
    return containsDigits(number/10);
}

void isPalindrome(int number){
    
    if(number==reverseNumber(number) && containsDigits(number)){
       printf("%d\n", number);
    }
   
}

int main(){
    
    int a,b,number;
    scanf("%d %d", &a, &b);
    
    for(int i=a;i<=b;i++){
        isPalindrome(i);
    }
    
    return 0;
}
