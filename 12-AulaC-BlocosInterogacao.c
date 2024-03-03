int main(void)
{
    int n;
    do
    {
        printf("Digite a largura: ");
        scanf("%i", &n);
    }
    while(n < 1);

    for(int i = 0; i < n; i++)
    {
        printf("?");
    }

}