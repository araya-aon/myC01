//Global-Local Variable
#include<stdio.h>

int dataA = 100; // Global Variable ใช้ที่ไหนก็ได้
const int detaE = 5050; //  Constant Variable (ค่าคงที่) Global Variable 
void showData (){
    int dataB = 555; // Local Variable ใช้ได้เฉพาะใน Code Block นั้นๆ เท่านั้น

    printf("DataA = %d\n",dataA);
    printf("DataB = %d\n",dataB);
    // printf("DataC = %d\n",dataC); Error
    // printf("DataD = %d\n",dataD); Error

}
int main(){
    int dataC = 999; // Local Variable ใช้ได้เฉพาะใน Code Block นั้นๆ เท่านั้น
    const int dataD = 1010; // Constant Variable (ค่าคงที่) Local Variable 
    // dataD = 2020; Error

    printf("DataA = %d\n",dataA);
    printf("DataC = %d\n",dataC);
    printf("DataD = %d\n",dataD);
    // printf("DataB = %d\n",dataB); Error
    return 0;
}