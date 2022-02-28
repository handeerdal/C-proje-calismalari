//
//  main.c
//  Bir sayıdaki basamakları toplamak için rekürsif C kodu
//
//  Created by Hande Erdal on 28.02.2022.
//

#include <stdio.h>

basamaktopla(int n){
    if(n==0)
        return 0;
    return (n%10+basamaktopla(n/10));
}

int main(int argc, const char * argv[]) {
    // deneme amaçlı sayımız=13459 olsun
    int sayi=13459;
    printf("Sayının basamakları toplamı %d dir.\n",basamaktopla(sayi));
    return 0;
}
