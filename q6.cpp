#include <iostream>
#include <string>
using namespace std;

class Device {
    protected:
        string brand, model;
    public:
        Device(string b, string m) : brand(b), model(m) {}
        void Display() {
            cout << "Brand : " << brand << endl;
            cout << "Model : " << model << endl;
        }
};

class Smartphone : virtual public Device {
    protected:
        int simSlots;
    public:
        Smartphone(string b, string m, int s)
            : Device(b, m), simSlots(s) {}
        void Display() {
            Device::Display();
            cout << "SIM Slots      : " << simSlots << endl;
        }
};

class Tablet : virtual public Device {
    protected:
        bool stylusSupport;
    public:
        Tablet(string b, string m, bool st)
            : Device(b, m), stylusSupport(st) {}
        void Display() {
            Device::Display();
            cout << "Stylus Support : " << (stylusSupport ? "Yes" : "No") << endl;
        }
};

class HybridDevice : public Smartphone, public Tablet {
    public:
        HybridDevice(string b, string m, int s, bool st)
            : Device(b, m), Smartphone(b, m, s), Tablet(b, m, st) {}
        void Display() {
            cout << "/-/-/-/-/-/- Hybrid Device Stats /-/-/-/-/-/-" << endl;
            Device::Display();
            cout << "SIM Slots      : " << simSlots << endl;
            cout << "Stylus Support : " << (stylusSupport ? "Yes" : "No") << endl;
            cout << "/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-" << endl;
        }
};

int main() {
    HybridDevice HD("Samsung", "Galaxy Ultra Tab", 2, true);
    HD.Display();
    return 0;
}
