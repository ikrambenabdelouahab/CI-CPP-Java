/* Exercice 3
Réaliser une classe point permettant de manipuler un point d'un plan :
-- un point est définit par ses coordonnées x et y (des membres privés)
-- un constructeur (vous pouvez également implémenter les trois types de constructeur)
-- une fonction membre déplace effectuant une translation définie par ses deux arguments dx et dy (double)
-- une fonction membre affiche se contentant d'afficher les coordonnées cartésiennes du point.
-- une fonction membre saisir se contentant de saisir les coordonnées cartésiennes du point.
-- une fonction membre distance effectuant calculant la distance entre deux point.
-- une fonction membre milieu donnant le milieu d'un segment.
Ecrivez un petit programme d'essai (main) gérant la classe point.*/
#include <iostream>
#include <cmath>
using namespace std ;

class Point {
private:
    double x;
    double y;

public:
    // Constructeur par défaut
    Point() : x(0.0), y(0.0) {}
    // Constructeur paramétré
    Point(double xCoord, double yCoord) : x(xCoord), y(yCoord) {}

    // Fonction membre pour déplacer le point
    void deplace(double dx, double dy) {
        x += dx;
        y += dy;
    }

    // Fonction membre pour afficher les coordonnées
    void affiche() {
        cout << "Coordonnées du point : (" << x << ", " << y << ")" << endl;
    }

    // Fonction membre pour saisir les coordonnées
    void saisir() {
        cout << "Entrez la coordonnée x : ";
        cin >> x;
        cout << "Entrez la coordonnée y : ";
        cin >> y;
    }

    // Fonction membre pour calculer la distance entre deux points
    double distance( Point other) const {
        double dx = x - other.x;
        double dy = y - other.y;
        return sqrt(dx * dx + dy * dy);
    }

    // Fonction membre pour trouver le milieu d'un segment
    Point milieu(Point other) const {
        double mx = (x + other.x) / 2.0;
        double my = (y + other.y) / 2.0;
        return Point(mx, my);
    }
};

int main() {
    Point p1, p2;

    cout << "Point 1 : ";
    p1.saisir();
    cout << "Point 2 : ";
    p2.saisir();

    p1.affiche();
    p2.affiche();

    double dist = p1.distance(p2);
    cout << "Distance entre les deux points : " << dist << endl;

    Point milieu = p1.milieu(p2);
    cout << "Milieu du segment : ";
    milieu.affiche();

    return 0;
}
