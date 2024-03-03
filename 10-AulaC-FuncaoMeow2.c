void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Meow!\n");
    }
}

int numeromeow;

int main(void)
{
    printf("Digite o numero de meow: ");
    scanf("%i", &numeromeow);

    meow(numeromeow);
}
