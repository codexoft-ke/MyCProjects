#include<stdio.h>
int main() {
    int cars = 0;
    for (char i = 'A'; i <= 'Z'; i++) {
        for (char j = 'A'; j <= 'Z'; j++) {
            for (int k = 1; k <= 999; k++) {
                for (char final_letter = 'A'; final_letter <= 'Z'; final_letter++) {
                    cars++;
                }
            }
        }
    }
    printf("Kenya can register %d cars.\n", cars);
    return 0;
}
