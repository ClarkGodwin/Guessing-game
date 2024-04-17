#include <stdio.h>
#include <time.h>

void lh()
{
    printf("\t______________________________\n");
}
int main()
{
    srand(time(NULL));
    unsigned int nbr1=rand()%100, nbr2=rand()%200,nbrf=0,N,i=1,u,rep;
    lh();
    printf("\t         GUESSING GAME        \n");
    lh();
    printf(" Bienvenue dans ce jeu de hasard \n Voici les differents niveaux existants : \n Niveau 1:0-100\n Niveau 2:0-200\n");
    lh();
    printf("\t     BIENVENU AU  NIVEAU 1    \n");
    lh();
    printf(" Un nombre au hasard a ete choisi, devinez-le en au plus 6 coups: ");
    nbrf=6;
    do
    {
        scanf("%u",&N);
        if(N == nbr1)
        {
            printf("\n BRAVO VOUS AVEZ REUSSSI EN %u COUP(s)\n",i);
            break;
        }
        else if (N < nbr1)
        {
            printf("\n Plus grand que ca, il vous reste %i coup(s)", 6-i);
        }
        else if (N > nbr1)
        {
            printf("\n Plus p'tit que ca, il vous reste %i coup(s)", 6-i);
        }
        if(i == 6 && N != nbr1)
        {
            printf("\n Vous avez perdu\n\n");
        }
        i++;
    }while (i <= 6);
    if (i <= 4)
    {
        u=1;
        printf("\n Voulez-vous passer au niveau suivant(1 pour oui, 0 pour non): ");
        scanf("%i", &rep);
        if (rep == 1)
        {
            lh();
            printf("\t     BIENVENU AU  NIVEAU 2    \n");
            lh();
            printf("\n Cette fois ci, devinez ce nombre en au plus 10 coups: ");
                do
                {
                    scanf("%u",&N);
                    if(N == nbr2)
                    {
                        printf("BRAVO VOUS AVEZ REUSSSI EN %u COUP(s)\n", 10-u);
                        break;
                    }
                    else if (N < nbr2)
                    {
                        printf("\n Plus grand que ca, il vous reste %i coup(s)", 10-u);
                    }
                    else if (N > nbr2)
                    {
                        printf("\n Plus petit que ca, il vous reste %i coup(s)", 10-u);
                    }
                    if(u == 10 && N != nbr2)
                    {
                        printf("\n Vous avez perdu\n\n");
                    }
                    u++;
            }while (u <= 10);
        }
    }
    else
    {
        printf(" Desole mais il faut reussir en au moins 4 coups pour passer au niveu suivant\n\n");
    }
    return 0;
}
