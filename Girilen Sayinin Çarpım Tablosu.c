
//  Girilen Sayi İçin 10'a Kadar Çarpımlarını Hesaplama
//
//  Created by Hande Erdal on 8.12.2021.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int sayi,i;
    printf("Bir sayi giriniz\n");
    scanf("%d",&sayi);
    for(i=1;i<11;i++)
    {
    printf("Sayinin %d ile çarpımı %d\n",i,i*sayi);
    }
    return 0;
}
