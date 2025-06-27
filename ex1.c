#include <stdio.h>

int main(void) {
    FILE *arquivo;

    arquivo = fopen("quadrado.svg", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    fprintf(arquivo, "<svg version=\"1.1\"\n");
    fprintf(arquivo, "width=\"300\" height=\"200\"\n");
    fprintf(arquivo, "xmlns=\"http://www.w3.org/2000/svg\">\n");
    fprintf(arquivo, "<rect x=\"20\" y=\"30\" width=\"100\" height=\"100\" fill=\"red\" />\n");
    fprintf(arquivo, "</svg>\n");

    fclose(arquivo);

    printf("Arquivo SVG criado \n");
    return 0;
}
