//Sayının tam bölenlerini listeleyen C kodu
// Created by Hande Erdal on 7.12.2021.
//

#include <stdio.h>
// Klavyeden girilen a tam sayısının tam bölenlerini listeleyen program.

int main(int argc, const char * argv[]) {
    int sayi,temp=0,i;
    printf("Bir sayı giriniz\n");
    scanf("%d",&sayi);

    for(i=0;i<=sayi;i++)
    {
        if (sayi%i==0)
        {
            printf("%d Sayının tam bölenidir\n",i);
        }
        
    }
    return 0;
}
