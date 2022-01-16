/*Soru: Klavyeden girilen N X N elemanlı A ve B matrisleri için aşağıdaki işlemleri gerçekleştiren programın kodunu yazınız. Gerçekleştirilecek işlem klavyeden girilerek seçilecek ve klavyeden -1 girilene kadar her işlemden sonra yeni bir işlem için kullanıcıdan giriş yapması istenecek.
 
 1-İki Matrisi Topla
 2- Transpozesini Al ( A Matrisi için)
 3-İki Matrisi Çarp
 4- Simetrik Kontrolü yap ( A Matrisi için)
 5-Matrisin Tersini Al ( A Matrisi için)*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int N,elemanA,elemanB,islemno;
    printf("N X N lik bir matris için N sayısını giriniz.\n");
    scanf("%d",&N);
    int A[N][N],B[N][N],C[N][N],D[N][N],E[N][N],F[N][N];
    
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            printf("A matrisi için %d.satırın elemanlarını giriniz.\n",i);
            scanf("%d",&elemanA);
            A[i][j]=elemanA;
        }
    }
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            printf("B matrisi için %d.satırın elemanlarını giriniz.\n",i);
            scanf("%d",&elemanB);
            B[i][j]=elemanB;
        }
    }
    do{
        printf("Klavyeden işlem no giriniz.\n1-İki Matrisi Topla\n2-Transpozesini Al ( A Matrisi için)\n3-İki Matrisi Çarp\n4-Simetrik Kontrolü yap ( A Matrisi için)\n5-Matrisin Tersini Al ( A Matrisi için)");
    scanf("%d",&islemno);
        if (islemno==1)
        {
            for(int i=0;i<N;i++)
            {
                for(int j=0;j<N;j++)
                {
                    C[i][j]=A[i][j]+B[i][j];
                }
            }
            for(int i=0;i<N;i++)
            {
                printf("\n");
                for(int j=0;j<N;j++)
                {
                    printf("Toplam:%d\t",C[i][j]);
                }
            }
        }
        if(islemno==2)
        {
            for(int i=0;i<N;i++)
            {
                for(int j=0;j<N;j++)
                {
                    E[i][j]=A[i][j];
                    E[i][j]=B[j][i];
                    printf("A[%d][%d]=%d\n",i,j,E[i][j]);
                }
            }
        }
        if(islemno==3)
        {
            for(int i=0;i<N;i++)
            {
                for(int j=0;j<N;j++)
                {
                    D[i][j]=A[i][j]*B[i][j];
                    printf("Çarpım[%d][%d]=%d\n",i,j,D[i][j]);
                }
            }
            
        }
        if(islemno==4)
        {
            int simetri=1;
            for(int i=0;i<N;i++)
            {
                for(int j=0;j<N;j++)
                {
                    if(A[i][j]!=A[j][i])
                    {
                        simetri=0;
                        break;
                    }
                    else
                    {
                        simetri=1;
                        printf("A[%d][%d] simetriktir\n",i,j);
                        
                    }
                }
            }
        }
        if(islemno==5)
        {
            for(int i=0;i<N;i++)
            {
                for(int j=0;j<N;j++)
                {
                    F[i][j]=A[j][i];
                    printf("F[%d][%d]=%d\n",i,j,F[i][j]);
                }
        }
        }
    }while(islemno!=-1);
    
}
    
