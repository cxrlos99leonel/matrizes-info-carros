#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <string.h>

typedef struct
{
    char modelo[25];
    int anofab;
    int potencia;
    int fipe;
} carros;

int main ()
{
    carros lista[7]={"Volkswagen Golf GTI", 2015, 240, 131229,
                     "Peugeot 208", 2022, 118, 86140,
                     "Ford Ranger", 2015, 173, 85474,
                     "Kia Cerato Koup", 2012, 156, 61638,
                     "Fiat 500", 2017, 88, 64038,
                     "Toyota Corolla XRS", 2013, 153, 64136,
                     "Volkswagen Gol", 2014, 76, 34629};
    int i, n=1;

    setlocale(LC_ALL, "Portuguese");

    printf("Estoque da loja de carros...\n\n");

    for(i = 0; i < 7; i++)
    {
            printf("[%d] Modelo do carro: %s, Ano de fabricação: %d, Potência: %d cv, Valor na tabela FIPE: %d\n",
                    n, lista[i].modelo, lista[i].anofab, lista[i].potencia, lista[i].fipe);
            n++;
            Sleep(500);

    }
}
