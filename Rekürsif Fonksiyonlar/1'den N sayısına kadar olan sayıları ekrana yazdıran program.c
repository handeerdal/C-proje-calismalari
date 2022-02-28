
//  1'den N sayısına kadar olan sayıları ekrana yazdıran program
//
//  Created by Hande Erdal on 27.02.2022.
//

#include <stdio.h>
int ekranabas(int);

int main(int argc, const char * argv[]) {
    // deneme olarak n=10 olsun
    int n=10;
    ekranabas(n);
    return 0;
}

int ekranabas(int n){
    if(n==0)
        return 0;
    ekranabas(n-1);
    printf("%d\n",n);
    return 0;
}
