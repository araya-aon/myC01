//preprocess directive
#include <stdio.h>
#include <math.h>
#define ShowSenPa printf("----------------------------------\n");
#define smile "^_^"

//global declaration  
int number = 555;
void showHi();
void showHey (){ //user-defined function
    printf("Hey\n");
}
int main(){ //main function
    ShowSenPa
    printf("Welcome to SAU\n%s", smile);
    ShowSenPa
    showHey();
    showHi();

    return 0;
}   

void showHi(){  //user-defined function
    printf("Hi\n");
}