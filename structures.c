#include <stdio.h>
#include <string.h>
struct student{
        char name [50];
        char email[45];
        int phone;
        char reg_no[50];
        float marks;

        
    }student1;
int main(){
    
    printf("Enter you name: ");
    scanf("%s",&student1.name);

    printf("Enter your email: ");
    scanf("%s",&student1.email);

    printf("Enter your phone number: ");
    scanf("%d",&student1.phone);

    printf("Enter your registration number: ");
    scanf("%d\n",&student1.reg_no);


    printf("-----student Details-----\n");
    printf("name:%s\n",student1.name);
    printf("email:%s\n",student1.email);
    printf("phone number:%d\n",student1.phone);
    printf("registration number:%d\n",student1.reg_no);

}