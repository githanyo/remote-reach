#include <stdio.h>
#include <string.h>
    struct teachers{
    char name[50];
    int age;
    float salary;
    };
int main(){
    //declaring structure variable one
    struct teachers T[3];
    //assigning values
    strcpy(T[0].name,"Obira");
    T[0].age= 35;
    T[0].salary=2000;
    //declaring structure variable two
    strcpy(T[1].name,"Raymond");
    T[1].age=49;
    T[1].salary=2000.00;
    //declaring structure variable three
    strcpy(T[2].name,"Darlington");
    T[2].age=28;
    T[2].salary=2000.11;
//printing teacher details
    printf("the teacher details are:\n");
        for(int i=0;i<3;i++){
        printf("Teacher %d",i+1);
        printf("\n\nName: %s",T[i].name);
        printf("\n\nAge: %d",T[i].age);
        printf("\n\nSalary: %f",T[i].salary);
    }



return 0;
}
