#include <stdio.h>
#include <string.h>
//defining the structure
        struct student{
        char name[50];
        int age;
        float marks;
        };
int main(){

    printf("This program handles arrays and will lead to structures");
    printf("\n let's go!!\n");
    //code starts here
    int sdnt [4] = {10,20,30,40};
    printf("the fourth student number is: %d",sdnt[3]);
//declaring the structure
    struct student s1;
//assigning values to structure members
    strcpy(s1.name,"figo"); //assigning string to char array
    s1.age = 23;
    s1.marks =62.8934;
//displaying the structure
    printf("\n\nThe name of student one is: %s",s1.name);
    printf("\nHis age is: %d",s1.age);
    printf("\nmark is: %f",s1.marks);



return 0;
}
