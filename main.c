#include <stdio.h>
#include <time.h>

void lh()
{
    printf("\t______________________________\n");
}
int main()
{
    srand(time(NULL));
    unsigned int nbr1=rand()%100, nbr2=rand()%200,nbrf=0,N,i=1,u;
    char rep;
    printf("%u",nbr1);
    lh();
    printf("\t         GUESSING GAME        \n");
    lh();
    printf(" Bienvenue dans ce jeu de hasard \n Voici les differents niveaux existants : \n Niveau 1:0-100\n Niveau 2:0-200\n");
    lh();
    printf("\t     BIENVENU AU  NIVEAU 1    \n");
    lh();
    printf(" Un nombre au hasard a ete choisi, devinez-le en au plus 6 coups: \n");
    nbrf=6;
    do
    {
        scanf("%u",&N);
        if(N == nbr1)
        {
            printf("BRAVO VOUS AVEZ REUSSSI EN %u COUP(s)\n",i);
            break;
        }
        else if (N < nbr1)
        {
            printf(" TROP PETIT\n");
        }
        else if (N > nbr1)
        {
            printf(" TROP GRAND\n");
        }
        if(i == 6 && N != nbr1)
        {
            printf("VOUS AVEZ PERDU\n\n");
        }
        i++;
    }while (i <= 6);
    if (i <= 4)
    {
        u=1;
        printf("Voulez-vous passer au niveau suivant(o\\n): ");
        scanf("%c", &rep);
        if (rep == 'o' || rep == 'O')
        {
            lh();
            printf("\t     BIENVENU AU  NIVEAU 2    \n");
            lh();
            printf("Cette fois ci, devinez ce nombre en au plus 4 coups: \n");
            nbrf=4;
                do
                {
                    scanf("%u",&N);
                    if(N == nbr2)
                    {
                        printf("BRAVO VOUS AVEZ REUSSSI EN %u COUP(s)\n",i);
                        break;
                    }
                    else if (N < nbr2)
                    {
                        printf(" TROP PETIT\n");
                    }
                    else if (N > nbr2)
                    {
                        printf(" TROP GRAND\n");
                    }
                    if(u == 4 && N != nbr2)
                    {
                        printf("VOUS AVEZ PERDU\n\n");
                    }
                    i++;
            }while (u <= 4);
        }
    }
    else
    {
        printf(" Desole mais il faut reussir en au moins 4 coups pour passer au niveu suivant\n\n");
    }
    return 0;
}
