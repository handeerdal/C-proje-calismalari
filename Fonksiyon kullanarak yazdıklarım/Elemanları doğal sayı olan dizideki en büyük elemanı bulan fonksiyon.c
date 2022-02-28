
//  Elemanları doğal sayı olan dizideki en büyük elemanı bulan fonksiyon
//
//  Created by Hande Erdal on 16.01.2022.
//

#include <stdio.h>

void enbuyukelemanbulan(int dizi[],int boyut){
    int max=0;
    for(int i=0;i<boyut;i++)
    {
        for(int j=0;j<boyut;j++){
            if(dizi[i]>dizi[j])
                max=dizi[i];
        }
            
    }
    printf("En büyük eleman %d\n",max);
}

int main(int argc, const char * argv[]) {
   
    int elemansayisi;
    printf("Dizinin eleman sayısını giriniz.\n");
    scanf("%d",&elemansayisi);
    int A[elemansayisi];
    printf("Dizinin elemanlarını giriniz.");
    for(int i=0;i<elemansayisi;i++)
        scanf("%d",&A[i]);
    enbuyukelemanbulan(A, elemansayisi);
    
    
    
    
    return 0;
}
