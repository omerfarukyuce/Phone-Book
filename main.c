#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "header.h"
#include "menu.h"
#include "phoneadd.h"
#include "phonelist.h"
#include "phonesearch.h"

int main()
{
    int choice=0;
    char searchName[20];
    int searchResult=0;
    menu();
    do{
     printf("\n\n Enter your choice: ");
     scanf("%d",&choice);
     switch (choice){
        case 1: if(phoneAdd() == 0){
                printf("\nPhone number added successfully\n");
                }else{
                printf("\nAn error occurred while adding the phone number.\n");
                }
                break;
        case 2:if(phoneList() == 0){
                printf("\nPhone number listed successfully\n");
                }else{
                printf("\nAn error occurred while listing the phone number.\n");
                }
                break;
        case 3:printf("Enter the name to be searched(max 20 character):");
                scanf("%s",&searchName);
                searchResult=phoneSearch(searchName);
                if(searchName == 0){
                    printf("\nThe requested record was not found.");
                }else{
                    printf("Total %d record(s) found",searchResult);
                }
                break;
        case 4:printf("Exiting the program...");
            return 0;
            break;
        default:printf("\nPlease Enter a number between 1-4."); 
        }

    }while(choice !=4);
    return 0;
}
