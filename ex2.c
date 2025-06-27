#include <stdio.h>

int main(void) {
    char nomeArquivo[100];
    int x, y, width, height;

    printf("Digite o nome do arquivo [.svg]: ");
    scanf("%99s", nomeArquivo);

    printf("Digite a posição [x] do quadrado: ");
    scanf("%d", &x);

    printf("Digite a posição [y] do quadrado: ");
    scanf("%d", &y);

    printf("Digite a largura do quadrado: ");
    scanf("%d", &width);

    printf("Digite a altura do quadrado: ");
    scanf("%d", &height);

    FILE *arquivo = fopen(nomeArquivo, "w");

    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo.\n");
        return 1;
    }

    fprintf(arquivo, "<svg version=\"1.1\"\n");
    fprintf(arquivo, "width=\"300\" height=\"200\"\n");
    fprintf(arquivo, "xmlns=\"http://www.w3.org/2000/svg\">\n");
    fprintf(arquivo, "<rect x=\"%d\" y=\"%d\" width=\"%d\" height=\"%d\" fill=\"blue\" />\n", x, y, width, height);
    fprintf(arquivo, "</svg>\n");

    fclose(arquivo);

    printf("Arquivo '%s' criado com sucesso!\n", nomeArquivo);
    return 0;
}
