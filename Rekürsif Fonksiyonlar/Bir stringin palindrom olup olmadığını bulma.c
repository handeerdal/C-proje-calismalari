//  palindrom string pointer recursive
//
//  Created by Hande Erdal on 2.04.2022.
//

#include <stdio.h>
#include <string.h>


int palindrommu(char A[],int uzunluk){
    static int i=0;
    if(i==uzunluk||i==uzunluk-1)
        return 1;
    if(A[i]==A[uzunluk])
    {
        i++;
        palindrommu(A, uzunluk-1);
    }
    else
        return 0;
}

int main(int argc, const char * argv[]) {
    char A[100];
    int uzunluk,b;
    printf("Bir şeyler yaz\n");
    gets(A);
    uzunluk=strlen(A)-1;
    b=palindrommu(A,uzunluk);
    if(b==1)
        printf("palindrom\n");
    else
        printf("palindrom değil\n");
    return 0;
}
