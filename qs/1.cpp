// WAP to calculate SI, given principal = 10k, rate = 5%, time = 5yrs
# include <stdio.h>


int main() {
    float prin = 1e4;
    float rate = 5;
    float time = 5;
    float si   = (prin*rate*time)/100;

    printf("Given that the principal is %d, rate is %d%% over %dyrs, the SI produced is %d", (int)prin, (int)rate, (int)time, (int)si);

    printf("\n");
}

