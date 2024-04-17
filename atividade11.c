#include
 
int main() {
    int Leiaumamatriz4x4[4][4] = {
        {5, 12, 3, 8},
        {15, 6, 9, 20},
        {11, 2, 7, 14},
        {18, 4, 17, 1}
    };
 
    int contador = 0;
 
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (Leiaumamatriz4x4[i][j] > 10) {
                contador++;
            }
        }
    }
    printf("A matriz possui %d valores maiores que 10.\n", contador);
    return 0;
}
 
//questão2
 
#include
int main() {
    int matriz[5][5];
 
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == j) {
                matriz[i][j] = 1;
            } else {
                matriz[i][j] = 0;
            }
        }
    }
    printf("Matriz resultante:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
 
    return 0;
}
 
//questão3
#include
#define size 5
 
int main() {
    int matriz[size][size];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            matriz[i][j] = (i + 1) * (j + 1);
        }
    }
 
    printf("Matriz resultante:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
 
    return 0;
}
//questão4
#include
 
void imprimirMatriz(int matriz[4][4]) {
    printf("Matriz 4x4:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}
 
void localizarMaiorValor(int matriz[4][4]) {
    int maiorValor = matriz[0][0];
    int linha = 0;
    int coluna = 0;
 
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matriz[i][j] > maiorValor) {
                maiorValor = matriz[i][j];
                linha = i;
                coluna = j;
            }
        }
    }
 
    printf("O maior valor na matriz é %d, localizado na linha %d e coluna %d.\n", maiorValor, linha, coluna);
}
 
int main() {
    int matriz[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
 
    imprimirMatriz(matriz);
    localizarMaiorValor(matriz);
    return 0;
}
//questão5
#include
#define tamanho 5
 
void imprimirMatriz(int matriz[tamanho][tamanho]) {
    printf("Matriz %dx%d:\n", tamanho, tamanho);
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}
 
void buscarValor(int matriz[tamanho][tamanho], int valor) {
    int encontrado = 0;
 
    // Percorre a matriz para encontrar o valor
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            if (matriz[i][j] == valor) {
                printf("O valor %d foi encontrado na linha %d e coluna %d.\n", valor, i, j);
                encontrado = 1;
            }
        }
    }
 
    if (!encontrado) {
        printf("O valor %d não foi encontrado na matriz.\n", valor);
    }
}
 
int main() {
    int matriz[tamanho][tamanho] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };
    int valor;
 
    imprimirMatriz(matriz);
 
    printf("\nDigite o valor a ser buscado na matriz: ");
    scanf("%d", &valor);
    buscarValor(matriz, valor);
   
    return 0;
}
 
//questão6
#include
#define MAIORTAMANHO 4
 
void lerMatriz(int matriz[MAIORTAMANHO][MAIORTAMANHO]) {
    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < MAIORTAMANHO; i++) {
        for (int j = 0; j < MAIORTAMANHO; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}
 
void escreverMatriz(int matriz[MAIORTAMANHO][MAIORTAMANHO]) {
    printf("Matriz resultante com os maiores valores:\n");
    for (int i = 0; i < MAIORTAMANHO; i++) {
        for (int j = 0; j < MAIORTAMANHO; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}
 
void calcularMaioresValores(int matriz1[MAIORTAMANHO][MAIORTAMANHO], int matriz2[MAIORTAMANHO][MAIORTAMANHO], int resultado[MAIORTAMANHO][MAIORTAMANHO]) {
    for (int i = 0; i < MAIORTAMANHO; i++) {
        for (int j = 0; j < MAIORTAMANHO; j++) {
            resultado[i][j] = (matriz1[i][j] > matriz2[i][j]) ? matriz1[i][j] : matriz2[i][j];
        }
    }
}
 
int main() {
    int matriz1[MAIORTAMANHO][MAIORTAMANHO];
    int matriz2[MAIORTAMANHO][MAIORTAMANHO];
    int resultado[MAIORTAMANHO][MAIORTAMANHO];
 
    printf("Para a primeira matriz:\n");
    lerMatriz(matriz1);
    printf("\nPara a segunda matriz:\n");
    lerMatriz(matriz2);
    calcularMaioresValores(matriz1, matriz2, resultado);
    escreverMatriz(resultado);
    return 0;
}
//questão7
 
#include
#define TAMANHO 10
 
void gerarMatriz(int matriz[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            if (i < j) {
                matriz[i][j] = 2 * i + 7 * j;
            } else if (i == j) {
                matriz[i][j] = 3 * i * i;
            } else {
                matriz[i][j] = 5 * j * j + 1;
            }
        }
    }
}
 
void imprimirMatriz(int matriz[TAMANHO][TAMANHO]) {
    printf("Matriz 10x10:\n");
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}
 
int main() {
    int matriz[TAMANHO][TAMANHO];
 
    gerarMatriz(matriz);
    imprimirMatriz(matriz);
 
    return 0;
}
 
//questão8
#include
#include
 
void lerMatriz(int **matriz, int dimensao) {
    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < dimensao; i++) {
        for (int j = 0; j < dimensao; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}
int calcularSomaAcimaDiagonal(int **matriz, int dimensao) {
    int soma = 0;
    for (int i = 0; i < dimensao; i++) {
        for (int j = i + 1; j < dimensao; j++) {
            soma += matriz[i][j];
        }
    }
    return soma;
}
int main() {
    int dimensao;
    printf("Digite a dimensao da matriz: ");
    scanf("%d", &dimensao);
 
    int **matriz = (int **)malloc(dimensao * sizeof(int *));
    for (int i = 0; i < dimensao; i++) {
        matriz[i] = (int *)malloc(dimensao * sizeof(int));
    }
 
    lerMatriz(matriz, dimensao);
    int soma = calcularSomaAcimaDiagonal(matriz, dimensao);
    printf("A soma dos elementos acima da diagonal principal é: %d\n", soma);
    for (int i = 0; i < dimensao; i++) {
        free(matriz[i]);
    }
    free(matriz);
 
    return 0;
}
 
//questão9
#include
#include
 
void lerMatriz(int **matriz, int dimensao) {
    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < dimensao; i++) {
        for (int j = 0; j < dimensao; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}
 
int calcularSomaAbaixoDiagonal(int **matriz, int dimensao) {
    int soma = 0;
    for (int i = 0; i < dimensao; i++) {
        for (int j = 0; j < i; j++) {
            soma += matriz[i][j];
        }
    }
    return soma;
}
 
int main() {
    int dimensao;
    printf("Digite a dimensao da matriz: ");
    scanf("%d", &dimensao);
 
    int **matriz = (int **)malloc(dimensao * sizeof(int *));
    for (int i = 0; i < dimensao; i++) {
        matriz[i] = (int *)malloc(dimensao * sizeof(int));
    }
    lerMatriz(matriz, dimensao);
    int soma = calcularSomaAbaixoDiagonal(matriz, dimensao);
    printf("A soma dos elementos abaixo da diagonal principal é: %d\n", soma);
    for (int i = 0; i < dimensao; i++) {
        free(matriz[i]);
    }
    free(matriz);
 
    return 0;
}
 
//questão10
 
#include
#define volume 3
 
void lerMatriz(int matriz[volume][volume]) {
    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < volume; i++) {
        for (int j = 0; j < volume; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}
 
int calcularSomaDiagonalPrincipal(int matriz[volume][volume]) {
    int soma = 0;
    for (int i = 0; i < volume; i++) {
        soma += matriz[i][i];
    }
    return soma;
}
 
int main() {
    int matriz[volume][volume];
    lerMatriz(matriz);
    int soma = calcularSomaDiagonalPrincipal(matriz);
    printf("A soma dos elementos na diagonal principal é: %d\n", soma);
 
    return 0;
}
 
//questão11
 
#include
#define DIMENSAO 3
 
void lerMatriz(int matriz[DIMENSAO][DIMENSAO]) {
    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < DIMENSAO; i++) {
        for (int j = 0; j < DIMENSAO; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}
int calcularSomaDiagonalSecundaria(int matriz[DIMENSAO][DIMENSAO]) {
    int soma = 0;
    for (int i = 0; i < DIMENSAO; i++) {
        soma += matriz[i][DIMENSAO - 1 - i];
    }
    return soma;
}
int main() {
    int matriz[DIMENSAO][DIMENSAO];
    lerMatriz(matriz);
    int soma = calcularSomaDiagonalSecundaria(matriz);
    printf("A soma dos elementos na diagonal secundária é: %d\n", soma);
 
    return 0;
}
//questão12
 
#include
#define VOLUME 3
 
void lerMatriz(int matriz[VOLUME][VOLUME]) {
    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < VOLUME; i++) {
        for (int j = 0; j < VOLUME; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}
void imprimirMatriz(int matriz[VOLUME][VOLUME]) {
    printf("Matriz Transposta:\n");
    for (int i = 0; i < VOLUME; i++) {
        for (int j = 0; j < VOLUME; j++) {
            printf("%d\t", matriz[j][i]);
        }
        printf("\n");
    }
}
int main() {
    int matriz[VOLUME][VOLUME];
    lerMatriz(matriz);
    imprimirMatriz(matriz);
 
    return 0;
}
 
//questão13
#include
#include
#include
 
void gerarMatriz(int matriz[4][4]) {
    srand(time(NULL));
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            matriz[i][j] = rand() % 20 + 1;
    }
}
void imprimirMatriz(int matriz[4][4]) {
    printf("Matriz Original:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}
void transformarTriangularInferior(int matriz[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            matriz[i][j] = 0;
        }
    }
}
int main() {
    int matrizOriginal[4][4];
    gerarMatriz(matrizOriginal);
    imprimirMatriz(matrizOriginal);
    transformarTriangularInferior(matrizOriginal);
    printf("\nMatriz Transformada (Triangular Inferior):\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d\t", matrizOriginal[i][j]);
        }
        printf("\n");
    }
 
    return 0;
}
 
//questão 14
#include
#include
#include
 
#define LINHAS 5
#define COLUNAS 5
 
int numeroRepetido(int num, int matriz[LINHAS][COLUNAS]) {
    int i, j;
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            if (matriz[i][j] == num) {
                return 1;
            }
        }
    }
    return 0;
}
 
int main() {
    int cartela[LINHAS][COLUNAS];
    int i, j, num;
 
    srand(time(NULL));
 
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            do {
                num = rand() % 100;
            } while (numeroRepetido(num, cartela));
            cartela[i][j] = num;
        }
    }
    printf("Cartela de Bingo:\n");
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("%2d ", cartela[i][j]);
        }
        printf("\n");
    }
 
    return 0;
}
 
// questão15
#include
#define ALUNOS 5
#define QUESTOES 10
 
int calcularPontuacao(char respostasAluno[QUESTOES], char gabarito[QUESTOES]) {
    int pontuacao = 0;
    int i;
    for (i = 0; i < QUESTOES; i++) {
        if (respostasAluno[i] == gabarito[i]) {
            pontuacao++;
        }
    }
    return pontuacao;
}
 
int main() {
    char respostasAlunos[ALUNOS][QUESTOES];
    char gabarito[QUESTOES];
    int resultado[ALUNOS];
    int i, j;
 
    printf("Digite as respostas do gabarito (a, b ou c):\n");
    for (i = 0; i < QUESTOES; i++) {
        scanf(" %c", &gabarito[i]);
    }
 
    printf("Digite as respostas dos alunos (a, b ou c):\n");
    for (i = 0; i < ALUNOS; i++) {
        printf("Respostas do aluno %d:\n", i + 1);
        for (j = 0; j < QUESTOES; j++) {
            scanf(" %c", &respostasAlunos[i][j]);
        }
    }
    for (i = 0; i < ALUNOS; i++) {
        resultado[i] = calcularPontuacao(respostasAlunos[i], gabarito);
    }
 
    printf("\nResultados dos alunos:\n");
    for (i = 0; i < ALUNOS; i++) {
        printf("Aluno %d: %d pontos\n", i + 1, resultado[i]);
    }
 
    return 0;
}
//questão16
#include
#define ALUNOS 10
#define PROVAS 3
 
float piorNotaProva(float notas[ALUNOS][PROVAS], int prova) {
    float piorNota = notas[0][prova];
    int i;
    for (i = 1; i < ALUNOS; i++) {
        if (notas[i][prova] < piorNota) {
            piorNota = notas[i][prova];
        }
    }
    return piorNota;
}
int main() {
    float notas[ALUNOS][PROVAS];
    int i, j;
 
    printf("Digite as notas dos alunos:\n");
    for (i = 0; i < ALUNOS; i++) {
        printf("Aluno %d:\n", i + 1);
        for (j = 0; j < PROVAS; j++) {
            printf("Nota da prova %d: ", j + 1);
            scanf("%f", ¬as[i][j]);
        }
    }
   
    float pioresNotas[PROVAS];
    for (j = 0; j < PROVAS; j++) {
        pioresNotas[j] = piorNotaProva(notas, j);
    }
    int numAlunosPiorNotaProva1 = 0;
    int numAlunosPiorNotaProva2 = 0;
    int numAlunosPiorNotaProva3 = 0;
    for (i = 0; i < ALUNOS; i++) {
        if (notas[i][0] == pioresNotas[0]) {
            numAlunosPiorNotaProva1++;
        }
        if (notas[i][1] == pioresNotas[1]) {
            numAlunosPiorNotaProva2++;
        }
        if (notas[i][2] == pioresNotas[2]) {
            numAlunosPiorNotaProva3++;
        }
    }
    printf("\nNúmero de alunos com a pior nota na prova 1: %d\n", numAlunosPiorNotaProva1);
    printf("Número de alunos com a pior nota na prova 2: %d\n", numAlunosPiorNotaProva2);
    printf("Número de alunos com a pior nota na prova 3: %d\n", numAlunosPiorNotaProva3);
   
    return 0;
}
 
//questão17
#include
#define LINHAS 3
#define COLUNAS 3
 
int main() {
    int matriz[LINHAS][COLUNAS];
    int somaColunas[COLUNAS] = {0};
 
 
    printf("Digite os elementos da matriz %dx%d:\n", LINHAS, COLUNAS);
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    for (j = 0; j < COLUNAS; j++) {
        for (i = 0; i < LINHAS; i++) {
            somaColunas[j] += matriz[i][j];
        }
    }
    printf("Vetor de soma das colunas:\n");
    for (j = 0; j < COLUNAS; j++) {
        printf("%d ", somaColunas[j]);
    }
    printf("\n");
 
    return 0;
}
 
//questão18
#include
#define ALUNOS 5
#define COLUNAS 4
 
int main() {
    int matriz[ALUNOS][COLUNAS];
    int i, j;
    float mediaProvas, mediaTrabalhos, notaFinal, maiorNotaFinal = -1;
    int matriculaMaiorNotaFinal;
 
 
    printf("Digite as informações dos alunos:\n");
    for (i = 0; i < ALUNOS; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Matrícula: ");
        scanf("%d", &matriz[i][0]);
        printf("Média das provas: ");
        scanf("%d", &matriz[i][1]);
        printf("Média dos trabalhos: ");
        scanf("%d", &matriz[i][2]);
 
       
        mediaProvas = matriz[i][1];
        mediaTrabalhos = matriz[i][2];
        notaFinal = mediaProvas + mediaTrabalhos;
        matriz[i][3] = notaFinal;
       
        if (notaFinal > maiorNotaFinal) {
            maiorNotaFinal = notaFinal;
            matriculaMaiorNotaFinal = matriz[i][0];
        }
    }
    printf("\nMatrícula do aluno com a maior nota final: %d\n", matriculaMaiorNotaFinal);
    float somaNotasFinais = 0;
    for (i = 0; i < ALUNOS; i++) {
        somaNotasFinais += matriz[i][3];
    }
    float mediaNotasFinais = somaNotasFinais / ALUNOS;
    printf("Média aritmética das notas finais: %.2f\n", mediaNotasFinais);
 
    return 0;
}
 
//questão19
#include
#define LINHAS 3
#define COLUNAS 6
 
int main() {
    float matriz[LINHAS][COLUNAS];
    int i, j;
    float somaColunasImpares = 0, mediaColunas2e4 = 0, somaColunas1e2 = 0;
 
    printf("Digite os elementos da matriz %dx%d:\n", LINHAS, COLUNAS);
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            scanf("%f", &matriz[i][j]);
        }
    }
    printf("\nMatriz original:\n");
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("%.2f\t", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\nSoma dos elementos das colunas ímpares:\n");
    for (j = 0; j < COLUNAS; j++) {
        if (j % 2 == 0) {
            for (i = 0; i < LINHAS; i++) {
                somaColunasImpares += matriz[i][j];
            }
            printf("Coluna %d: %.2f\n", j + 1, somaColunasImpares);
            somaColunasImpares = 0;
        }
    }
 
    printf("\nMédia aritmética dos elementos das colunas 2 e 4:\n");
    for (i = 0; i < LINHAS; i++) {
        mediaColunas2e4 += matriz[i][1];
        mediaColunas2e4 += matriz[i][3];
    }
    mediaColunas2e4 /= (LINHAS * 2);
    printf("%.2f\n", mediaColunas2e4);
 
    for (i = 0; i < LINHAS; i++) {
        somaColunas1e2 += matriz[i][0];
        somaColunas1e2 += matriz[i][1];
    }
    printf("\nMatriz modificada:\n");
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            if (j == 5) {
                matriz[i][j] = somaColunas1e2;
            }
            printf("%.2f\t", matriz[i][j]);
        }
        printf("\n");
    }
 
    return 0;
}
 
//questão20
#include
#define LINHAS_MATRIZES 2
#define COLUNAS_MATRIZES 2
#define LINHAS_MATRIZ_RESULTADO 3
#define COLUNAS_MATRIZ_RESULTADO 3
 
void somarMatrizes(float matrizA[LINHAS_MATRIZES][COLUNAS_MATRIZES], float matrizB[LINHAS_MATRIZES][COLUNAS_MATRIZES], float matrizResultado[LINHAS_MATRIZES][COLUNAS_MATRIZES]) {
    for (int i = 0; i < LINHAS_MATRIZES; i++) {
        for (int j = 0; j < COLUNAS_MATRIZES; j++) {
            matrizResultado[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
}
 
void subtrairMatrizes(float matrizA[LINHAS_MATRIZES][COLUNAS_MATRIZES], float matrizB[LINHAS_MATRIZES][COLUNAS_MATRIZES], float matrizResultado[LINHAS_MATRIZES][COLUNAS_MATRIZES]) {
    for (int i = 0; i < LINHAS_MATRIZES; i++) {
        for (int j = 0; j < COLUNAS_MATRIZES; j++) {
            matrizResultado[i][j] = matrizA[i][j] - matrizB[i][j];
        }
    }
}
 
void adicionarConstante(float matrizA[LINHAS_MATRIZES][COLUNAS_MATRIZES], float matrizB[LINHAS_MATRIZES][COLUNAS_MATRIZES], float constante) {
    for (int i = 0; i < LINHAS_MATRIZES; i++) {
        for (int j = 0; j < COLUNAS_MATRIZES; j++) {
            matrizA[i][j] += constante;
            matrizB[i][j] += constante;
        }
    }
}
 
void imprimirMatriz(float matriz[LINHAS_MATRIZES][COLUNAS_MATRIZES], int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%.2f\t", matriz[i][j]);
        }
        printf("\n");
    }
}
 
int main() {
    float matrizA[LINHAS_MATRIZES][COLUNAS_MATRIZES], matrizB[LINHAS_MATRIZES][COLUNAS_MATRIZES], matrizResultado[LINHAS_MATRIZES][COLUNAS_MATRIZES];
    float constante;
    char opcao;
 
    printf("Digite os elementos da matriz A:\n");
    for (int i = 0; i < LINHAS_MATRIZES; i++) {
        for (int j = 0; j < COLUNAS_MATRIZES; j++) {
            scanf("%f", &matrizA[i][j]);
        }
    }
 
    printf("Digite os elementos da matriz B:\n");
    for (int i = 0; i < LINHAS_MATRIZES; i++) {
        for (int j = 0; j < COLUNAS_MATRIZES; j++) {
            scanf("%f", &matrizB[i][j]);
        }
    }
 
    printf("\nEscolha uma opção:\n");
    printf("a. Somar as duas matrizes\n");
    printf("b. Subtrair a primeira matriz da segunda matriz\n");
    printf("c. Adicionar uma constante às duas matrizes\n");
    printf("d. Imprimir as matrizes\n");
 
    scanf(" %c", &opcao);
 
    switch (opcao) {
        case 'a':
            somarMatrizes(matrizA, matrizB, matrizResultado);
            printf("Resultado da soma:\n");
            imprimirMatriz(matrizResultado, LINHAS_MATRIZES, COLUNAS_MATRIZES);
            break;
        case 'b':
            subtrairMatrizes(matrizA, matrizB, matrizResultado);
            printf("Resultado da subtração:\n");
            imprimirMatriz(matrizResultado, LINHAS_MATRIZES, COLUNAS_MATRIZES);
            break;
        case 'c':
            printf("Digite a constante a ser adicionada: ");
            scanf("%f", &constante);
            adicionarConstante(matrizA, matrizB, constante);
            printf("Matriz A com a constante adicionada:\n");
            imprimirMatriz(matrizA, LINHAS_MATRIZES, COLUNAS_MATRIZES);
            printf("Matriz B com a constante adicionada:\n");
            imprimirMatriz(matrizB, LINHAS_MATRIZES, COLUNAS_MATRIZES);
            break;
        case 'd':
            printf("Matriz A:\n");
            imprimirMatriz(matrizA, LINHAS_MATRIZES, COLUNAS_MATRIZES);
            printf("Matriz B:\n");
            imprimirMatriz(matrizB, LINHAS_MATRIZES, COLUNAS_MATRIZES);
            break;
        default:
            printf("Opção inválida!\n");
    }
 
    return 0;
}
 
 
//questão21
#include
#define LINHAS 3
#define COLUNAS 3
 
void multiplicarMatrizes(int matrizA[LINHAS][COLUNAS], int matrizB[LINHAS][COLUNAS], int matrizC[LINHAS][COLUNAS]) {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            matrizC[i][j] = 0;
            for (int k = 0; k < COLUNAS; k++) {
                matrizC[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }
}
 
int main() {
    int matrizA[LINHAS][COLUNAS], matrizB[LINHAS][COLUNAS], matrizC[LINHAS][COLUNAS];
 
    printf("Digite os elementos da matriz A:\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            scanf("%d", &matrizA[i][j]);
        }
    }
    printf("Digite os elementos da matriz B:\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            scanf("%d", &matrizB[i][j]);
        }
    }
    multiplicarMatrizes(matrizA, matrizB, matrizC);
 
    printf("Matriz resultante C = A * B:\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d\t", matrizC[i][j]);
        }
        printf("\n");
    }
 
    return 0;
}
 
//questão22
 
#include
#define LINHAS 3
#define COLUNAS 3
 
void calcularQuadradoMatriz(int matrizA[LINHAS][COLUNAS], int matrizB[LINHAS][COLUNAS]) {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            matrizB[i][j] = matrizA[i][j] * matrizA[i][j];
        }
    }
}
 
int main() {
    int matrizA[LINHAS][COLUNAS], matrizB[LINHAS][COLUNAS];
    printf("Digite os elementos da matriz A:\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            scanf("%d", &matrizA[i][j]);
        }
    }
 
    calcularQuadradoMatriz(matrizA, matrizB);
    printf("Matriz B = A^2:\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d\t", matrizB[i][j]);
        }
        printf("\n");
    }
 
    return 0;
}
 