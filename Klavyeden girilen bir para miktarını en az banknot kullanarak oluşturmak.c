/*Klavyeden girilen bir para miktarını en az banknot kullanarak oluşturmak
istediğimizde içinde kaç tane 100, 50, 20 ve 10’luk olduğunu bulan programı C dili ile
yazınız. Not: Klavyeden girilen para miktarı 10’un katları olmalıdır.*/

//  Created by Hande Erdal on 8.12.2021.
//

#include <stdio.h>


int main()
{
    int para,yuzluk,onluk,ellilik,yirmilik;
    printf("Lutfen para miktarini giriniz.\n");
    scanf("%d",&para);
    if (para%10 != 0)
    {
        printf("Yanlis para girdiniz.\n");
    }
    else{
        yuzluk=para/100;
        para=para-(yuzluk*100);
        ellilik=para/50;
        para=para-(ellilik*50);
        yirmilik=para/20;
        para=para-(yirmilik*20);
        onluk=para/10;
        para=para-(onluk*10);
        printf("yuzluk=%d\nellilik=%d\nyirmilik=%d\nonluk=%d\n",yuzluk,ellilik,yirmilik,onluk);


    }
    return 0;
}
