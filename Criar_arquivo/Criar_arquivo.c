#include <stdio.h>
#include <time.h>
#include <stdlib.h>


main(){

    srand (time(NULL));

    int n;
    FILE *ordenado, *invertido, *randomico;
    int tam, x;
    char nomeArquivo[255];
    printf("Informe o tamanho do arquivo ");
    scanf("%d", &tam);
    sprintf(nomeArquivo, "O%d.txt", tam);
    ordenado = fopen(nomeArquivo, "w");
    for (x=1;x<=tam;x++){
    fprintf(ordenado, "%d\n", x);
    }
    fclose(ordenado);

    sprintf(nomeArquivo, "I%d.txt", tam);
    invertido = fopen(nomeArquivo, "w");
    for (x=tam;x>=1;x--){
    fprintf(invertido, "%d\n", x);
    }
    fclose(invertido);

    sprintf(nomeArquivo, "A%d.txt", tam);
    randomico = fopen(nomeArquivo, "w");
    for (x=tam;x>=1;x--){
    n= rand()%tam+1;
    fprintf(randomico, "%d\n", n);
    }
    fclose(randomico);
}
