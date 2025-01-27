#include <iostream>
using namespace std;

class LightBulb {
private:
    bool isOn;

public:
    // Constructor
    LightBulb() : isOn(false) {}

    // Mutator methods
    void turnOn() {
        isOn = true;
    }

    void turnOff() {
        isOn = false;
    }

    // Accessor method
    bool getState() const {
        return isOn;
    }

    // Show method
    void show() const {
        if (getState()) {
            cout << "The light bulb is now ON." << endl;
        } else {
            cout << "The light bulb is now OFF." << endl;
        }
    }
};

int main() {
    LightBulb bulb;
    bulb.show(); // Check initial state

    bulb.turnOn();
    bulb.show(); // Check state after turning on

    bulb.turnOff();
    bulb.show(); // Check state after turning off

    return 0;
}
