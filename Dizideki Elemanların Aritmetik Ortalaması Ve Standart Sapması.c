
//  Dizilerin aritmetik ortalaması ve st sapma
//
//  Created by Hande Erdal on 4.01.2022.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    int s,i,toplam=0;
    float ortalama,indeks,stsapma=0;
    printf("A dizisinin eleman sayısını giriniz\n");
    scanf("%d",&s);
    int A[s];
    printf("A dizisinin elemanlarını giriniz\n");
    for(i=0;i<s;i++){
        scanf("%d",&A[i]);
        toplam=toplam+A[i];
    }
    ortalama=toplam/s;
    for(int j=0;j<s;j++)
    {
        indeks=(A[j]-ortalama);
        stsapma=stsapma+pow(indeks,2);
    }
    stsapma=sqrt(stsapma/(s-1));
    printf("ORTALAMA : %f\n STSAPMA: %f",ortalama,stsapma);
    return 0;
    
    
    
}
