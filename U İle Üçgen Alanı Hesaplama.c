// U ile Üçgenin Alanını Hesaplama (C kodu)

//  Created by Hande Erdal on 26.11.2021.


#include <stdio.h>
#include <math.h>
#include <locale.h>


int main(int argc, const char * argv[])
{
    setlocale(LC_ALL, "Turkish");
    
    int a,b,c;
    float u,alan;
    printf("üçgenin kenarlarını giriniz.\n");
    scanf("%d %d %d",&a,&b,&c);
    u=(a+b+c)/2;
    alan=pow(u*(u-a)*(u-b)*(u-c),0.5);
    
    /*pow fonksiyonu yerine sqrt fonksiyonunu da kullanabilirsiniz. sqrt(alan) yazarsan direk kök alır
     alan=sqrt(u*(u-a)*(u-b)*(u-c));
    */
    
    printf("Alan = %f",alan);
    return 0;
}
