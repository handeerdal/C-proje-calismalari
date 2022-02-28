//
//  main.c
//  Bir dizideki en büyük elemanı rekürsif olarak bulma
//
//  Created by Hande Erdal on 28.02.2022.
//

#include <stdio.h>

int max=0;

int enbuyukeleman(int a[],int b){
    if(b==1)
        return max;
    if(max<a[b-1])
        max=a[b-1];
    return enbuyukeleman(a,(b-1));
    
}

int main(int argc, const char * argv[]) {
    // deneme amaçlı dizimizi seçelim & dışarıdan girelim
    
    int dizi[]={3,7,2,9,11};
    max=dizi[4];
    printf("%d en büyük elemanıdır\n",enbuyukeleman(dizi,5));
    return 0;
}
