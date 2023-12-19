#include <stdio.h>

/**
 * @brief Σ(x_iy_i)を求めるプログラム
 *
 * @param x 配列のポインタ
 * @param y 配列のポインタ
 * @param n 要素数
 * @return int
 */
int add1(int *x, int *y, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum = sum + x[i] * y[i];
    }
    return sum;
}

/**
 * @brief Σ(x_iy_i)を求めるプログラム2
 *
 * @param x 配列（[2]は意味をなさない）
 * @param y 配列（[2]は意味をなさない）
 * @param n 要素数
 * @return int
 */
int add2(int x[2], int y[2], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum = sum + x[i] * y[i];
    }
    return sum;
}

int main() {
    int x[5] = {1, 2, 3, 4, 5};
    int y[5] = {6, 7, 8, 9, 10};
    printf("sum1 = %d\n", add1(x, y, 5));
    printf("sum2 = %d\n", add2(x, y, 5));
    return 0;
}