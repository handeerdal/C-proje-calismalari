
/*Soru: Klavyeden girilen n elemanlı A dizisi için aşağıdaki işlemleri gerçekleştiren programın kodunu yazınız. Gerçekleştirilecek işlem klavyeden girilerek seçilecek ve klavyeden -1 girilene kadar her işlemden sonra yeni bir işlem için kullanıcıdan giriş yapması istenecek.
1- Dizi elemanlarını topla
2-Dizinin ortalamasını bul
3-Dizinin ortalamasından büyük olan elemanları göster
4-Dizinin elemanlarını başka bir diziye tersten yerleştir
5-Dizinin en küçük ve en büyük elemanını bul
6-Dizi elemanlarını küçükten büyüğe doğru sıralayarak aynı diziyi tekrardan oluştur*/

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i = 0,A[100],j,k,islemno,toplam = 0;
    float ortalama;
    printf("Dizinin eleman sayısını giriniz.\n");
    scanf("%d",&i);
    for(j=0;j<i;j++)
    {
        printf("Dizinin elemanlarını giriniz.\n");
        scanf("%d",&A[j]);
    }
    for(k=0;k<i;k++)
    {
        printf("Dizinin elemanları [%d]:%d .\n",k,A[k]);

    }
    for(int t=0;t<i;t++)
    {
        toplam=toplam+A[t];
    }
    ortalama=(toplam/i);
    do{
        printf("Yapmak istediğiniz işlemi giriniz.\n1- Dizi elemanlarını topla\n2-Dizinin ortalamasını bul\n3-Dizinin ortalamasından büyük olan elemanları göster\n4-Dizinin elemanlarını başka bir diziye tersten yerleştir\n5-Dizinin en küçük ve en büyük elemanını bul\n6-Dizi elemanlarını küçükten büyüğe doğru sıralayarak aynı diziyi tekrardan oluştur");
        scanf("%d",&islemno);
        
        if (islemno==1)
        {
            printf("Toplam:%d\n",toplam);
        }
        else if (islemno==2)
        {
            printf("Ortalama:%f\n",ortalama);
        }
        else if (islemno==3)
        {
            for(int t=0;t<i;t++)
            {
                if(A[t]>ortalama)
                {
                    printf("A[%d]=%d ortalamadan büyüktür",t,A[t]);
                }
            }

        
        }
        else if (islemno==4)
        {
            int B[i],temp_i=i-1;
            for(int t=0;t<i;t++)
            {
            
            B[t]=A[temp_i];
                temp_i=temp_i-1;
            }
            for(int t=0;t<i;t++)
            {
                printf("B[%d]=%d\n",t,B[t]);
            }
        }
        else if (islemno==5)
        {
            int max=0,min=1000;
            for(int t=0;t<i;t++)
            {
                if(A[t]>max)
                    max=A[t];
                if(min>A[t])
                    min=A[t];
            }
            printf("En büyük eleman=%d\nEn kücük eleman=%d\n",max,min);
        }
        else if (islemno==6)
        {
            
        }
        
    }while(islemno!=-1);
   

    
    return 0;
}
