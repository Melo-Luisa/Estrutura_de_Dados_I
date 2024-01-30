//exemplo de passagem por 1 referência
int soma(int x, int y, int *z){
	*z = x + y;

    puts("****FUNCAO***");
    printf("&x = %p, x = %d\n", &x, x);
    printf("&y = %p, y = %d\n", &y, y);
    printf("&z = %p, z = %p\n", &z, z);
}

int main(){
	int a = 10;
	int b = 20;
	int c;

    puts("### Antes de chamar a funcao");
    printf("&a = %p, a = %d\n", &a, a);
    printf("&b = %p, b = %d\n", &b, b);
    printf("&c = %p, c = %d\n", &c, c);

	soma(a,b,&c);
    puts("### DEPOIS de chamar a funcao");
    printf("&a = %p, a = %d\n", &a, a);
    printf("&b = %p, b = %d\n", &b, b);
    printf("&c = %p, c = %d\n", &c, c);
}

//exemplo de passagem por 2 referências

int soma_e_sub(int x, int y, int *z, int *w){
	*z = x - y;
    *w = x + y;
    puts("****FUNCAO***");
    printf("&x = %p, x = %d\n", &x, x);
    printf("&y = %p, y = %d\n", &y, y);
    printf("&z = %p, z = %p\n", &z, z);
    printf("&w = %p, w = %p\n", &w, w);
}

int main(){
	int a = 10;
	int b = 20;
	int c, d;

    puts("### Antes de chamar a funcao");
    printf("&a = %p, a = %d\n", &a, a);
    printf("&b = %p, b = %d\n", &b, b);
    printf("&c = %p, c = %d\n", &c, c);
    printf("&d = %p, d = %d\n", &d, d);
	soma_e_sub(a,b,&c, &d);
    puts("### DEPOIS de chamar a funcao");
    printf("&a = %p, a = %d\n", &a, a);
    printf("&b = %p, b = %d\n", &b, b);
    printf("&c = %p, c = %d\n", &c, c);
    printf("&d = %p, d = %d\n", &d, d);
}