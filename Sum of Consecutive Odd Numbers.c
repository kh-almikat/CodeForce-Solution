#include <stdio.h>
 
int main() {
    int n;
    long int X, Y, sum;
    scanf("%d", &n);
 
    for (int i = 0; i < n; i++) {
        scanf("%ld %ld", &X, &Y);
        sum = 0;
 
        if (X > Y) {
            long int temp = X;
            X = Y;
            Y = temp;
        }
 
 
        for (long int j = X + 1; j < Y; j++) {
            if (j % 2 != 0)
                sum += j;
        }
 
        printf("%ld\n", sum);
    }
 
    return 0;
}
