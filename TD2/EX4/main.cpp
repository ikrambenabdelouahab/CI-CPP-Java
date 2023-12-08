#include <iostream>

using namespace std;

class Test {
public:
    static int callCount;

    void call() {
        callCount++;
    }
};

// Initialisation de la variable statique
int Test::callCount = 0;

int main() {
    Test obj1, obj2;

    obj1.call();
    obj2.call();
    obj1.call();

    cout << "Nombre d'appels à la fonction 'call' : " << Test::callCount << endl;

    return 0;
}
