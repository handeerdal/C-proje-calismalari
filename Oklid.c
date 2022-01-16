//Oklid kurali hesabi (C kodu)
//  Created by Hande Erdal on 26.11.2021.
//

#include <stdio.h>
#include <math.h>
int main(int argc, const char * argv[]) {
    int a,p,k;
    float h,b,c;
    printf("p,k degerlerini giriniz");
    scanf("%d%d",&p,&k);
    a=p*k;
    h=pow(p*k,0.5);
    b=pow(a*k,0.5);
    c=pow(a*p,0.5);
    printf("h=%f,b=%f,c=%f",h,b,c);
    return 0;
}
