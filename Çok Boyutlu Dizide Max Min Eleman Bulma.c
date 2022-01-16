//  Çok Boyutlu Dizide Min Ve Max Değerleri Bulma

//  Created by Hande Erdal on 16.01.2022.
//


#include <stdio.h>


int main() {
    int a,b;
    printf("Kaça kaçlık dizi istiyon\n");
    scanf("%d%d",&a,&b);
    int M[a][b];
    printf("değerleri atayın.\n");
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
            scanf("%d",&M[i][j]);
    }
   
    int min=1110,max=0;
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
         if(M[i][j]<min)
             min=M[i][j];
            if(M[i][j]>max)
            max=M[i][j];
        }
        
    }
    printf("max=%d,min=%d\n",max,min);
    
    return 0;
}
