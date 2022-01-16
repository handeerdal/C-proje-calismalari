//Bir stringin tersini alma
//
//  Created by Hande Erdal on 16.01.2022.


//KARAKTER DİZİSİNİN TERSİ

#include <stdio.h>

int main ()
{
    int k=0,c=0;
    char s[100],t[100];
    printf("bir şeyler yazın \n");
    gets(s);
    
    while(s[k]!='\0')
    {
        k++;
    }
    
    int tempk=k;
    k=k-1;
    for(c=0;c<tempk;c++)
    {
        t[c]=s[k];
        k--;
    }
    puts(t);

    
    
}

