/*
Од тастатура се чита број n а потоа и низа од n елементи. Потребно е низата да се трансформира така што максималниот и минималниот елемент ќе си ги заменат местата, а на останатите елементи ќе им се додаде разликата меѓу максималниот и минималниот елемент. Самата трансформација треба да се изврши во функцијата 
void transform(int *arr, int n)
  */

//ne iskaca

void transform(int *arr, int n){
    
    int i,k=0,min=0,max=0;
    for(i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
            max=i;
        }
        if(arr[i]<min){
            min=arr[i];
            min=i;
        }
    }
    int razlika=max-min;
    for(i=0;i<n;i++){
        if (i == max) {
            arr[i] += razlika;
        }
    }
  
}

int main(){
    
    int arr[100];
    int n,i;
    scanf("%d", &n);
    
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    
    transform(arr, n);
    
    for(i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
    
    return 0;
}
