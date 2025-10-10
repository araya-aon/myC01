// รับค่าชื่อ-สกุล อายุ เงินเดือน

#include <stdio.h>
#define showline printf("--------------------------------------\n");

int main (){
    char fullname[50]; //%s, %s[^\n]
    int age; // %d
    float salary; // %f

        showline
        printf("    Profile Information \n");
        showline
            printf("Enter your name : ");
            scanf("%s[^\n]",&fullname);
            printf("Enter your age : ");
            scanf("%d",&age);
            printf("Enter your salary : ");
            scanf("%f",&salary);
            showline
                printf("Hello %s\n",fullname);
                printf("You are %d years old. \n",age);
                printf("Your salary is %.2f Bath.\n",salary);
                showline

    return 0;
}