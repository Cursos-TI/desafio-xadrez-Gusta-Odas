#include <stdio.h>

// MOVER TORRE RECURSIVO
void moverTorre(int casas, int direcao) {

    //Define a direção em formato de string para facilitar a impressão
    const char* direcaoStr;
    switch (direcao) {
        case 1: direcaoStr = "Direita"; break;
        case 2: direcaoStr = "Esquerda"; break;
        case 3: direcaoStr = "Cima"; break;
        case 4: direcaoStr = "Baixo"; break;
        default: 
            printf("Direção inválida!\n");
            return;
    }
    //Chama a função recursivamente
    if (casas > 0) {
        printf("%s\n", direcaoStr);
        moverTorre(casas - 1, direcao);
    }
}

// MOVER BISPO RECURSIVO
void moverBispo(int casas, int direcao) {
    //Define a direção em formato de string para facilitar a impressão
    const char* direcaoStr;
    switch (direcao) {
        case 1: direcaoStr = "Cima, Direita"; break;
        case 2: direcaoStr = "Cima, Esquerda"; break;
        case 3: direcaoStr = "Baixo, Direita"; break;
        case 4: direcaoStr = "Baixo, Esquerda"; break;
        default: 
            printf("Direção inválida!\n");
            return;
    }
    //Chama a função recursivamente
    if (casas > 0) {
        printf("%s\n", direcaoStr);
        moverBispo(casas - 1, direcao);
    }
}

void moverRainha(int casas, int direcao) {
    //Define a direção em formato de string para facilitar a impressão
    const char* direcaoStr;
    switch (direcao) {
        case 1: direcaoStr = "Direita"; break;
        case 2: direcaoStr = "Esquerda"; break;
        case 3: direcaoStr = "Cima"; break;
        case 4: direcaoStr = "Baixo"; break;
        case 5: direcaoStr = "Cima, Direita"; break;
        case 6: direcaoStr = "Cima, Esquerda"; break;
        case 7: direcaoStr = "Baixo, Direita"; break;
        case 8: direcaoStr = "Baixo, Esquerda"; break;
        default: 
            printf("Direção inválida!\n");
            return;
    }
    //Chama a função recursivamente
    if (casas > 0) {
        printf("%s\n", direcaoStr);
        moverRainha(casas - 1, direcao);
    }
}

int main() {

    int direcao_torre;
    int casas_torre;

    int direcao_bispo;
    int casas_bispo;

    int direcao_rainha;
    int casas_rainha;

    int direcao_cavalo;

    int incremento;

    printf("\n --- Movimentando peças de Xadrez\n\n");

    // --------------------- TORRE ----------------------------
    printf(" ===== Peça: Torre ===== \n");
    printf("1 - Direita\n");
    printf("2 - Esquerda\n");
    printf("3 - Cima\n");
    printf("4 - Baixo\n");

    printf("Selecione a direção: ");
    scanf("%d", &direcao_torre);

    printf("\nSelecione o número de casas para mover: ");
    scanf("%d", &casas_torre);
    
    //chamando a função de mover torre recursivamente
    printf("\nMovendo a torre %d vezes.\n", casas_torre);
    moverTorre(casas_torre, direcao_torre);

    // --------------------- BISPO ----------------------------

    printf("\n ===== Peça: Bispo ===== \n");
    printf("1 - Diagonal Superior Direita\n");
    printf("2 - Diagonal Superior Esquerda\n");
    printf("3 - Diagonal Inferior Direita\n");
    printf("4 - Diagonal Inferior Esquerda\n");

    printf("Selecione a direção: ");
    scanf("%d", &direcao_bispo);

    printf("\nSelecione o número de casas para mover: ");
    scanf("%d", &casas_bispo);

    moverBispo(casas_bispo, direcao_bispo);

    // --------------------- RAINHA ----------------------------
    
    printf("\n ===== Peça: Rainha ===== \n");
    printf("1 - Direita\n");
    printf("2 - Esquerda\n");
    printf("3 - Cima\n");
    printf("4 - Baixo\n");
    printf("5 - Diagonal Superior Direita\n");
    printf("6 - Diagonal Superior Esquerda\n");
    printf("7 - Diagonal Inferior Direita\n");
    printf("8 - Diagonal Inferior Esquerda\n");

    printf("Selecione a direção: ");
    scanf("%d", &direcao_rainha);

    printf("\nSelecione o número de casas para mover: ");
    scanf("%d", &casas_rainha);

    moverRainha(casas_rainha, direcao_rainha);

    // --------------------- CAVALO ----------------------------

    printf("\n ===== Peça: Cavalo ===== \n");
    printf("Selecione a direção do movimento em 'L' do cavalo:\n");
    printf("1 - Duas casas para baixo e uma para esquerda\n");
    printf("2 - Duas casas para baixo e uma para direita\n");
    printf("3 - Duas casas para cima e uma para esquerda\n");
    printf("4 - Duas casas para cima e uma para direita\n");

    printf("Selecione a direção: ");
    scanf("%d", &direcao_cavalo);

    // Lógica de movimentação do cavalo
    switch(direcao_cavalo) {
        case 1:
            printf("\nMovendo o cavalo duas vezes para baixo e uma para esquerda.\n");
            int movimentoCavalo = 1; 
            int movimentoLateral = 0;
            for (movimentoCavalo; movimentoCavalo >= 1; movimentoCavalo--) {
                
                while(movimentoLateral < 2) {
                    printf("Baixo %d\n", movimentoLateral + 1);
                    movimentoLateral++;

                }
                printf("Esquerda 1\n");
            }
            break;
        
        case 2:
            printf("\nMovendo o cavalo duas vezes para baixo e uma para direita.\n");
            movimentoCavalo = 1; 
            movimentoLateral = 0;
            for (movimentoCavalo; movimentoCavalo >= 1; movimentoCavalo--) {
                
                while(movimentoLateral < 2) {
                    printf("Baixo %d\n", movimentoLateral + 1);
                    movimentoLateral++;

                }
                printf("Direita 1\n");
            }
            break;

        case 3:
            printf("\nMovendo o cavalo duas vezes para cima e uma para esquerda.\n");
            movimentoCavalo = 1; 
            movimentoLateral = 0;
            for (movimentoCavalo; movimentoCavalo >= 1; movimentoCavalo--) {
                
                while(movimentoLateral < 2) {
                    printf("Cima %d\n", movimentoLateral + 1);
                    movimentoLateral++;

                }
                printf("Esquerda 1\n");
            }
            break;

        case 4:
            printf("\nMovendo o cavalo duas vezes para cima e uma para direita.\n");
            movimentoCavalo = 1;
            movimentoLateral = 0;
            for (movimentoCavalo; movimentoCavalo >= 1; movimentoCavalo--) {
                
                while(movimentoLateral < 2) {
                    printf("Cima %d\n", movimentoLateral + 1);
                    movimentoLateral++;

                }
                printf("Direita 1\n");
            }
            break;
        default:
            printf("Direção inválida!\n");
            break;
        
    }
    
    return 0;
}