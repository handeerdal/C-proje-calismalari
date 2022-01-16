//N Sayısına Kadar Olan Sayılardan Armstrong Sayısı Olanları Listeleme
#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    int n,i,temp,kalan,toplam=0,basamaksayisi;
    
    printf("n sayısını giriniz\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        temp=i;
        while(temp!=0){
            kalan=temp%10;
            temp=temp/10;
            basamaksayisi++;
        }
        temp=i;
        
        while(temp!=0){
            kalan=temp%10;
            temp=temp/10;
            toplam=toplam+pow(kalan,basamaksayisi);
        }
        if(toplam==i)
            printf("%d armstrong\n",i);
        toplam=0;
        basamaksayisi=0;
    }
    return 0;
}
