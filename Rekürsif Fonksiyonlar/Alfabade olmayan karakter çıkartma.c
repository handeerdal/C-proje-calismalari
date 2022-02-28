//
//  main.c
//  Alfabade olmayan karakter çıkartma
//
//  Created by Hande Erdal on 28.02.2022.
//

#include <stdio.h>


int uzunlukbul(char A[],int uzunluk){
    if(A[uzunluk]!='\0')
        return 1+uzunlukbul(A, uzunluk+1);
    else
        return 0;
    
}

int alfabedencikart(char A[],int uzunluk,int temp)
{
    if(temp==uzunluk)
        return 0;
    if(A[temp] >= 'a' && A[temp] <= 'z')
        printf("%c",A[temp]);
    return alfabedencikart(A, uzunluk, temp+1);
    
}

int main(int argc, const char * argv[]) {
    char A[100],uzunluk=0,temp=0;
    printf("Bir şeyler giriniz.Yazdığınız stringten alfabade olmayan ifadeleri sileceğiz.\n");
    gets(A);
    uzunluk=uzunlukbul(A,temp);
    temp=0;
    alfabedencikart(A,uzunluk,temp);
    
    
    return 0;
}
