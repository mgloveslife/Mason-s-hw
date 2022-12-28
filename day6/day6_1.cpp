//
// Created by 10373 on 2022/12/23.
//
//
// Created by 10373 on 2022/12/23.
//

#include <iostream>

class Tricycle
{
public:
    Tricycle(int initialAge);
    ~Tricycle();
    int getSpeed();
    void setSpeed(int speed);
    void pedal();
    void brake();
private:
    int speed;
};

// constructor for the object
Tricycle::Tricycle(int initialSpeed)
{
    setSpeed(initialSpeed);
}

// destructor for the object
Tricycle::~Tricycle()
{
    // do nothing
}

// get the trike's speed
int Tricycle::getSpeed()
{
    return speed;
}

// set the trike's speed
void Tricycle::setSpeed(int newSpeed)
{
    if (newSpeed >= 0)
    {
        speed = newSpeed;
    }
}

// pedal the trike
void Tricycle::pedal()
{
    setSpeed(speed + 1);
    std::cout << "\nPedaling; tricycle speed " << getSpeed() << " mph\n";
}

// apply the brake on the trike
void Tricycle::brake()
{
    setSpeed(speed - 1);
    std::cout << "\nBraking; tricycle speed " << getSpeed() << " mph\n";
}

// create a trike and ride it
int main()
{
    std :: cout << "\n first trike" "\n";
    Tricycle wichita(6);
    wichita.pedal();
    wichita.pedal();
    wichita.brake();
    wichita.brake();
    wichita.brake();



// second trike

    std :: cout << "\n second trike" "\n";

    Tricycle wichita2(5);
    wichita2.pedal();
    wichita2.brake();
    wichita2.pedal();
    wichita2.pedal();
    wichita2.brake();
    int speed= wichita2.getSpeed();
    while ( speed>0) {
        wichita2.brake();
        speed--;
    }
}