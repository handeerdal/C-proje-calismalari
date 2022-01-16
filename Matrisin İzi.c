
//  Matrisin İzini Hesaplama
//
//  Created by Hande Erdal on 16.01.2022.
//


#include <stdio.h>
int main(){
   int n,toplam=0;
    printf("n sayısını girin\n");
    scanf("%d",&n);
    int A[n][n];
    printf("A[n][n] matrisinin elemanlarını girin\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            scanf("%d",&A[i][j]);
    }
    
    for(int i=0;i<n;i++)
    {
        toplam=toplam+A[i][i];
    }
    printf("%d matrisin izidir\n",toplam);
    
    
    return 0;
}

