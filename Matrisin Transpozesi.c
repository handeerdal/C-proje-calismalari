
//  Matrisin Transpozesi
//
//  Created by Hande Erdal on 16.01.2022.
//

#include <stdio.h>
int main(){
   int n;
    printf("A[n][n] dizisi için n sayısını girin\n");
    scanf("%d",&n);
    int A[n][n],B[n][n];
    printf("Dizinin elemanlarını doldurun\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            scanf("%d",&A[i][j]);
    }
    
    printf("Matrisin Transpozesi\n");
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {B[i][j]=A[j][i];
            printf("%4d",B[i][j]);}
        printf("\n");
    }
    
}
