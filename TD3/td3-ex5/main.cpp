#include <iostream>
using namespace std;

const int MAX_SIZE = 100; // Taille maximale de la pile

class Pile {
private:
    int elements[MAX_SIZE]; // Tableau pour stocker les éléments de la pile
    int top; // Indice du sommet de la pile

public:
    // Constructeur
    Pile() {
        top = -1; // Initialise le sommet de la pile à -1 (pile vide)
    }

    // Fonction pour empiler un élément sur la pile
    void push(int element) {
        if (top >= MAX_SIZE - 1) {
            cout << "La pile est pleine, impossible d'ajouter l'élément." << endl;
        } else {
            elements[++top] = element; // Incrémente top puis ajoute l'élément à cet indice
        }
    }

    // Fonction pour dépiler un élément de la pile
    void pop() {
        if (top < 0) {
            cout << "La pile est vide, impossible de dépiler." << endl;
        } else {
            cout << "Élément dépilé : " << elements[top--] << endl; // Affiche et décrémente top
        }
    }
};

int main() {
    Pile p1, p2; // Crée deux piles

    // Empile des valeurs sur p1
    p1.push(10);
    p1.push(20);
    p1.push(30);

    // Empile des valeurs sur p2
    p2.push(5);
    p2.push(15);

    // Dépile les éléments pour p1
    p1.pop();
    p1.pop();
    p1.pop();
    p1.pop(); // Essaie de dépiler quand la pile est déjà vide

    // Dépile les éléments pour p2
    p2.pop();
    p2.pop();
    p2.pop(); // Essaie de dépiler quand la pile est déjà vide

    return 0;
}
