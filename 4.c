#include <stdio.h>
#include <stdlib.h>

int main() {
    int number;
    int i = 0;
    int binary[100];
    scanf("%d", &number); // Ввод

    if (number < 0) {
        number = abs(number);
        printf("-"); // Если число отрицательное - приписываем минус в начале
    }

    while (number != 0) { // Алгоритм перевода в двоичную систему - цикличное деление на два и запись остатков
        binary[i] = number % 2;
        number /= 2;
        i++;
    }

    for (int j = i-1; j >= 0; j--) { // Вывод полученных остатков справа налево
        printf("%d", binary[j]);
    }
    return 0;
}