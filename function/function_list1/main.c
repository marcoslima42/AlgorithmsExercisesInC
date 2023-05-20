#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//funcoes menu
void menu()
{
    printf("\n\tFUNCOES | LISTA 1\n");
    for(int i=0; i<=33; i++)
    {
        printf("%c", 220);
        Sleep(1);
    }
    printf("\n1.Soma de N");
    printf("\n2.Conversao para segundos");
    printf("\n3.Volume da esfera");
    printf("\n4.Fatorial");
    printf("\n5.Sair do Programa\n");
    printf("\nESCOLHA UMA OPCAO: ");
}
void invalido(int *n)
{
    printf("\nNumero invalido, digite novamente: ");
    scanf("%d", *n);
}
//funcoes da opcao 1
void somar(float n)
{
    int soma=0;
    int cont=1;

    while(cont<=n)
    {
        soma=soma+cont;
        cont++;
    }
    printf("\nA soma dos N's numeros de 1 a %.2f e %d", n, soma);
}
void validar1(float *x)
{
    int number=*x;
    while(*x<=0 || *x!=number)
    {
        printf("\n\nNumero invalido, digite novamente um");
        if(*x<=0)
        {
            printf(" numero positivo:\n ");
        }
        else
        {
            printf(" numero inteiro:\n");
        }
        scanf("%f", &*x);
        number=*x;
    }
}
//funcoes da opcao 2
int validar2 (int n)
{
    while(n<0)
    {
        printf("\nNumero invalido, digite novamente: \n");
        scanf("%d", &n);
    }
    return(n);
}
void conversao (int *h, int *m)
{
    *h=*h*3600;
    *m=*m*60;
}
//funcoes da opcao 3
void scan(float *n)
{
    printf("\nDigite o raio: ");
    scanf("%f", &*n);
}
float validar3(float n)
{
    while (n < 0)
    {
        printf("\nNumero invalido, digite novamente: ");
        scanf("%f", &n);
    }
    return (n);
}
void volume(float r)
{
    float volume = 0, pi = 3.14;
    volume = (4 * pi * (pow(r, 3))) / 3;
    printf("O volume da esfera e %.2f", volume);
}


int main()
{
    int opc=0, novamente;

    while(opc!=5)
    {
        menu();
        scanf("%d", &opc);

        if(opc<0||opc>5)
            invalido(&opc);
        else if(opc==1)
        {
            novamente=1;
            while(novamente==1)
            {
                system("cls");
                float n=0;
                printf("\nSOMA DE N\n");
                printf("=========\n");
                printf("\nDigite um numero inteiro e positivo: ");
                scanf("%f", &n);
                validar1(&n);
                somar(n);

                printf("\n\nDeseja executar novamete? Se sim digite 1 se nao insira qualquer tecla: ");
                scanf("%d", &novamente);
                system("cls");
            }
        }
        else if(opc==2)
        {
            novamente=1;
            while(novamente==1)
            {
                system("cls");
                int horas, min, seg;
                printf("\nCONVERSAO DE HORAS E MINUTOS PARA SEGUNDOS");
                printf("\nSomente numeros inteiros sao aceitos, se real for inserido sua parte interia sera armazenada");
                printf("\n=============================================================================================\n");
                printf("\nDigite as horas: ");
                scanf("%d", &horas);
                horas=validar2(horas);
                printf("\nDigite os minutos: ");
                scanf("%d", &min);
                min=validar2(min);
                printf("\nDigite os segundos: ");
                scanf("%d", &seg);
                seg=validar2(seg);
                conversao(&horas, &min);
                printf("O resultado final e %d", horas+min+seg);

                printf("\n\nDeseja executar novamete? Se sim digite 1 se nao insira qualquer tecla: ");
                scanf("%d", &novamente);
                system("cls");
            }
        }
        else if(opc==3)
        {
            novamente=1;
            while(novamente==1)
            {
                float raio;
                printf("\nCalculeo volume da esfera");
                printf("\n=========================\n");
                scan(&raio);
                raio = validar3(raio); // testar conio(getch) e windows.h(sleep)
                printf("\nTecle ENTER para processar...\n");
                getch();
                volume(raio);

                printf("\n\nDeseja executar novamete? Se sim digite 1 se nao insira qualquer tecla: ");
                scanf("%d", &novamente);
                system("cls");
            }
        }
        else if(opc==4)
        {

            novamente=1;
            while(novamente==1)
            {
                printf("Voce entro na opcao 4");

                printf("\n\nDeseja executar novamete? Se sim digite 1 se nao insira qualquer tecla: ");
                scanf("%d", &novamente);
                system("cls");
            }
        }
    }

    return 0;
}

