#include <stdio.h>
#include <string.h>

int main() {
    int pos = 0, amount, num[amount];
    scanf("%d", &amount); // Кол-во чисел

    for (int i=0; i<amount; i++) { // Ввод
        scanf("%d", &num[i]);
        if (num[i] > 0) {
            pos++;
        }
    }
    printf("%d", pos);
    return 0;
}