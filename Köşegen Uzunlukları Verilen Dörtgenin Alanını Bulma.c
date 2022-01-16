//  Köşegenleri girilen dörtgenin alanı
//
//  Created by Hande Erdal on 26.11.2021.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    int f,e;
    const float pi=3.14;
    float alan,aci;
    printf("Köşegenleri ve açı ölçüsünü giriniz.\n");
    scanf("%d %d %f",&e,&f,&aci);
    aci= aci*pi/180;
    alan= 0.5*f*e*sin(aci);
    printf("Alan=%f",alan);
    
    return 0;
}
