// have parameter , has return
#include <stdio.h>

double num1 = 555; // Global
double calSquareAreare(double num1, double num2);

double sumNumber(double num1, double num2){ // parameter ถือว่าเป็นตวแปรแบบ Local
    printf("%.2lf\n", num1);
    return num1 + num2;
}

int main(){
    double area;
    printf("%.2lf\n", num1);
    printf("%.2lf\n", sumNumber(10, 20));
    printf("%.2lf\n", sumNumber(1000, 20000));
    printf("%.2lf\n", calSquareAreare(10, 20));

    area = calSquareAreare(10, 20);
    printf("%.2lf\n", area);

    return 0;
}

double calSquareAreare(double num1, double num2){
    printf("%.2lf\n", num1);
    return num1 * num2;
}