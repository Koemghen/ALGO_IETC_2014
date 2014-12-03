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
        
        else if (chaine[i]>=65 && chaine[i]<=90 || chaine[i]==32)
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

int verifprenom (char* chaine)
{
    int i=0;
    while (chaine[i]!='\0')
    { 
        if(chaine[0]==32||chaine[0]==45)
        {
              printf("Erreur! Votre pr%cnom ne peut commencer par un espace ni par un tiret! R%cintroduisez votre nom:\n",130,130);
              gets(chaine);
        }           
        else if((chaine[i]>=65 && chaine[i]<=90) || chaine[i]==32 || chaine[i]==45)
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

int compatibildatenaissregnat(char *datenaiss, char *num_reg_nat)
{
    if(num_reg_nat[0]==datenaiss[8])
     if(num_reg_nat[1]==datenaiss[9])
      if(num_reg_nat[2]==datenaiss[3])
       if(num_reg_nat[3]==datenaiss[4])
        if(num_reg_nat[4]==datenaiss[0])
         if(num_reg_nat[5]==datenaiss[1]) 
            return 1;
         else return 0;
        else return 0;
       else return 0;
      else return 0;
     else return 0;
    else return 0;
}
         
