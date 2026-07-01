#include <stdio.h>

#define MAX_ALUNOS 5

// Função para calcular a média
float calcularMedia(float n1, float n2, float n3) {
    return (n1 + n2 + n3) / 3;
}

int main() {
    char nomes[MAX_ALUNOS][50];
    float notas[MAX_ALUNOS][3];
    float medias[MAX_ALUNOS];

    int i, j;
    int indiceMaior = 0;

    // Entrada de dados
    for (i = 0; i < MAX_ALUNOS; i++) {
        printf("\nAluno %d:\n", i + 1);

        printf("Nome: ");
        scanf(" %[^\n]", nomes[i]);

        for (j = 0; j < 3; j++) {
            printf("Nota %d: ", j + 1);
            scanf("%f", &notas[i][j]);
        }

        medias[i] = calcularMedia(notas[i][0], notas[i][1], notas[i][2]);
    }

    // Encontrar maior média
    for (i = 1; i < MAX_ALUNOS; i++) {
        if (medias[i] > medias[indiceMaior]) {
            indiceMaior = i;
        }
    }

    // Saída
    printf("\n\n===== RESULTADOS =====\n");
    printf("Nome\t\tNota1\tNota2\tNota3\tMedia\tSituacao\n");

    for (i = 0; i < MAX_ALUNOS; i++) {
        printf("%s\t\t%.2f\t%.2f\t%.2f\t%.2f\t%s\n",
            nomes[i],
            notas[i][0],
            notas[i][1],
            notas[i][2],
            medias[i],
            (medias[i] >= 7.0) ? "Aprovado" : "Reprovado"
        );
    }

    printf("\nAluno com maior media: %s (%.2f)\n",
        nomes[indiceMaior],
        medias[indiceMaior]
    );

    return 0;
}
