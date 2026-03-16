#include <iostream>
#include <string>
using namespace std;

class Position {
    protected:
        float x, y, z;
    public:
        Position(float x, float y, float z) : x(x), y(y), z(z) {}
        void Display() {
            cout << "Position : (" << x << ", " << y << ", " << z << ")" << endl;
        }
};

class Health {
    protected:
        int health;
    public:
        Health(int h) : health(h) {}
        void Display() {
            cout << "Health   : " << health << endl;
        }
};

class Character : public Position, public Health {
    private:
        string name;
    public:
        Character(string n, float x, float y, float z, int h)
            : Position(x, y, z), Health(h), name(n) {}
        void Display() {
            cout << "/-/-/-/-/-/- Character Stats /-/-/-/-/-/-" << endl;
            cout << "Name     : " << name << endl;
            Position::Display();
            Health::Display();
            cout << "/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/" << endl;
        }
};

int main() {
    Character C("Aragorn", 10.5, 20.3, 5.0, 100);
    C.Display();
    return 0;
}
