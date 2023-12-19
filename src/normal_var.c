#include <stdio.h>

/**
 * @brief 普通の変数を定義して、アドレスを表示するためのプログラム
 *
 * @return int
 */
int main() {
    int a;
    // 16進数でアドレスを表示
    printf("%0x", &a);
    return 0;
}