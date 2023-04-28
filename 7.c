#include <stdio.h>

int main() {
    int i = 1;
    int amount, num;
    int zero = 0;
    int pos = 0;
    int neg = 0;
    scanf("%d", &amount);

    for (i = 1; i <= amount; i++) {
        scanf("%d", &num);
        if (num > 0) { // Положительное
            pos++;
        } else if (num < 0) {
            neg++; // Отрицательное
        } else {
            zero++; // Ноль
        }
    }
    printf("%d %d %d", zero, pos, neg);
    return 0;
}