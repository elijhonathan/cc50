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


<<<<<<< HEAD
}
=======
}
>>>>>>> 1591749c73d6f35b212380e88316a32cfb8cc9de
