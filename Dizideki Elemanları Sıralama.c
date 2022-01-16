//  Dizideki Elemanları Sıralayarak Bastırma
//  Created by Hande Erdal on 5.01.2022.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int temp;
    int A[12]={1,6,9,2,3,5,6,7,11,22,16,67};
    for(int i=0;i<12;i++)
        for(int j=0;j<12;j++)
        {
            if(A[i]<A[j])
            {
                temp=A[i];
                A[i]=A[j];
                A[j]=temp;
            }
                
        }
    for(int i=0;i<12;i++)
        printf("%4d",A[i]);
    

    return 0;
}
