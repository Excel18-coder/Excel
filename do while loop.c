#include <stdio.h>
int main(){
    int a=0,b=0;

    printf("The output of while loop: ");
    while(a<5){
        a++;
        printf("a:%d\n",a);
    }
    printf("THe output of dowhile loop: ");
    do{
        b++;
        printf("b:%d\n",b);
    

      } while(b<5);
}