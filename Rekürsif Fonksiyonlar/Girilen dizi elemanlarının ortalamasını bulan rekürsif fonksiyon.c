//
//  main.c
//  Girilen dizi elemanlarının ortalamasını bulan rekürsif fonksiyon
//
//  Created by Hande Erdal on 2.04.2022.
//

#include <stdio.h>

int ortbulan(int A[],int uzunluk){
    static int ortalama=0,i=0;
    if(uzunluk==-1)
        return ortalama/i;
    else{
        i++;
        ortalama=ortalama+A[uzunluk];
          return ortbulan(A, uzunluk-1);
    }
}

int main(int argc, const char * argv[]) {
    int uzunluk;
    int A[100];
    printf("uzunluk");
    scanf("%d",&uzunluk);
    printf("elemanlar\n");
    for(int a=0;a<uzunluk;a++)
    {
        scanf("%d",&A[a]);
    }
    printf("ortalama=%d",ortbulan(A, uzunluk-1));
    return 0;
}
