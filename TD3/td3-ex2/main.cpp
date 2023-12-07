#include <iostream>
using namespace std;

class Shape {
protected:
    int largeur;
    int hauteur;

public:
    Shape(int l, int h) : largeur(l), hauteur(h) {}

    virtual double area() = 0; // Méthode virtuelle pure => classe abstraite
};

class Triangle : public Shape {
public:
    Triangle(int l, int h) : Shape(l, h) {}

    double area() {
        return 0.5 * largeur * hauteur ; // Formule pour l'aire d'un triangle
    }
};

class Rectangle : public Shape {
public:
    Rectangle(int l, int h) : Shape(l, h) {}

    double area() {
        return largeur * hauteur ; // Formule pour l'aire d'un rectangle
    }
};

int main() {
    Triangle triangle(5, 2); // Création d'un objet Triangle
    Rectangle rectangle(4, 3); // Création d'un objet Rectangle

    // Appel des fonctions area() pour calculer les aires respectives
    cout << "Aire du triangle = " << triangle.area() << endl;
    cout << "Aire du rectangle = " << rectangle.area() << endl;

    return 0;
}
