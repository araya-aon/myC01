//เขียนโปรแกรมแสดงข้อความ IoT-SAU
//แสดงผลการคำนวณ 2 ยกกำลัง 500
// " " double quote , ' ' single quote , # hash, / slash , \ back slash
// { } curly bracket, [ ] square bracket, ( ) round bracket, < > angle bracket
// : colon, ; semicolon, ` backtick (ALT+9+6), | pipe , & ampersand

#include <stdio.h> // หรือ "stdio.h"
#include "math.h"

// กำหนดค่าคงที่ คือ การสร้างตัวแทนเพื่อมาเก็บข้อมูลใดๆแล้วโดยที่ไม่สามารถเปลี่ยนค่าข้อมูลนั้นได้ 
// และสามารถเอาตัวแทนที่สร้างไปใช้ในโปรแกรมได้
#define showline printf("----------------------------------\n");
#define smile "^____^ 555"
int main(){
    showline
    printf("IoT-SAU\n");
    showline
    showline
    printf("%lf\n", pow(2, 10));
    printf("%s\n", smile);

    return 0;
}