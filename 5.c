#include <stdio.h>

int main() {
    int n, cnt, sum = 0;
    scanf("%d", &n); // Ввод
    while (n != 0) {
        cnt++;
        sum = sum+n;
        scanf("%d", &n);
    }
    printf("%f\n", ((sum+0.0)/cnt)); // Среднее арифметическое = Сумма всех чисел : Кол-во всех чисел
}