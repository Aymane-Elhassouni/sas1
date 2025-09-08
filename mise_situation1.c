#include <stdio.h>
#include <string.h>
struct produit[50]{
    char nome[50];
    float prix;
    int quantite;
    int categorie;
};
void ajouterProduid(struct produit[],int nb_produits){
    printf("enter nombre de produits: ");
    scanf("%d",&nb_produits);
    printf("entier : 1 pour smartphone, 2 pour ordinateur, 3 pour accessoire\n");
    for(int i=0;i<nb_produits;i++){
        printf("enter nome de produit: ");
        scanf("%s",produit[i].nome);
        printf("enter prix de produit: ");
        scanf("%f",&produit[i].prix);
        if(produit[i].prix < 0){
            printf("enter prix de produit %d: ",i+1);
            scanf("%f",&produit[i].prix);
        }
        printf("enter quantite de produit: ");
        scanf("%d",&produit[i].quantite);
        if(produit[i].quantite <= 0){
            printf("enter quantite de produit %d: ",i+1);
            scanf("%d",&produit[i].quantite);
        }
        printf("enter categorie de produit %d:",i+1);
        scanf("%d",produit[i].categorie);
    }
}

void afficherInventaire(const struct Produit[], int nb_produits){
    for(int i=0;i<nb_produits;i++){
        printf("%d)\n",i+1);
        printf("%s| ",produit[i].nome);
        printf("%f| ",produit[i].prix);
        printf("%d| ",produit[i].quantite);
        printf("%d| ",produit[i].categorie);
        printf("\n");
    }
}

int rechercherProduit(const struct Produit[], int nb_produits, const char nom_recherche){
    int i;
    printf("enter le nome de produit va recherche");
    scanf("%s",nom_recherche);
    while(produit[i]){
        if(strcmp(produit[i].nome,nom_recherche == 0))
        return 0;
        else if(strcmp(produit[i].nome,nom_recherche != 0))
        return -1;
        i++
    }
}

void mettreAJourStock(struct Produit[], int index, int delta){
    while()
}

float calculerValeurTotale(const struct Produit inventaire[], int nb_produits){
    
}

void supprimerProduit(struct Produit inventaire[], int nb_produits, int index){
    int i;
    printf("enter id de produit doi supperimer: ");
    scanf("%d",&nb_produits);
    while(produit[i]){
        if(produit[i] == nb_produits)
        index = produit[i]-1;
    }
}
int main() {
    void ajouterProduid(produit inventaire[],nb_produits);

    return 0;
}