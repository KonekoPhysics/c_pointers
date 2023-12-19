#include <stdio.h>

/**
 * @brief ポインタを定義して、アドレスを表示するためのプログラム
 *
 * @return int
 */
int main() {
    int *a;
    // 16進数でポインタに格納されているアドレスを表示
    printf("%0x", a);
    return 0;
}