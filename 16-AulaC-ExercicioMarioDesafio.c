int main(void)
{
    int altura;

    // Solicitar a altura da pirâmide até que um valor válido seja inserido
    do
    {
        printf("Digite a altura da piramide (limite 8): ");
        scanf("%i", &altura);
    }
    while (altura <= 0 || altura > 8);

    // Desenhar a pirâmide
    for (int linha = 1; linha <= altura; linha++)
    {
        // Espaços em branco antes do primeiro #
        for (int espaco = 1; espaco <= altura - linha; espaco++)
        {
            printf(" ");
        }
        // Caracteres # do lado esquerdo
        for (int sharp = 1; sharp <= linha; sharp++)
        {
            printf("#");
        }
        // Espaços em branco entre as duas partes da pirâmide
        printf("  ");
        // Caracteres # do lado direito
        for (int sharp = 1; sharp <= linha; sharp++)
        {
            printf("#");
        }
        printf("\n");
    }

}