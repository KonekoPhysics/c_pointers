#include <stdio.h>

/**
 * @brief 配列とポインタはおともだちです
 *
 * @return int
 */
int main() {
    // 配列を定義
    int a[3] = {0, 1, 2};
    // ポインタを定義
    int *b;
    // ポインタbが配列aを指すようにする
    b = a;
    printf("%d\n", a[2]);
    printf("%d", b[2]);
    return 0;
}