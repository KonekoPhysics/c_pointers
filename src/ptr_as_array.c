#include <stdio.h>

/**
 * @brief Segmentation faultが起こることを確認しよう。
 *
 * @return int
 */
int main() {
    // a[3]ではなく*aにしてみた
    int *a = {1, 0, 2};
    printf("%d", a[2]);
    return 0;
}