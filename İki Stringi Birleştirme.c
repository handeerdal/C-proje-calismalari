//İki stringi birleştirme
//  Created by Hande Erdal on 16.01.2022.
//

#include <stdio.h>
#include <string.h>

int main()
{
    int k=0,l=0,i,j=0;
    char str1[100],str2[100],str3[200];
    
    printf("1.stringi giriniz.");
    gets(str1);
    printf("2.stringi giriniz.");
    gets(str2);
    k=strlen(str1);
    l=strlen(str2);
    
    for(i=0;i<k;i++)
    {
    str3[i]=str1[i];
    }
    for(i;i<k+l;i++)
    {
    str3[i]=str2[j];
    j++;
    }
           
    puts(str3);
    
}
