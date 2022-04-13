//  Created by Hande Erdal on 12.04.2022.



//Programlama dersindeki öğrenciler için kullanılacak ‘student’ isimli struct yapısını, ‘number’, ‘name’, ‘surname’, ‘midtermGrade’ ve ‘finalGrade’ alanlarından oluşacak şekilde tanımlayınız.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    struct student {
        int number;
        char name[50];
        char surname[50];
        int midtermGrade;
        int finalGrade;
    };
    
    // Tanımladığınız bu yapıyı kullanarak 5 öğrenci için bir pointer dizişi oluşturun.
    
    struct student *person=(struct student*)calloc(5, sizeof(struct student));
    
    //5 öğrenci için tanımladığınız pointer dizisi üzerinden ilgili bilgileri döngü kullanarak kullanıcıdan alınız.
    
    for(int i=0;i<5;i++)
    {
        printf("Öğrenci numarasını girin\n");
        scanf("%d",&(person+i)->number);
        printf("Öğrenci adını girin\n");
        scanf("%s",(person+i)->name);
        printf("Öğrenci soyadını girin\n");
        scanf("%s",(person+i)->surname);
        printf("Öğrenci vize notunu girin\n");
        scanf("%d",&(person+i)->midtermGrade);
        printf("Öğrenci final notunu girin\n");
        scanf("%d",&(person+i)->finalGrade);
    }
    for(int i=0;i<5;i++)
    {
        printf("%d %s %s %d %d\n",(person+i)->number,(person+i)->name,(person+i)->surname,(person+i)->midtermGrade,(person+i)->finalGrade);
    }
    
    //5 öğrenciye ait vize ve final notu bilgilerini kullanarak ortalama yıl sonu notunu elde ediniz.
    for(int i=0;i<5;i++){
    float yılsonunotu=((person+i)->midtermGrade*40/100+(person+i)->finalGrade*60/100);
        printf("%d.öğrencinin yıl sonu notu : %.2f\n",i+1,yılsonunotu);
    }
    
    //Öğrenci listesinde isme göre arama yapın.
    char isim[50]="ayse";
    for(int i=0;i<5;i++)
    {
     if(strcmp(isim, (person+i)->name)==0)
         printf("Aradığınız isim listenin %d numaralı öğrencisi\n",(person+i)->number);
    }
        
        

    return 0;
}
