//  Address book with structs
//
//  Created by Hande Erdal on 13.04.2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    struct address{
        char street[20];
        int number;
        char city[20];
        char country[20];
        char zipCode[10];
    };
    
    
    struct addressBook{
        char name[10];
        char surname[10];
        char phoneNumber[20];
        struct address personalAdress;
        
    };

    int personNum;
    printf("How Many Information Will Be Kept?\n");
    scanf("%d",&personNum);
    struct addressBook *addressArr=(struct addressBook*)calloc(personNum, sizeof(struct addressBook));
    for(int i=0;i<personNum;i++)
    {
        printf("Please enter name:\n");
        scanf("%s",(addressArr+i)->name);
        printf("Please surname:\n");
        scanf("%s",(addressArr+i)->surname);
        printf("Please phone number:\n");
        scanf("%s",(addressArr+i)->phoneNumber);
        printf("Please enter street:\n");
        scanf("%s",(addressArr+i)->personalAdress.street);
        printf("Please enter apartment number:\n");
        scanf("%d",&(addressArr+i)->personalAdress.number);
        printf("Please enter city:\n");
        scanf("%s",(addressArr+i)->personalAdress.city);
        printf("Please enter country:\n");
        scanf("%s",(addressArr+i)->personalAdress.country);
        printf("Please enter zip code:\n");
        scanf("%s",(addressArr+i)->personalAdress.zipCode);
    }
    printf("Name\tSurname\tPhone Number\tAdress\t\n");
       printf("-------------------------------------------\n");
           for(int i=0; i<personNum; i++)
           {
               printf("%s \t %s \t %s \t %s %s %s %s",(addressArr+i)->name,(addressArr+i)->surname,(addressArr+i)->phoneNumber,(addressArr+i)->personalAdress.street,(addressArr+i)->personalAdress.city,(addressArr+i)->personalAdress.country,(addressArr+i)->personalAdress.zipCode);
               printf("\n");

           }
    return 0;
}
