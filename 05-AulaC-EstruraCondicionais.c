int main(void)
{
    int x, y;

    printf("Digite o X: ");
    scanf("%i", &x);

    printf("Digite o Y: ");
    scanf("%i", &y);

    if(x > y)
    {
        printf("%i e maior que %i", x, y);
    }
    else if(x < y)
    {
        printf("%i e menor que %i", x, y);
    }
    else
    {
        printf("%i e igual a %i", x, y);
    }
}