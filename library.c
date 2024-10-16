/*
A library program
NAME:BARAKA EXCEL
REG NO:CT102/G/21404/24
*/
#include <stdio.h>
int main(){
    int book_ID,due_date,return_date,days_overdue,charges;
     printf("Enter the book ID: ");
     scanf("%d",&book_ID);

     printf("Enter the due date: ");
     scanf("%d",&due_date);

     printf("Enter the return date: ");
     scanf("%d",&return_date);

     //calculating the days overdue
     days_overdue = return_date - due_date;

     printf("days overdue is %d \n",days_overdue);

     if(days_overdue<=7){
        charges = days_overdue*20;

        printf("The amount charged is %d",charges);
     }
     else
     {
        charges = days_overdue*50;

        if(days_overdue =8<15){
            printf("The amount charged is %d",charges);
        }
         
         else{
            charges = days_overdue*100;
            printf("The charge overdue is %d",charges);
         }
     }
     
    
    


}