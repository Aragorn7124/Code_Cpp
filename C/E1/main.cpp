#include <stdio.h>
// 函数声明
void printPascalTriangle(int n);

int main() {
    int n;
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &n);
    printPascalTriangle(n);
    return 0;
}

// 打印杨辉三角的函数
void printPascalTriangle(int n) {
    int arr[n][n]; // 创建二维数组

    // 初始化杨辉三角的每一行
    for (int line = 0; line < n; line++) {
        // 每一行的开始数字是1
        for (int i = 0; i <= line; i++) {
            // 行首和行尾的数字是1
            if (line == i || i == 0)
                arr[line][i] = 1;
            else // 其他位置的数字是上一行的两个数字之和
                arr[line][i] = arr[line - 1][i - 1] + arr[line - 1][i];
            printf("%d ", arr[line][i]);
        }
        printf("\n");
    }
}
