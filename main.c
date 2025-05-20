#include <stdio.h>

int climbStairs(int n) {
    if(n<=3) return n;
    int i = 1, j = 2, k = 3, temp;
    while(k<=n) {
        temp = i + j;
        i = j;
        j = temp;
        k++;
    }
    return temp;
}

int main() {
    int n = 5;
    printf("Ways to climb %d stairs: %d\n", n, climbStairs(n));
    return 0;
}
