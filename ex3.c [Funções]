#include <stdio.h>
#include <string.h>

void retangulo(FILE *arquivo) {
    int x, y, width, height;
    printf("Digite a posição [x] do retângulo: ");
    scanf("%d", &x);
    printf("Digite a posição [y] do retângulo: ");
    scanf("%d", &y);
    printf("Digite a [largura] do retângulo: ");
    scanf("%d", &width);
    printf("Digite a [altura] do retângulo: ");
    scanf("%d", &height);
    fprintf(arquivo, "<rect x=\"%d\" y=\"%d\" width=\"%d\" height=\"%d\" fill=\"red\" />\n", x, y, width, height);
}

void circulo(FILE *arquivo) {
    int cx, cy, r;
    printf("Digite a posição c[x] do centro do círculo: ");
    scanf("%d", &cx);
    printf("Digite a posição c[y] do centro do círculo: ");
    scanf("%d", &cy);
    printf("Digite o [raio] do círculo: ");
    scanf("%d", &r);
    fprintf(arquivo, "<circle cx=\"%d\" cy=\"%d\" r=\"%d\" fill=\"green\" />\n", cx, cy, r);
}

void linha(FILE *arquivo) {
    int x1, y1, x2, y2;
    printf("Digite a posição x[1] do ponto inicial da linha: ");
    scanf("%d", &x1);
    printf("Digite a posição y[1] do ponto inicial da linha: ");
    scanf("%d", &y1);
    printf("Digite a posição x[2] do ponto final da linha: ");
    scanf("%d", &x2);
    printf("Digite a posição y[2] do ponto final da linha: ");
    scanf("%d", &y2);
    fprintf(arquivo, "<line x1=\"%d\" y1=\"%d\" x2=\"%d\" y2=\"%d\" stroke=\"blue\" stroke-width=\"2\" />\n", x1, y1, x2, y2);
}

void texto(FILE *arquivo) {
    int x, y;
    char texto[200];
    printf("Digite a posição [x] do texto: ");
    scanf("%d", &x);
    printf("Digite a posição [y] do texto: ");
    scanf("%d", &y);
    printf("Digite o texto: ");
    getchar();
    fgets(texto, sizeof(texto), stdin);
    texto[strcspn(texto, "\n")] = '\0';
    fprintf(arquivo, "<text x=\"%d\" y=\"%d\" font-size=\"20\" fill=\"black\">%s</text>\n", x, y, texto);
}

int main() {
    FILE *arquivo;
    char nome[100];
    char opcao;

    printf("Digite o nome do arquivo SVG [.svg]: ");
    scanf("%s", nome);

    arquivo = fopen(nome, "w");
    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo.\n");
        return 1;
    }

    fprintf(arquivo, "<svg version=\"1.1\" width=\"800\" height=\"600\" xmlns=\"http://www.w3.org/2000/svg\">\n");

    do {
        printf("\nEscolha uma forma para adicionar:\n");
        printf("[R] Retângulo\n[C] Círculo\n[L] Linha\n[T] Texto\n[F] Finalizar\n");
        printf("Opção: ");
        scanf(" %c", &opcao);
        while (getchar() != '\n');

        if (opcao == 'R' || opcao == 'r') {
            retangulo(arquivo);
        }

        if (opcao == 'C' || opcao == 'c') {
            circulo(arquivo);
        }

        if (opcao == 'L' || opcao == 'l') {
            linha(arquivo);
        }

        if (opcao == 'T' || opcao == 't') {
            texto(arquivo);
        }

        if (opcao == 'F' || opcao == 'f') {
            printf("Finalizando arquivo...\n");
        }

        if (opcao != 'R' && opcao != 'r' &&
            opcao != 'C' && opcao != 'c' &&
            opcao != 'L' && opcao != 'l' &&
            opcao != 'T' && opcao != 't' &&
            opcao != 'F' && opcao != 'f') {
            printf("Opção inválida! Tente novamente.\n");
        }

    } while (opcao != 'F' && opcao != 'f');

    fprintf(arquivo, "</svg>\n");
    fclose(arquivo);

    printf("Arquivo '%s' criado com sucesso!\n", nome);
    return 0;
}
