
//  Alfabede olmayan karakterleri stringten çıkartma

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char A[100],i=0,j,k=0,B[100];
    printf("Bir şeyler giriniz.Yazdığınız stringten alfabade olmayan ifadeleri sileceğiz.\n");
    gets(A);
    
    while(A[i]!='\0')
        i++;
    for(j=0;j<i;j++){
        if(A[j] >= 'a' && A[j] <= 'z')
        {
            B[k]=A[j];
            k++;
        }
        else
            continue;
    }
    
    puts(B);
        
    return 0;
}
