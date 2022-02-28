
//  Girilen Sayının Palindrom Sayı Olup Olmadığını Bulma

//  Created by Hande Erdal on 8.12.2021.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int temp,kalan,sayi,toplam=0;
    printf("Palindrom sayı olup olmadığını öğrenmek istedğiniz sayıyı girin");
    scanf("%d",&sayi);
    temp=sayi;
    while(temp>0)
    {
        kalan=temp%10;
        toplam=kalan+(toplam*10);
        temp/=10;
    }
    if(toplam==sayi)
    {
        printf("Evet bu bir palindrom sayı");
    }
    else
    {
        printf("Palindrom sayı değil");
    }
    
    
    
    return 0;
}
