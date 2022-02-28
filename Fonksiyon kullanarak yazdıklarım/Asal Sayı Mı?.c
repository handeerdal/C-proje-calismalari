//Girilen Sayının Asal Sayı Olup Olmadığını Bulan C kodu

//HANDE ERDAL


#include <stdio.h>

int asalmi(sayi)
{
    for(int i=2;i<sayi;i++)
    {
        if(sayi%i==0)
            return 1;
    }
    return 0;
}


int main(int argc, const char * argv[]) {
    
    int a;
    printf("Asal olup olmadığını öğrenmek istediğiniz sayıyı giriniz.");
    scanf("%d",&a);
    if(a==1)
        printf("Başka bir değer giriniz.");
    else if(asalmi(a)==0)
        printf("Bu asal sayı ");
    else if(asalmi(a)==1)
        printf("Bu bir asal sayi değil");
    return 0;
}
