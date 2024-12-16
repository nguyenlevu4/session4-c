#include <stdio.h>

int main() {
    int number;
    
     printf("Nhập vào một số nguyên: ");
    scanf("%d", &number);
    
    if (number > 0) {
        printf("Số bạn vừa nhập là số dương.\n");
    } else if (number < 0) {
        printf("Số bạn vừa nhập là số âm.\n");
    } else {
        printf("Số bạn vừa nhập là số 0.\n");
    }

    return 0;
}