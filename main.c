#include <stdio.h>
float balance=0;
int main() {
    int choixaction=0;
    float deposit=0;
    float retrait=0;

    printf("Veuillez choisir l'action\n 1-Déposer\n 2-Retirer\n");
    scanf("%d",&choixaction);
    printf("Votre solde est de %0.2f\n",balance);
    switch (choixaction)
    {

        case 1:

            printf("Veuillez taper le montant à déposer\n");
            scanf("%f",&deposit);
            balance+=deposit;
            printf("Vous avez deposé %0.2f euros\n",deposit);
            break;

        case 2:
            printf("Veuillez taper le montant à retirer\n");
            scanf("%f",&retrait);
            if(balance>=retrait)
            {
                balance -= retrait;
                printf("Vous avez retiré %0.2f euros\n", retrait);
            }
            else
            {
                printf("retrait impossible fonds insuffisants\n");
            }
            break;

    }
    main(); //récursivité
}