#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>


void sorteio() //REALIZA O SORTEIO DOS DADOS
{

    int ndado, i, v[5], rodada, t[5];

    //NÃO REPETE OS VALORES AO INICIAR
    srand(time(NULL));

    //REALIZA O SORTEIO E ARMAZENA NO VETOR
    for(i=0; i<5; i++)
    {
        ndado = rand() % 6;
        v[i] = ndado + 1;
    }

    //MOSTRA OS DADOS
    dado(v[0], v[1], v[2], v[3], v[4]);

    //PEDE PARA A PESSOA JOGAR DADOS NOVAMENTE
    rodada = 1;
    while(rodada<3)
    {
        //printf("RODADA %d", rodada);
        printf("Deseja jogar novamente quais dados: ");

        for(i=0; i<5; i++)
        {
            t[i] = getchar();
            getchar();
        }

        srand(time(NULL));
        for(i=0; i<5; i++)
        {
            if (t[i]=='S')
            {
                ndado = rand() % 6;
                v[i] = ndado;
            }
        }
        dado(v[0], v[1], v[2], v[3], v[4]);
        rodada++;
    }

}

void dado(int x1, int x2, int x3, int x4, int x5) //DESENHAR OS DADOS
{
    int i, j = 1, v[5];
    char d[35];

    v[0] = x1;
    v[1] = x2;
    v[2] = x3;
    v[3] = x4;
    v[4] = x5;

    for(i=0; i<5; i++)
    {
        printf("Dado %d: %d\n", i + 1, v[i]);
    }

    for(i=0; i<5; i++)
    {

        if (v[i] == 1)
        {
            d[j] = ' ';
            d[j+1] = ' ';
            d[j+2] = ' ';
            d[j+3] = 254;
            d[j+4] = ' ';
            d[j+5] = ' ';
            d[j+6] = ' ';
        }

        if (v[i] == 2)
        {
            d[j] = 254;
            d[j+1] = ' ';
            d[j+2] = ' ';
            d[j+3] = ' ';
            d[j+4] = ' ';
            d[j+5] = ' ';
            d[j+6] = 254;
        }

        if (v[i] == 3)
        {
            d[j] = 254;
            d[j+1] = ' ';
            d[j+2] = ' ';
            d[j+3] = 254;
            d[j+4] = ' ';
            d[j+5] = ' ';
            d[j+6] = 254;
        }

        if (v[i] == 4)
        {
            d[j] = 254;
            d[j+1] = 254;
            d[j+2] = ' ';
            d[j+3] = ' ';
            d[j+4] = ' ';
            d[j+5] = 254;
            d[j+6] = 254;
        }

        if (v[i] == 5)
        {
            d[j] = 254;
            d[j+1] = 254;
            d[j+2] = ' ';
            d[j+3] = 254;
            d[j+4] = ' ';
            d[j+5] = 254;
            d[j+6] = 254;
        }

        if (v[i] == 6)
        {
            d[j] = 254;
            d[j+1] = 254;
            d[j+2] = 254;
            d[j+3] = ' ';
            d[j+4] = 254;
            d[j+5] = 254;
            d[j+6] = 254;
        }

        j = j + 7;

    }


    printf(" ___________\t ___________\t ___________\t ___________\t ___________\n");
    printf("|           |\t|           |\t|           |\t|           |\t|           |\n");
    printf("|  %c     %c  |\t|  %c     %c  |\t|  %c     %c  |\t|  %c     %c  |\t|  %c     %c  |\n", d[1], d[2], d[8], d[9], d[15], d[16], d[22], d[23], d[29], d[30]);
    printf("|  %c  %c  %c  |\t|  %c  %c  %c  |\t|  %c  %c  %c  |\t|  %c  %c  %c  |\t|  %c  %c  %c  |\n", d[3], d[4], d[5], d[10], d[11], d[12], d[17], d[18], d[19], d[24], d[25], d[26], d[31], d[32], d[33]);
    printf("|  %c     %c  |\t|  %c     %c  |\t|  %c     %c  |\t|  %c     %c  |\t|  %c     %c  |\n", d[6], d[7], d[13], d[14], d[20], d[21], d[27], d[28], d[34], d[35]);
    printf("|___________|\t|___________|\t|___________|\t|___________|\t|___________|\n");

}

void placar()
{
}

int main ()
{
    //FUNÇÃO QUE SORTEIA OS DADOS
    sorteio();



    return 0;
}


