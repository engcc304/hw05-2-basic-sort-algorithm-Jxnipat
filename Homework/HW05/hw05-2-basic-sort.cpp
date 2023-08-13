/*
    จงเรียงลำดับเลขจากข้อมูลที่ผู้ใช้กรอก โดยเรียงจากมากไปน้อย (โดยใช้คำสั่ง if else หรือ else if เท่านั้น)
    
    Test case:
        Input[1] :
            6
        Input[2] :
            9
        Input[3] :
            1
    Output:
        9 6 1

    Test case:
        Input[1] :
            65
        Input[2] :
            91
        Input[3] :
            112
    Output:
        112 91 65
*/
#include <stdio.h>

int main() {
    int num1, num2, num3;

    // รับค่าจำนวนเต็ม 3 จำนวนจากผู้ใช้
    printf("Input[1]: ");
    scanf("%d", &num1);

    printf("Input[2]: ");
    scanf("%d", &num2);

    printf("Input[3]: ");
    scanf("%d", &num3);

    printf("Output: ");

    // ใช้ if-else เพื่อเรียงลำดับเลข
    if (num1 >= num2 && num1 >= num3) {
        printf("%d ", num1);
        if (num2 >= num3) {
            printf("%d %d", num2, num3);
        } else {
            printf("%d %d", num3, num2);
        }
    } else if (num2 >= num1 && num2 >= num3) {
        printf("%d ", num2);
        if (num1 >= num3) {
            printf("%d %d", num1, num3);
        } else {
            printf("%d %d", num3, num1);
        }
    } else {
        printf("%d ", num3);
        if (num1 >= num2) {
            printf("%d %d", num1, num2);
        } else {
            printf("%d %d", num2, num1);
        }
    }

    return 0;
}
