#include <stdio.h>
#include <stdin.h>

void main(void)
{
 return 0;
}

int verifnom (char* chaine)
{
    int i=0;
    while (chaine[i] != '\0')
    {
        if (chaine[0] == 32)
        {
             printf("Erreur! Votre nom ne peut commencer par un espace! Veuillez r%cintroduire votre nom: ",130);
             gets (chaine);         
        }
        
        else if (chaine[i]>=65 && chaine[i]>=90 || chaine[i]==32)
        {
             return 1;
        }
        else
        {
            return 0;
        }
        i++;
    }
}
