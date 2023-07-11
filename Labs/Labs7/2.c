/*
Од стандарден влез се внесува големината на еден фудбалски терен MxN. Потоа се внесува локацијата на играчот на тој терен (x_igrac, y_igrac), па се внесува локацијата на топката (x_topka, y_topka) и локацијата на голот (x1_gol, y1_gol) (x2_gol, y2_gol). Од кога ќе се внесат овие вредности треба да се испечати фудбалскиот терен, во фудбалскиот терен играчот е означен со карактер 'i', голот е означен со карактер ']' и топката е означена со 'o', се останато се означува со '-'. Ваша задача е најпрво да го испечатите на екран фудбалскиот терен според внесените вредности. Потоа од стандарден влез се внесуваат две вредности за поместувањето на топката за x координатата и поместувањето на топката за у координатата. По поместувањето на топката доколку се наоѓа во голот се печати GOAL, доколку се наоѓа надвор од фудбалскиот терен се печати OUT и доколку се наоѓа во теренот, но не е гол се печати новата позиција на топката и фудбалскиот терен со новата позиција на топката. 

Напомена: За репрезентација на фудбалскиот терен користете матрица.
  */
#include <stdio.h>

int main(){
    
    int i,j,n,m,pomestuvanje_po_x_oska,pomestuvanje_po_y_oska;
    char a[100][100];
    int x_igrac, y_igrac,x_topka, y_topka,x1_gol, y1_gol,x2_gol, y2_gol;
    
    scanf("%d%d", &n, &m);
    
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            a[i][j]='-';
        }
    }
    
    scanf("%d%d%d%d%d%d%d%d", &x_igrac,&y_igrac, &x_topka, &y_topka, &x1_gol, &y1_gol, &x2_gol, &y2_gol);
    
    a[x_igrac][y_igrac]='i';
    a[x_topka][y_topka]='o';
    a[x1_gol][y1_gol]=']';
    a[x2_gol][y2_gol]=']';
    
    
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
           printf("%c ", a[i][j]);
        }
        printf("\n");
    }
    
    scanf("%d%d", &pomestuvanje_po_x_oska, &pomestuvanje_po_y_oska);
    
    if((a[x_topka+pomestuvanje_po_x_oska][y_topka+pomestuvanje_po_y_oska]==a[x1_gol][y1_gol]) || (a[x_topka+pomestuvanje_po_x_oska][y_topka+pomestuvanje_po_y_oska]==a[x2_gol][y2_gol])){
        printf("GOAL!");
    }
    else if(a[x_topka+pomestuvanje_po_x_oska]>=m && a[y_topka+pomestuvanje_po_y_oska]>=n){
        printf("OUT!");
    }
    else {
         printf("Novata pozicija na topkata e (%d, %d)\n", x_topka+pomestuvanje_po_x_oska,y_topka+pomestuvanje_po_y_oska);
        a[x_topka][y_topka]='-';
        a[x_topka+pomestuvanje_po_x_oska][y_topka+pomestuvanje_po_y_oska]='o';
        
        for(i=0;i<n;i++){
        for(j=0;j<m;j++){
           printf("%c ", a[i][j]);
        }
        printf("\n");
    }
        
    }
    
    return 0;
}
