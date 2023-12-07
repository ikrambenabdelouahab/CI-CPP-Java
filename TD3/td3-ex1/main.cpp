#include <iostream>
using namespace std;
class Mere {
    public:
    void display(){
        cout<<"Je suis la mere"<<endl;
    }
};

class Fille: public Mere {
    public:
    void display() {
        cout<<"Je suis la fille"<<endl;
    }
};

int main() {
    Fille f1 = Fille();
    f1.display();
    return 0;
}
