int numeroPositivo(void);

int main(void)
{
    int i = numeroPositivo();
    printf("%i", i);
}

int numeroPositivo(void)
{
    int n;
    do
    {
        printf("Digite um numero positivo: ");
        scanf("%i", &n);
    }
    while(n < 1);
    return n;
    
}