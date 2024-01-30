#include <stdio.h>
int soma(int x, int y){ //não esquecer de declara qual o tipo de variável
    int z = x + y;
    //2º esse
    puts("****FUNCAO***");
    printf("&x = %p, x = %d\n", &x, x);
    printf("&y = %p, y = %d\n", &y, y);
    printf("&z = %p, z = %d\n", &z, z);

    return z;
}
int main(){

    int a = 10;
    int b = 20;
    int c;

    //1º esse
    puts("### Antes de chamar a funcao");
    printf("&a = %p, a = %d\n", &a, a);
    printf("&b = %p, b = %d\n", &b, b);
    printf("&c = %p, c = %d\n", &c, c);

    c = soma(a,b);
    //por ultimo, 3º esse
    puts("### DEPOIS de chamar a funcao");
    printf("&a = %p, a = %d\n", &a, a);
    printf("&b = %p, b = %d\n", &b, b);
    printf("&c = %p, c = %d\n", &c, c);

}