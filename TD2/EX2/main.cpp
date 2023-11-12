/*Exercice 2
Réaliser une classe C++ "vecteur3d" permettant de manipuler des vecteurs à 3 composantes (de type float). On y prévoira :
-- un constructeur, avec des valeurs par défaut (0),
-- une fonction d’affichage des 3 composantes du vecteur, sous la forme : (x, y, z)
-- une fonction permettant d’obtenir la somme de 2 vecteurs ;
-- une fonction permettant d’obtenir le produit scalaire de 2 vecteurs.
-- une fonction coincide permettant de savoir si 2 vecteurs ont mêmes composantes.
-- une fonction qui renvoie la norme du vecteur
-- une fonction nommée normax permettant d’obtenir, parmi deux vecteurs, celui qui a la plus grande norme.
*/
#include <iostream>
#include <cmath>
using namespace std;

class Vecteur3d {
private:
    float x, y, z;

public:
    // Constructeur avec des valeurs par défaut (0)
    Vecteur3d(float x = 0.0, float y = 0.0, float z = 0.0) {
        this->x = x;
        this->y = y;
        this->z = z;
    }

    // Affichage des composantes du vecteur
    void afficher() {
        cout << "(" << x << ", " << y << ", " << z << ")";
    }

    // Somme de deux vecteurs
    Vecteur3d somme(Vecteur3d autre) {
        return Vecteur3d(x + autre.x, y + autre.y, z + autre.z);
    }

    // Produit scalaire de deux vecteurs
    float produitScalaire(Vecteur3d autre) {
        return x * autre.x + y * autre.y + z * autre.z;
    }

    // Vérifie si deux vecteurs ont les mêmes composantes
    bool coincide(Vecteur3d autre) {
        return (x == autre.x) && (y == autre.y) && (z == autre.z);
    }
    // Norme du vecteur
    float norme() {
        return sqrt(x * x + y * y + z * z);
    }
    // Comparaison de normes entre deux vecteurs
    bool normESTmax(Vecteur3d autre) {
        if (norme() >= autre.norme()) {
            return true;
        } else {
            return false;
        }
    }
};

int main() {
    Vecteur3d vecteur1(1.0, 2.0, 3.0);
    Vecteur3d vecteur2(4.0, 5.0, 6.0);

    cout << "Vecteur 1 : ";
    vecteur1.afficher();
    cout << endl;

    cout << "Vecteur 2 : ";
    vecteur2.afficher();
    cout << endl;

    cout << "Somme de vecteur1 et vecteur2 : ";
    Vecteur3d somme = vecteur1.somme(vecteur2);
    somme.afficher();
    cout << endl;

    cout << "Produit scalaire de vecteur1 et vecteur2 : " << vecteur1.produitScalaire(vecteur2) << endl;

    cout << "Les vecteurs coincident : " << (vecteur1.coincide(vecteur2) ? "Oui" : "Non") << endl;

    cout << "Norme de vecteur1 : " << vecteur1.norme() << endl;

    cout << "Le vecteur avec la plus grande norme : ";
    bool maxNorme = vecteur1.normESTmax(vecteur2);
    cout << (maxNorme? "vecteur1":"vecteur2") << endl;

    return 0;
}
