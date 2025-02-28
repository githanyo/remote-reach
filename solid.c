#include <stdio.h>
#include <string.h>
    struct friends{
        char name[30];
        int num;
        float goal;
    };
    int main(){
            struct friends F[3];
            strcpy(F[0].name,"zebu\n");
            F[0].num=22;
            F[0].goal=5000.87;
            strcpy(F[1].name,"melo\n");
            F[1].num=21;
            F[1].goal=5000;
            strcpy(F[2].name,"figo\n");
            F[2].num=21;
            F[2].goal=5000;
        printf("Friend details: ");
        for(int i=0;i<3;i++){
                    printf("Friend: %d\n",i+1);
                    printf("His name is: %s\n",F[i].name);
                    printf("Age: %d\n",F[i].num);
                    printf("Money goal: $%.3f\n\n",F[i].goal);
        }

    return 0;}
