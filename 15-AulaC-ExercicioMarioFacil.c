
int main(void)
{
    int tamanho;

    // Solicitar o tamanho da pirâmide até que um valor válido seja inserido
    do
    {
        printf("Digite o tamanho da piramide (limite 8): ");
        scanf("%i", &tamanho);
    }
    while (tamanho <= 0 || tamanho > 8);

    // Desenhar a pirâmide
    for (int linha = 1; linha <= tamanho; linha++)
    {
        // Espaços em branco antes dos #
        for (int espaco = 1; espaco <= tamanho - linha; espaco++)
        {
            printf(" ");
        }
        // Caracteres #
        for (int sharp = 1; sharp <= linha; sharp++)
        {
            printf("#");
        }
        printf("\n");
    }

}