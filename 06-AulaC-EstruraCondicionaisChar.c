int main(void)
{
    char resposta;

    printf("Voce aceita o contrato(s/n)?: ");
    scanf("%c", &resposta);

    if(resposta == 's' || resposta == 'S')
    {
        printf("Voce aceitou!");
    }
    else if(resposta == 'n' || resposta == 'N')
    {
        printf("Voce nao aceitou!");
    }
    else
    {
        printf("Resposta invalida!");
    }


}