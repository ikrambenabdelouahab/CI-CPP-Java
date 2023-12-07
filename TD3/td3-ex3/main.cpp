#include <iostream>
#include <string>
using namespace std;

class Animal {
    protected:
        string name;
        int age;
    public:
        void set_value(string n, int a) {
            name = n;
            age = a;
        }
};

class Zebra : public Animal {
    public:
        void Afficher() {
            cout<<"Zebra - Name: "<<name<<", Age: "<<age<<", Origin: Africa"<<endl;
        }
};

class Dolphin : public Animal {
    public:
        void Afficher() {
            cout<<"Dolphin - Name: "<<name<<", Age: "<<age<<", Origin: Ocean"<<endl;
        }
};

int main() {
    Zebra zebra;
    Dolphin dolphin;
    zebra.set_value("Stripes", 5);
    dolphin.set_value("Flipper", 10);
    zebra.Afficher();
    dolphin.Afficher();
    return 0;
}
