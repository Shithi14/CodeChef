
#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int N, X, D; // Total number of buns, buns required per day per person, and days to survive after food is exhausted
        scanf("%d %d %d", &N, &X, &D);

        int required_buns = X * D; // Total buns required for D days
        if (required_buns <= N) {
            printf("%d\n", D); // There are enough buns to last D days
        } else {
            int remaining_days = N / X; // Days before food supply is exhausted
            printf("%d\n", remaining_days + D);
        }
    }

    return 0;
}
