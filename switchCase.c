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

struct MenuItem {
    char name[30];
    float price;
};

struct Menu {
    struct MenuItem item[5]
};



float price;
void callMenu()
{
    struct Menu menu[5] = {
        {"100. Cachorro Quente", 10.10},
        {"101. Bauru Simples", 8.30},
        {"102. Bauru c/ovo", 8.50},
        {"103. Hamburger", 12.50},
        {"104. Cheeseburger", 13.25},
    };
    int i;
    int menuOption;
    int menuLength = sizeof(menu) / sizeof(menu[0]);
    
    printf("-OPÇÕES-\n");
    
    for(i = 0; i < 5; i++) 
    {
        printf("%s\n", menu[i].item[0].name);
    }

    printf("opção: ");

    scanf("%d", &menuOption);

    switch(menuOption)
    {
        case 100:
            printf("%s\n", menu[0].item[0].name);
            price += menu[0].item[0].price;
            printf("%.2f\n", price);
            continueMenu();
            break;
        case 101:
            printf("%s\n", menu[1].item[0].name);
            price += menu[1].item[0].price;
            printf("%.2f\n", price);
            continueMenu();
            break;
        case 102:
            printf("%s\n", menu[2].item[0].name);
            price += menu[2].item[0].price;
            printf("%.2f\n", price);
            continueMenu();
            break;
        case 103:
            printf("%s\n", menu[3].item[0].name);
            price += menu[3].item[0].price;
            printf("%.2f\n", price);
            continueMenu();
            break;
        case 104:
            printf("%s\n", menu[4].item[0].name);
            price += menu[4].item[0].price;
            printf("%.2f\n", price);
            continueMenu();
            break;
        default:
            printf("opção não disponível no menu\n\n");
            callMenu();
            break;
    }
};

void pratos()
{
    int option;
    printf("1 - vegetariano\n");
    printf("2 - peixe\n");
    printf("3 - frango\n");
    printf("4 - carne\n");
    option = getchar();


    switch (option)
    {
    case '1':
        printf("%d cal", 180);
        break;
    case '2':
        printf("%d cal", 230);
        break;
    case '3':
        printf("%d cal", 250);
        break;
    case '4':
        printf("%d cal", 350);
        break;
    default:
        printf("opção inválida!");
        break;
    }
};

void sobremesas()
{
    int option;
    printf("1 - Abacaxi\n");
    printf("2 - Sorvete diet\n");
    printf("3 - Mouse diet\n");
    printf("4 - Mouse chocolate\n");
    option = getchar();


    switch (option)
    {
    case '1':
        printf("%d cal", 75);
        break;
    case '2':
        printf("%d cal", 110);
        break;
    case '3':
        printf("%d cal", 170);
        break;
    case '4':
        printf("%d cal", 200);
        break;
    default:
        printf("opção inválida!");
        break;
    }
};

void bebidas()
{
    int option;
    printf("1 - Chá\n");
    printf("2 - Suco de laranja\n");
    printf("3 - Suco de melão\n");
    printf("4 - Refrigerante diet\n");
    option = getchar();


    switch (option)
    {
    case '1':
        printf("%d cal", 20);
        break;
    case '2':
        printf("%d cal", 70);
        break;
    case '3':
        printf("%d cal", 100);
        break;
    case '4':
        printf("%d cal", 65);
        break;
    default:
        printf("opção inválida!");
        break;
    }
};

void showCalories() 
{
    int option;
    clearBuffer();
    printf("escolha um prato\n");
    printf("1. pratos \n");
    printf("2. sobremesas \n");
    printf("3. bebidas \n");

    option = getchar();
    clearBuffer();

    switch(option)
    {
        case '1':
            pratos();
            break;
        case '2':
            sobremesas();
            break;
        case '3':
            bebidas();
            break;
        default:
            printf("opção inválida!");
            break;    
    }
};

int main()
{
    int option;
    printf("Escolha uma opção...\n");
    printf("1 - checar DDD\n");
    printf("2 - escolher itens do menu\n");
    printf("3 - mostrar calorias\n");

    option = getchar();

    switch (option)
    {
    case '1':
        checkDDD();
        break;
    case '2':
        printf("Escolha uma opção do menu: \n");
        callMenu();
        break;
    case '3':
        showCalories();
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
        callMenu();
        break;
    case 'n':
    case 'N':
        printf("preço total: %.2f", price);
        return;
    default:
        break;
    }
}