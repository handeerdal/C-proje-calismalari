//
//  main.c
//  Girilen Sayının Palindrom Sayı Olup Olmadığını Bulma Rekürsif
// Palindromik sayı, iki taraftan okunduğu zaman okunuş yönüyle aynı olan sayılardır. Örnek: 1, 4, 8, 99, 101, 363, 4004, 9889, 13531 vb.
//
//  Created by Hande Erdal on 28.02.2022.
//

#include <stdio.h>
int toplam=0;

palindrommu(int sayi){
    if(sayi==0)
        return 0;
    int kalan=0;
    kalan=sayi%10;
    toplam=kalan+(toplam*10);
    return palindrommu(sayi/10);
}

int main(int argc, const char * argv[]) {
    //örn sayimiz 13531 ve palindrom olup olmadığını bulmak istiyoruz
    int sayi=13531;
    palindrommu(sayi);
    if (toplam==sayi)
        printf("Bu bir palindrom sayıdır\n");
    else
        printf("Bu bir palindrom sayı değildir\n");
    return 0;
}
