#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159265358979323846264338327

int main(int argc, char **argv){
    long n_points;
    double *list;
    float mu, sigma;
    long long i;
    FILE *out1;
    FILE *out2;
    double cont1 , cont12, cont123, cont1234, cont12345;
    
    n_points = atoi(argv[1]);
    mu = atof(argv[2]);
    sigma = atof(argv[3]);
    
    
    if(!(list=malloc(n_points * sizeof(double)))){
        fprintf(stderr, "Problema con la reserva de memoria\n");
        exit(1);
    }
    
    srand48(n_points);
    for(i=0;i<n_points;i++){
        
        if(datos[i]==1){
            cont1 = cont1 + 1;
            if (datos[i+1]) {
                cont12 = cont12 + 1;
                if (datos[i+2]) {
                    cont123 = cont123 + 1;
                    if (datos[i+3]) {
                        cont1234 = cont1234 +1;
                        if (datos[i+4]) {
                            cont12345 = cont12345 +1;
                        }
                    }
                }
            }
        }
        
    }
    
    if(!(out1 = fopen("cuenta.txt", "w+"))){
        fprintf(stderr, "Problema abriendo el archivo\n");
        exit(1);
    }
    fprintf(out1,"%f %f %f %f %f\n", cont1, cont12, cont123,cont1234,cont12345);
    for(i=0;i<n_points;i++){
        fprintf(out, "%f\n", list[i]);
    }
    
    fclose(out);
    
    return 0;
}
