
//  Bir sayının basamak sayını bulan(1) ve tersini yazan(2) fonksiyonlar
//
//  Created by Hande Erdal on 16.01.2022.
//

#include <stdio.h>

int basamaksayisibulan(int sayi)
{
    int basamaksayisi=0;
    
    while(sayi>0)
    {
        sayi=sayi/10;
        basamaksayisi++;
        
    }
    return basamaksayisi;
    
}

int tersyazan(int sayi)
{
    int basamaksayisi=0,terssayi=0,temp=0;
    basamaksayisi=basamaksayisibulan(sayi);
    for(int i=0;i<basamaksayisi;i++)
    {
        temp=sayi%10;
        terssayi=terssayi*10+temp;
        sayi=sayi/10;
    }
        
    return terssayi;
}


int main(int argc, const char * argv[]) {
    int sayi,terssayi=0;
    printf("Lütfen bir sayi girin.\n");
    scanf("%d",&sayi);
    terssayi=tersyazan(sayi);
    printf("Sayının tersi %d dir.\n",terssayi);
    return 0;
}
