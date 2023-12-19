#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int total_points = 100000000;
    int inside_circle = 0;

    for (int i = 0; i < total_points; ++i) {
        double x = (double)rand() / RAND_MAX;
        double y = (double)rand() / RAND_MAX;

        if (x * x + y * y <= 1.0) {
            inside_circle++;
        }

        if (i > 9850000) {
            double pi_estimate = (double)inside_circle / i * 4;
            printf("Iteration: %d     , Pi Estimate: %lf\n", i, pi_estimate);
        }
    }

    double pi_estimate = (double)inside_circle / total_points * 4;

    printf("\n\n\n\n\nEstimated value of pi: %f\n\n\n\n\n\n", pi_estimate);
    getchar();

    return 0;
}
