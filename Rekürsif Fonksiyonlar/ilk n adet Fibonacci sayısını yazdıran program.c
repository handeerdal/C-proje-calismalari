//
//  main.c
//  ilk n adet Fibonacci sayısını yazdıran program
//
//  Created by Hande Erdal on 28.02.2022.
//

int a=1,b=1,temp=0;

#include <stdio.h>

int fibonacci(int n){
    if(n==0)
        return 0;
    printf("%d\t",b);
    temp=a+b;
    a=b;
    b=temp;
    return fibonacci(n-1);
}

int main(int argc, const char * argv[]) {
    // deneme için n=10 olsun
    int n=10;
    printf("%d\t",a);
    fibonacci(n-1);
    return 0;
}
