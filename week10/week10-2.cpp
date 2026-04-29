//week10-2
#include <stdio.h>
int main() {
    // 初始化陣列，由大到小排序
    int a[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

    // 1. 排序前：印出陣列裡的數字
    for (int k = 0; k < 10; k++) {
        printf("%d ", a[k]);
    }
    printf("\n"); // 換行

    // 2. 選擇排序核心邏輯
    for (int i = 0; i < 10; i++) { // 左邊指標 i
        for (int j = i + 1; j < 10; j++) { // 右邊指標 j (從 i+1 開始)
            // 如果左邊比右邊大，就進行交換 (遞增排序)
            if (a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // 3. 排序後：印出陣列裡的數字
    for (int k = 0; k < 10; k++) {
        printf("%d ", a[k]);
    }
    printf("\n"); // 換行

    return 0;
}
