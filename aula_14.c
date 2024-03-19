#include <stdio.h>


/*Conseguimos mostrar com o conteudo em C com a manipulação do indice */
int main(){
    int v[5] = {10,5,4,16,1};
    printf("&v = %p, v = %p\n", &v, v );

    for(int i = 0; i < 5; i++){
        printf("&v[%d] = %p, v[%d] = %d\n", i, &v[i], i, v[i]); 
    }
    return 0;
}