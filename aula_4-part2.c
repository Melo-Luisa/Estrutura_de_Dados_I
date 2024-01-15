#include <stdio.h>

int main(){
    float z = 2.5;
    float *fp;
    printf("&z = %p, z = %f\n", &z, z);
    printf("&fp = %p, fp = %p\n\n", &fp, fp);
    
    fp = &z;
    
    printf("*&z = %f\n", *&z); //1º Passo: *[&z] → *(5000) → 2.5 (Caba sendo o próprio z)
    printf("*fp = %f\n", *fp); // *fp → *(&z) → *(5000) → 2.5;
    printf("**&fp = %f\n", **&fp); //**&fp → **(&fp) → **(5004) → *(*5004) → *(5000) → 2.5

}