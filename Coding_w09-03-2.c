#include <stdio.h>

int main() {
    int i = 1;

    do {
        if (i == 6) {  // เมื่อ i เท่ากับ 6
            i++;
            continue;
        }
        printf("%d ", i);  // แสดงค่า i
        i++;
    } while (i <= 10);  // ทำซ้ำจนกว่า i จะมากกว่า 10

    return 0;
}