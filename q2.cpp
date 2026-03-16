#include <iostream>

using namespace std;

class Character{

    protected:
        int health, damage;

    public:
        Character(int h, int d) : health(h), damage(d) {}

        void Display(){
            cout << "Health: " << health << "\nDamage: " << damage << endl;
        }

};

class Player : public Character{

    public:
        Player(int h, int d) : Character(h, d) {}

        void Display(){
            cout << "Player Stats: " << endl;
            Character::Display();
        }

};

class Enemy : public Character{

    public:
        Enemy(int h, int d) : Character(h, d) {}

        void Display(){
            cout << "Enemy Stats: " << endl;
            Character::Display();
        }

};

class Wizard : public Player{

    private:
        int magic_power;
        string spell;

    public:
        Wizard(int h, int d, int m, string s) : Player(h, d) , magic_power(m), spell(s) {}
        
        void Display(){
            cout << "Wizard Stats: " << endl;
            Player::Display();
            cout << "Magic Power: " << magic_power << "\nSpell: " << spell << endl;
        }

};

int main(){

    Wizard W(100, 5, 75, "BOOM!");
    W.Display();

    return 0;
}
