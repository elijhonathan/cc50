int main(void)
{

    int largura, altura;
    
    printf("Digite a altura: ");
    scanf("%i", &altura);

    printf("Digite a largura: ");
    scanf("%i", &largura);

    for (int i = 0; i < altura; i++)
    {
        for (int j = 0; j < largura; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
