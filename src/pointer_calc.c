#include <stdio.h>

/**
 * @brief 配列の各要素のアドレスを16進数で表示するプログラム
 *
 * @return int
 */
int main() {
    int a[3] = {0, 1, 2};
    // ポインタ演算を用いて、アドレスを16進数で表示
    printf("%0x\n", a);
    printf("%0x\n", a + 1);
    printf("%0x\n", a + 2);

    // &演算子を用いて、アドレスを16進数で表示
    printf("%0x\n", &a[0]);
    printf("%0x\n", &a[1]);
    printf("%0x\n", &a[2]);
    return 0;
}