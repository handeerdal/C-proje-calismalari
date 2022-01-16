//RAND() Fonksiyonu ile 1-10 arası rastgele sayı oluşturma

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int c,n;
    srand(time(NULL)); // Her debug yapıldığında rastgele gelecek sayı değişir.
    
    for(c=0;c<=10;c++)
    {
        n=rand()%100+1; // oluşturulan sayının 100le bölümünden kalanı alır 1 ekler
                        //böylece sayı 1 ile 100 arasında olmuş olur.
        printf("%d\n",n);
    }
 
    return 0;
}
