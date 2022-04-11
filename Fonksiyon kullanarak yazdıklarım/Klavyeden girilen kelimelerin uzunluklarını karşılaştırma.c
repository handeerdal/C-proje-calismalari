
// Klavyeden girilen iki kelimenin aynı olup olmadığını aynı değillerse hangisinin kelime olarak daha uzun olduğunu belirten program kodunu yazınız.
//  Created by Hande Erdal on 3.04.2022.
//

#include <stdio.h>
void aynimi(int uzunluk,char *ptr1,char *ptr2)
{
    {
        for(int j=0;j<uzunluk;j++){
            if(ptr1[j]!=ptr2[j])
            {
                printf("uzunluklar aynı ama kelimeler başka\n");
                break;
            }
            else if(j==uzunluk-1)
                printf("AYNI KELİMELER\n");
        }
}
}
int uzunlukbul(char *karakter){
    int uzunluk=0,i=0;
    while(karakter[i]!='\0'){
        uzunluk++;
        i++;}
    return uzunluk;
}

int main(int argc, const char * argv[]) {
    char A[100],B[100];
    int uzunluka=0,uzunlukb=0;
    printf("1.kelimeyi girin\n");
    gets(A);
    printf("2.kelimeyi girin\n");
    gets(B);
    char *ptr1,*ptr2;
    ptr1=A;
    ptr2=B;
    uzunluka=uzunlukbul(ptr1);
    uzunlukb=uzunlukbul(ptr2);
    if(uzunluka==uzunlukb)
        aynimi(uzunluka, ptr1, ptr2);
   
    else
        printf("kelimeler başka ve farklı uzunlukta\n");
    return 0;
}
