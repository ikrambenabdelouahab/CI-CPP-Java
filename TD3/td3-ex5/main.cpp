#include <iostream>
using namespace std;

const int MAX_SIZE = 100; // Taille maximale de la pile

class Pile {
private:
    int elements[MAX_SIZE]; // Tableau pour stocker les �l�ments de la pile
    int top; // Indice du sommet de la pile

public:
    // Constructeur
    Pile() {
        top = -1; // Initialise le sommet de la pile � -1 (pile vide)
    }

    // Fonction pour empiler un �l�ment sur la pile
    void push(int element) {
        if (top >= MAX_SIZE - 1) {
            cout << "La pile est pleine, impossible d'ajouter l'�l�ment." << endl;
        } else {
            elements[++top] = element; // Incr�mente top puis ajoute l'�l�ment � cet indice
        }
    }

    // Fonction pour d�piler un �l�ment de la pile
    void pop() {
        if (top < 0) {
            cout << "La pile est vide, impossible de d�piler." << endl;
        } else {
            cout << "�l�ment d�pil� : " << elements[top--] << endl; // Affiche et d�cr�mente top
        }
    }
};

int main() {
    Pile p1, p2; // Cr�e deux piles

    // Empile des valeurs sur p1
    p1.push(10);
    p1.push(20);
    p1.push(30);

    // Empile des valeurs sur p2
    p2.push(5);
    p2.push(15);

    // D�pile les �l�ments pour p1
    p1.pop();
    p1.pop();
    p1.pop();
    p1.pop(); // Essaie de d�piler quand la pile est d�j� vide

    // D�pile les �l�ments pour p2
    p2.pop();
    p2.pop();
    p2.pop(); // Essaie de d�piler quand la pile est d�j� vide

    return 0;
}
