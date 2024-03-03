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
    
<<<<<<< HEAD
}
=======
}
>>>>>>> 1591749c73d6f35b212380e88316a32cfb8cc9de
