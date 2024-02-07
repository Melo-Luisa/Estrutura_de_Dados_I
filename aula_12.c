void troca(int *x, int *y){
    int aux = *x;
    *x = *y;
    *y = aux;
    puts("****FUNCAO***");
    printf("&x = %p, x = %p\n", &x, x);
    printf("&y = %p, y = %p\n", &y, y);
    printf("&aux = %p, aux = %d\n", &aux, aux);
	
}
int main(){

    int a = 10;
    int b = 20;
     
    puts("### Antes de chamar a funcao");
    printf("&a = %p, a = %d\n", &a, a);
    printf("&b = %p, b = %d\n", &b, b);
	troca(&a, &b);
    puts("### DEPOIS de chamar a funcao");
    printf("&a = %p, a = %d\n", &a, a);
    printf("&b = %p, b = %d\n", &b, b);
  
}


void func (int *px, int *py){
	px = py;
	*py = (*py) * (*px);
	*px = *px + 2;
	
}
int main(){
	int x, y;
	scanf("%d", &x);
	scanf("%d", &y);
	
	func(&x, &y);
	printf("x = %d, y = %d\n", x, y);
	return 0;

}