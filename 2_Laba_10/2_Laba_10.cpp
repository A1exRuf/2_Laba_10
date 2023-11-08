#include "CarArray.h"

int main()
{
    Car* car1 = new Car();
    car1->setBrand("Audi");
    car1->setPower(310);
    car1->setPrice(12599.99);
    car1->printInfo();

    Car* car2 = new Car("Toyota", 280, 6200.00);
    car2->printInfo();

    Car* car3 = new Car(*car2);
    car3->setPrice(5999.98);
    car3->printInfo();

    cout << "\n";

    CarArray carArray(3);
    carArray.input();
    carArray.output();
    carArray.table();
}
