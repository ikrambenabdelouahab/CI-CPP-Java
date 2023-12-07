/*----- Utilisation des fonctions membres ------*/
/*#include <iostream>
using namespace std;

class vecteur3d {
    float x, y, z;
public:
    vecteur3d(float c1 = 0.0, float c2 = 0.0, float c3 = 0.0) {
        x = c1;
        y = c2;
        z = c3;
    }
    // Fonction membre pour l'opérateur ==
    bool operator==(vecteur3d v) {
        return (x == v.x && y == v.y && z == v.z);
    }
    // Fonction membre pour l'opérateur !=
    bool operator!=(vecteur3d v) {
        return !(x == v.x && y == v.y && z == v.z);
    }
};

int main() {
    vecteur3d v1(1.0, 2.0, 3.0);
    vecteur3d v2(1.0, 2.0, 3.0);
    vecteur3d v3(4.0, 5.0, 6.0);
    cout << "v1 == v2 : " << (v1 == v2) << endl; // Devrait afficher 1 (true)
    cout << "v1 != v3 : " << (v1 != v3) << endl; // Devrait afficher 1 (true)
    return 0;
}*/
/* ------ Utilisation des fonctions amies ------- */
#include <iostream>
using namespace std;

class vecteur3d {
    float x, y, z;

public:
    vecteur3d(float c1 = 0.0, float c2 = 0.0, float c3 = 0.0) {
        x = c1;
        y = c2;
        z = c3;
    }
    friend bool operator==(vecteur3d v1, vecteur3d v2);
    friend bool operator!=(vecteur3d v1, vecteur3d v2);
};
bool operator==(vecteur3d v1, vecteur3d v2) {
    return (v1.x == v2.x && v1.y == v2.y && v1.z == v2.z);
}
bool operator!=(vecteur3d v1, vecteur3d v2) {
    return !(v1 == v2);
}
int main() {
    vecteur3d v1(1.0, 2.0, 3.0);
    vecteur3d v2(1.0, 2.0, 3.0);
    vecteur3d v3(4.0, 5.0, 6.0);

    cout << "v1 == v2 : " << (v1 == v2) << endl; // Devrait afficher 1 (true)
    cout << "v1 != v3 : " << (v1 != v3) << endl; // Devrait afficher 1 (true)

    return 0;
}
