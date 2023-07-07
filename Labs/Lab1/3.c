// Да се внесат два четирицифрени броја. Да се испечати сумата на цифрите кои се наоѓаат на позицијата на единците, па на десетките, стотките и илјадарките. 

int main() {
    
    int broj1, broj2, edinici, desetki ,stotki, iljadarki,e1,e2,d1,d2,s1,s2,i1,i2, suma;
    scanf("%d%d", &broj1, &broj2);
    e1=broj1%10;
    e2=broj2%10;
    edinici=e1+e2;
    d1=(broj1/10)%10;
    d2=(broj2/10)%10;
    desetki=d1+d2;
    s1=(broj1/100)%10;
    s2=(broj2/100)%10;
    stotki=s1+s2;
    i1=(broj1/1000)%10;
    i2=(broj2/1000)%10;
    iljadarki=i1+i2;
    
    printf("Edinici: %d\n", edinici);
    printf("Desetki: %d\n", desetki);
    printf("Stotki: %d\n", stotki);
    printf("Iljadarki: %d\n", iljadarki);
    
    
    
    return 0;
}
