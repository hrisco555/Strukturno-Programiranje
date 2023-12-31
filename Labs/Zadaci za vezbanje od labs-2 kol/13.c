/*
Од тастатура се чита димензија на квадратна матрица(максимална големина 100х100). Треба да се провери дали матрицата го задоволува следниот услов: секој елемент од главната дијагонала да биде еднаков со збирот на елементите десно (во истата редица) од тој елемент. Ако матрицата го исполнува условот истата треба да се испечати на екран, а во спротивно се  печати -1.
  */

void Matrix(int a[100][100], int n){
    
    int zbir;
    int flag=1, i,j;
    for(i=0;i<n;i++){
        zbir=0;
        for(j=i+1;j<n;j++){
            zbir+=a[i][j];
        }
    }
    
    if(a[i][j] != zbir){
            flag=0;
            
            printf("-1\n");
        }
        
    
    if(flag){
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
    } 
    
   
}

int main(){
    
    int n,m;
    int a[100][100];
    scanf("%d", &n);
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d", &a[i][j]);
        }
    }
    
    Matrix(a,n);
    
    
    return 0;
}
