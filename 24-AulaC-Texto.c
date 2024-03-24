#include <stdio.h>

int main(void)
{
char mensagem[100];

printf("Digite o seu texto: ");
fgets(mensagem, sizeof(mensagem), stdin);

printf("%s", mensagem);

}