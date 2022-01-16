
//(A program to find out if a number entered from outside is perfect.)


//*MÜKEMMEL SAYI NEDİR? Kendisi hariç bütün pozitif bölenlerinin toplamı kendisine eşit olan sayılara mükemmel sayı denir. 6 bir mükemmel sayıdır. Çünkü 6'nın pozitif bölenleri 1,2,3 ve 6'dır. Kendisi hariç diğer bölenlerini toplarsak 1+2+3=6 eder. Bunun gibi 28 de mükemmel sayıdır.(WHAT IS THE PERFECT NUMBER? The sum of all the positive divisors, except itself, is equal to the number of the perfect number. 6 is an excellent number. Because the positive divisors of 6 are 1,2,3 and 6. If we add the other divisions except for itself, it is 1 + 2 + 3 = 6. 28 is the perfect number.) 28 = 1 + 2 + 4 + 7 + 14 *//


//  Created by Hande Erdal on 8.12.2021.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int sayi,i,toplam=0;
    printf("Bir sayı giriniz.\n");
    scanf("%d",&sayi);
    for(i=1;i<sayi;i++)
    {
        if (sayi%i==0)
        {
            toplam=toplam+i;
        }
    }
    
    if(sayi==toplam)
    {
        printf("%d mükemmel sayıdır\n",sayi);
    }
    else
    {
        printf("%d mükemmel sayı değildir\n",sayi);

    }
    return 0;
}
