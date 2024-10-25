#include <stdio.h>

int main() {
    int i;
    double sum = 0.0;

    for (i = 1; i <= 100; i++) {
        sum += 1.0 / (i * i);
    }

    printf("The sum of the series is: %.6f\n", sum);

    return 0;
}