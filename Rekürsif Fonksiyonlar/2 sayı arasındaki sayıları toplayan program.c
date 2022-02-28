//
//  main.c
//  2 sayı arasındaki sayıları toplayan program
//
//  Created by Hande Erdal on 28.02.2022.
//

#include <stdio.h>

int topla(int sayi1,int sayi2){
    if(sayi1==sayi2)
        return sayi2;
    return sayi1+topla(sayi1+1,sayi2);
}

int main(int argc, const char * argv[]) {
    int sayi1,sayi2,temp=0;
    printf("2 sayi giriniz.\n");
    scanf("%d%d",&sayi1,&sayi2);
    if(sayi1>sayi2){
        temp=sayi2;
        sayi2=sayi1;
        sayi1=temp;
    }//burada ilk olarak küçük sayı alınmasını sağladım.
    printf("%d sayıların toplamlarıdır\n",topla(sayi1,sayi2));
    return 0;
}
