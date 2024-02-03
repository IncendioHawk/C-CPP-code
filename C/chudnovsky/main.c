#include <stdio.h>
#include <math.h>

long double sum(int start, int end, long double (*function)(int));
long double sumChudnovsky(int start, int end);
long double chudnovsky(int n);
int factorial(int n);

int main() {
    printf("Pi: %Lf\n", sumChudnovsky(0, 1));
}

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

long double sum(int start, int end, long double (*function)(int)) {
    long double sum = 0;
    for (int i = start; i <= end; i++) {
    sum += function(i);
    }
    return sum;
}

long double chudnovsky(int k) {
    return (((factorial(6 * k)) * (545140134 * k + 13591409)) / (factorial(3 * k) * powl(factorial(k), 3) * powl(-262537412640768000, k)));
}

long double sumChudnovsky(int start, int end) {
    return (426880 * sqrtl(10005)) / sum(start, end, (long double (*)(int))chudnovsky);
}
