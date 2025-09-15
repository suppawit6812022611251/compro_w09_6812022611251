#include <stdio.h>

int main() {
    int sum, p, x, y;    //กำหนดตัวแปร
    sum = 0;

    for (x = 1, y = 1; x * y <= 15; x++, y += 2) { //ลูป x เพิ่มทีละ 1, y เพิ่มทีละ 2
        p = x * y;  //คูณ x กับ y
        sum = sum + p;
        printf("%d * %d = %d\n", x, y, p); //แสดงผลการคูณ
    }

    printf("summation of x * y = %d\n", sum); //แสดงผลรวม
    return 0;
}