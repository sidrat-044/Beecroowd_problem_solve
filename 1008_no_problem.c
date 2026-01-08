#include <stdio.h>

int main() {
    int id, hours;
    double rate;

    scanf("%d %d %lf", &id, &hours, &rate);

    printf("NUMBER = %d\n", id);
    printf("SALARY = U$ %.2lf\n", hours * rate);
    return 0;
}
