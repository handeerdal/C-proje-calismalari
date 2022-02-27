//
//  main.c
//  Girilen stringin baş harflerini büyük yapan c kodu
//
//  Created by Hande Erdal on 5.01.2022.
//

#include <stdio.h>

void buyukharfyapan(char A[])
{
    int k=0;
    if(A[0]>='a' && A[0]<='z')
        A[0]-=32;
    while(A[k]!='\0')
        k++;
    for(int i=0;i<k;i++)
    {
        while(A[i]==' ')
        {
            if(A[i+1]>=97 && A[i+1]<=122)
                A[i+1]-=32;
            break;
        }
        
    }
    puts(A);
}



int main(int argc, const char * argv[]) {
    char A[100];
    
    printf("Birşeyler giriniz\n");
    gets(A);
    buyukharfyapan(A);
    
    return 0;
}
