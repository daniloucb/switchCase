#include <stdio.h>

void clearBuffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
};

void checkDDD()
{
    int DDD;
    printf("Digite um DDD: ");

    scanf("%d", &DDD);

    switch(DDD)
    {
    case 61:
        printf("%d - Brasília", DDD);
        break;
    case 71:
        printf("%d - Salvador", DDD);
        break;
    case 11:
        printf("%d - São Paulo", DDD);
        break;
    case 21:
        printf("%d - Rio de Janeiro", DDD);
        break;
    case 32:
        printf("%d - Juiz de Fora", DDD);
        break;
    case 19:
        printf("%d - Campinas", DDD);
        break;
    case 27:
        printf("%d - Vitória", DDD);
        break;
    case 31:
        printf("%d - Belo Horizonte", DDD);
        break;
    default:
        printf("%d - DDD não registrado", DDD);
        break;
    }
};

void continueMenu();

float price;
void menu()
{
    int menuOption;
    
    printf("-OPÇÕES-\n");
    printf("100 101\n102 103\n104\n");
    printf("opção: ");

    scanf("%d", &menuOption);
    clearBuffer();
    switch(menuOption)
    {
        case 101:
            printf("%d - Cachorro Quente - R$ 10,10\n", menuOption);
            price =+ 10.10;
            printf("%f\n", price);
            continueMenu();
            break;
        default:
            printf("opção não disponível no menu");
            break;
    }
};

int main()
{
    int option;
    printf("Escolha uma opção...\n");

    option = getchar();

    switch (option)
    {
    case '1':
        checkDDD();
        break;
    case '2':
        printf("Escolha uma opção do menu: \n");
        menu();
        break;
    
    default:
        break;
    }

};

void continueMenu()
{
    char option;
    printf("Deseja adicionar mais itens? (S/N)\n");

    option = getchar();

    switch (option)
    {
    case 's':
    case 'S':
        menu();
        break;
    case 'n':
    case 'N':
        return;
    default:
        break;
    }
}