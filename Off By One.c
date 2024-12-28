
#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    int result = A + B;
    // Append 11 to the result
    result = result * 100 + 11;

    printf("%d\n", result);

    return 0;
}
