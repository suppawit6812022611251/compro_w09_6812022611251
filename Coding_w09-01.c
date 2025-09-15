#include <stdio.h>

int main() {
    int start, stop;

    // วนรับค่าจากผู้ใช้จนกว่า start < stop
    while (1) {
        printf("start number: ");
        scanf("%d", &start);

        printf("stop number: ");
        scanf("%d", &stop);

        if (start < stop) {
            break; // ออกจากลูปเมื่อค่าถูกต้อง
        } else if (start == stop) {
            printf("Your Start number is equal to Stop number, please try again!\n\n");
        } else {
            printf("Your Start number is greater than Stop number, please try again!\n\n");
        }
    }

    // แสดงลำดับตัวเลขจาก start ถึง stop
    printf("start number is %d and stop number is %d\n", start, stop);
    printf("-------------\n");

    printf("sequence from start to stop: ");
    for (int i = start; i <= stop; i++) {
        printf("%d ", i);
    }

    printf("\nThank you\n");

    return 0;
}