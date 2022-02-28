//  Floyd üçgeni
//
//  Created by Hande Erdal on 28.02.2022.
//

#include <stdio.h>

int temp=0;

int floydtriangle(int n,int temp){
    if(temp==0)
        return 0;
    if(n==1){
        printf("1");
        printf("\n");
        n=temp;
        
       return floydtriangle(n-1,temp-1);
    }
    else if(n%2==0)
        printf("0");
    else if(n%2!=0)
        printf("1");
   return floydtriangle(n-1,temp);
}
int main(){
    int n;
    printf("n satırlı floyd üçgeni için sayısını girin\n");
    scanf("%d",&n);
    temp=n;
    floydtriangle(n,temp);
}
