//
//  main.c
//  Dizileri birleştiren dinamik pointer fonksiyonu
//
//  Created by Hande Erdal on 3.04.2022.
//

#include <stdio.h>
#include <stdlib.h>

int *dizileribirlestir(int *ptr1,int *ptr2,int uzunluk1,int uzunluk2){
    int *C=(int*)calloc(uzunluk1+uzunluk2, sizeof(int));
    int k=0;
    for(int i=0;i<uzunluk1;i++)
        C[i]=*(ptr1+i);
    for(int i=uzunluk1;i<uzunluk1+uzunluk2;i++){
        C[i]=*(ptr2+k);
        k++;}
    return C;
}

int main(int argc, const char * argv[]) {
    int A[5]={1,2,3,4,5};
    int B[5]={6,7,8,9,10};
    int *ptr1=A,*ptr2=B;
    int *C=dizileribirlestir(ptr1,ptr2,5,6);
    for(int i=0;i<10;i++)
        printf("%d\n",C[i]);
    
    return 0;
}
