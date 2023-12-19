#include <stdio.h>

/**
 * @brief 足し算を行う関数
 *
 * @param a
 * @param b
 * @return int
 */
int add(int a, int b) { return a + b; }

/**
 * @brief 普通の関数を定義して、アドレスを表示するためのプログラム
 *
 * @return int
 */
int main() {
    // 16進数でアドレスを表示
    printf("%0x\n", add);
    // 16進数で計算結果を表示
    printf("%0x", add(1, 2));
    return 0;
}