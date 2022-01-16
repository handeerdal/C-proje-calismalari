
//  EKOK Hesaplama
//
//  Created by Hande Erdal on 24.12.2021.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a,b,c;
    printf("Ekokunu bulmak istediğiniz iki sayıyı girin\n");
    scanf("%d%d",&a,&b);
    c=1;
    while(1)
    {
        if(c%a==0 && c%b==0)
            break;
        else
            c++;
    }
    printf("Sayının EKOKU %d\n",c);
    return 0;
}
