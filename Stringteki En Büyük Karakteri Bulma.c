
//  Stringteki En Büyük Karakteri Bulma
//
//  Created by Hande Erdal on 16.01.2022.
//

#include <stdio.h>
#include <string.h>

int main(){
    char str[100],max;
    int uzunluk=0,i=0;
    printf("Bir şeyler yazın\n;");
    gets(str);
    uzunluk=strlen(str);
    for(i=0;i<uzunluk;i++)
    {
        for(int j=0;j<uzunluk;j++)
        if(str[i]>str[i+1])
            max=str[i];
    }
    
    printf("Stringteki en büyük karakter %c dir",max);
    
    return 0;
}
