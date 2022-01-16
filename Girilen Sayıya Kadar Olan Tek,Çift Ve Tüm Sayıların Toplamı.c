/*Klavyeden girilen n sayısına göre, 1’ den n’e kadar tamsayıların toplamını (t1), 1’ den n’e kadar tek tamsayıların toplamını (t2) ve 1’ den n’e kadar çift tamsayıların toplamını (t3) hesaplayan program
 */
//  Created by Hande Erdal on 8.12.2021.


#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int n,toplam=0,cifttoplam=0,tektoplam=0,i=0;
    printf("n sayısını giriniz \n");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        toplam=toplam+i;
        if (i%2==0)
        {
            cifttoplam=cifttoplam+i;
        }
        else if (i%2==1)
        {
            tektoplam=tektoplam+i;
        }
        
    }
    printf("Toplam: %d\nCifttoplam: %d\nTektoplam: %d",toplam,cifttoplam,tektoplam);
    return 0;

}
