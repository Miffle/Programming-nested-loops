#include <stdio.h>
#include <math.h>

int main() {
    double x, n, m, S1, S2, xn, xk, y, k, j, dx, z;
    m = 10;
    printf("Vvedite nachalniy x: ");
    scanf("%lf", &xn);
    //xn = 3;
    xk = 8;
    n = 15;
    z = 0;
    S2 = 0;
    dx = (xk-xn)/(n-1);
    for (j = 1; j <= m; j++) {
        S2 = S2 + (pow(j, 3));
    }
    for(x=xn;x<=xk;x+=dx) {
        S1 = 1;
        for (k = 1; k <= m; k++) {
            S1 *= (x + k);
        }
        y = 2 * pow(x, 2) + S1 + x * S2 + 2;

        z++;
        printf("%1.0f y(%1.3f) = %1.3f \n",z, x, y);
    }

}
