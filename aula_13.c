#include <stdio.h>

/**EXEMPLO 1*/
int exemplo(){
    int v[5] = {0,1,2,33,10};
    for(int i = 0; i <5; i++){
        printf("&v[%d] = %p, v[%d] = %d\n", i, &v[i], i, v[i]);
        //aqui vai pegando os numero se baseando no array setado ali em cima
    }
    printf("&v[6] = %p, v[6] = %d\n", &v[6], v[6]); //estamos alocando lugar de memoria que não foi reservada, é lixo!
    return 0;
}

/*EXEMPLO 2*/
int main(){
    int i = 0;
    int v[5];

    for(i = 0; i <5; i++){
        scanf("%d", &v[i]);
    }
    for(i = 0; i <5; i++){
        printf(" &v[%d] = %p, v[%d] = %d\n", i ,&v[i], i, v[i]);
    }
    
    return 0;
}