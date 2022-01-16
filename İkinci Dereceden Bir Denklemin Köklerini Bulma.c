//İkinci dereceden bir denklemin köklerini bulan C kodu
//  Created by Hande Erdal on 7.12.2021.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    // a≠0 olmak üzere klavyeden katsayıları girilen 𝐴𝑥2 + 𝐵𝑥 + 𝐶 = 0 ş𝑒𝑘𝑙𝑖𝑛𝑑𝑒 ikinci dereceden denklemin köklerini hesaplayan program.
    int a,b,c;
    float x1,x2,kokdelta;
    printf("a,b,c giriniz. a sıfıra eşit olamaz\n");
    scanf("%d%d%d",&a,&b,&c);
    if (a==0)
    {
        printf("Lütfen farklı bir a giriniz. a:\n");
        scanf("%d",&a);
    }
    float delta;
    delta=pow(b,2)-4*a*c;
    if (delta>0)
    {
        x1=(-b+sqrt(delta))/(2*a);
        x2=(-b-sqrt(delta))/(2*a);
        printf("x1=%f,x2=%f",x1,x2);
    }
    else if(delta<0)
    {
        printf("Reel kök yoktur");
    }
    else
    {
        x1=-b/2*a;
        x2=-b/2*a;
        printf("x1=x2=%f",x1);    }
    
    return 0;
}
