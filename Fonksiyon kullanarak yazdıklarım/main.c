//
//  main.c
//  Girilen kullanıcı adı ve şifreyi kontrol etme
//
//  Created by Hande Erdal on 13.04.2022.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char sistemdekiAd[20]="admin";
    char sistemdekiParola[20]="admin123";
    char girilenAd[20];
    char girilenParola[20];
    printf("Kullanıcı adı ve şifrenizi giriniz\n");
    scanf("%s%s",girilenAd,girilenParola);
    puts(girilenAd);
    puts(girilenParola);
    int nameTrue=strcmp(sistemdekiAd, girilenAd);
    int passTrue=strcmp(sistemdekiParola, girilenParola);
    if(nameTrue==0 && passTrue==0)
        printf("Hoşgeldiniz\n");
    else if(nameTrue==0 && passTrue!=0)
        printf("Parolanız yanlış\n");
    else if(nameTrue!=0 && passTrue==0)
        printf("Kullanıcı adınız yanlış\n");
    else
        printf("Giriş bilgileriniz yanlış\n");
        
    
    return 0;
}
