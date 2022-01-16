//Bir stringin uzunluğunu strlen kullanmadan bulmak

//  Created by Hande Erdal on 16.01.2022.
//

#include <stdio.h>


int main() {

    int k = 0;
    char str[100];
    printf("stringi girin\n");
    gets(str);
    
    while(str[k]!='\0')
    {
        k++;
    }
    
    printf("%d uzunluğunda\n",k);
    
    return 0;
}
