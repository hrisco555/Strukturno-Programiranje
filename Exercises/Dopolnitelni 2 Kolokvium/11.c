/*
Од тастатура се внесува цел број M, а потоа M низи од цели броеви. За секоја низа прво се внесува бројот на елементи во низата N (N<=100), а потоа и елементите на низата. 

Секоја од внесените низи треба да се трансформира според следново правило:

Ако првиот елемент од низата е позитивен број, тоа значи сите елементи од низата (вклучувајќи го и првиот) да се поместат за онолку места во десно, колку што е вредноста на елементот, празнините што ќе настанат во низата да се пополнат со елементи со вредност нула.

Ако првиот елемент од низата е негативен број, тоа значи сите елементи од низата (вклучувајќи го и првиот) да се поместат за онолку места во лево, колку што е вредноста на елементот, празнините што ќе настанат во низата да се пополнат со елементи со вредност нула.

При поместување на елементите, бројот на елементите во низата останува непроменет.

На крајот да се испечатат трансформираните низи како и тоа колку од влезните низи останале празни, односно по трансформацијата имаат само елементи со вредност нула.

Трансформацијата на низите да се реализира во посебна функција. Решенијата без користење функција ќе бидат оценети со најмногу 40% од поените.

Објаснување на вториот и третиот пример:
Во вториот пример се вчитува само една низа со 5 елементи (1,2,3,4,5). Првиот елемент е 1 (позитивен број), па елементите се поместуваат за една позиција на десно (_,1,2,3,4). Потоа празнините се пополнуваат со 0 и низата ги има елементите 0,1,2,3,4.

Во третиот пример се вчитува исто само една низа со 5 елементи (-2,-3,-4,-5,-6). Првиот елемент е -2 (негативен број), па елементите се поместуваат за две позиции на лево (-4,-5,-6,_,__). Потоа празнините се пополнуваат со 0 и низата ги има елементите -4,-5,-6,0,0.
*/

//ne izleguva tocna

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

void transform(int arr[], int size){
    
    int i;
    
    if(arr[0]>0){ //ako prviot element e pozitiven  shigtaj za desno, poemsti gi elementite na desnobroj
        //pocnuva od posledniot element i odi dodeka indexot i e pogolem ili ednakov na prviot element .
//        Ovoj loop gi shifta elementite desno kopirajki gi elementite
        for(i=size-1;i>=arr[0];i--){ //i>=0
            arr[i]=arr[i-arr[0]]; //go kopira elementot i go stava vo arr[i]
        }
        
        for(i=0;i<arr[0];i++){
            arr[i]=0; //prazninite popolni gi so nuli
        }
    }
    else if(arr[0]<0){ //ako prviot element e negativen
        //shiftame elementite za levo
        for(i=0;i<arr[0];i++){ //-arr[0]
            arr[i]=arr[i-arr[0]];
        }
        
        //gi popolnuva poziciite na krajot na nizata zaradi levoto pometuvanje
        for(i=size+arr[i];i<size;i++){
            arr[i]=0; //prazninite popolni gi so nuli
        }
    }
}

int main(){
    
    int M,N,i,j;
    
    scanf("%d", &M);
    
    int nizi_prazni=0; //ako imaat samo vrednost 0
    
    for(i=0;i<M;i++){
        scanf("%d", &N);
        
        int arr[N];

        for(j=0;j<N;j++){
            scanf("%d", &arr[j]);
        }
        
        int flag=1;
            
        transform(arr, N);
        
        for(j=0;j<N;j++){
            if(arr[j]!=0){ //ako ne e nizata ednakva na 0 flag stavi 0 i zavrrsi
                flag=0;
                break;
            }
        }
        
        if(flag){ //ako e flag==1 i ima nuli
            nizi_prazni++;
        }
        
        for(j=0;j<N;j++){
            printf("%d ", arr[j]);
        }
        printf("\n");
        
    }
    
    printf("%d\n", nizi_prazni);
    
    
    return 0;
}
