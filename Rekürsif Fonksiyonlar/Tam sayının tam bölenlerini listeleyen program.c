//
//  main.c
//  Tam sayının tam bölenlerini listeleyen program
//
//  Created by Hande Erdal on 28.02.2022.
//

#include <stdio.h>

int tambolenlistele(int sayi,int temp){
    if (temp==0)
        return 0;
    else if(sayi%temp==0)
        printf("%d tam bölendir\n",temp);
    return tambolenlistele(sayi,temp-1);
}

int main(int argc, const char * argv[]) {
    int sayi,temp;
    printf("Bir sayı giriniz\n");
    scanf("%d",&sayi);
    temp=sayi;
    tambolenlistele(sayi,temp);
    return 0;
}
