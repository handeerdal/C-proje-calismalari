//  örnek bir m sayısı için binary kodu bulma. m değerini kullanıcıdan alabilirsiniz.
//  Created by Hande Erdal on 2.04.2022.
//

#include <stdio.h>
void binary(int a){
    if(a/2==0)
    {
        printf("%d",a%10);
    }
    else{
        binary(a/2);
        printf("%d",a%2);
    }
        
}


int main(int argc, const char * argv[]) {
    int m=120;
    binary(m);
    return 0;
}
