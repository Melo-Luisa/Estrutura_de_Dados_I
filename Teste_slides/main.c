#include <stdio.h>

int main() {
    int s = 0;
    int n = 3;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            s = s + 1;
        }
    }

    printf("O valor de s é: %d\n", s);

    return 0;
}