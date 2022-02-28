//
//  main.c
//  1'den N sayısına kadar olan sayıların toplamını bulan rekürsif bir fonksiyon
//
//  Created by Hande Erdal on 27.02.2022.
//

#include <stdio.h>

int toplam(int);

int main(int argc, const char * argv[]) {
    // deneme amaçlı n=10 olsun
    int n=10;
    printf("%d",toplam(n));
    return 0;
}
int toplam(int n){
    if(n==0)
        return 0;
    return (n+toplam(n-1));
}
