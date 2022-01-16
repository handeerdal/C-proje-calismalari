//Sayının ondalıklı kısmını bulma
//  Created by Hande Erdal on 7.12.2021.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    float sayi,ondaliklikisim;
    int tamkisim;
    printf("Bir sayi giriniz.\n");
    scanf("%f",&sayi);
    
    tamkisim=sayi;
    ondaliklikisim=sayi-tamkisim;
    printf("Tam kısım : %d \nOndalıklı kısım: %f\n",tamkisim,ondaliklikisim);
    return 0;
}
