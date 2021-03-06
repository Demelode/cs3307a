#include <QCoreApplication>
#include <QDebug>
#include "car.h"
#include "person.h"

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    Car* car1 = new Car(&app);
    Car* car2 = new Car(&app);

    Person* p1 = new Person("Joe", &app);
    Person* p2 = new Person("Jane", &app);

    p1->setCar(car1);
    p2->setCar(car2);

    qDebug() << "Setting gas level of car 1 to 50%" << endl;
    car1->setGasLevel(50);

    qDebug() << "Setting gas level of car 1 to 15%" << endl;
    car1->setGasLevel(15);

    qDebug() << "Setting gas level of car 2 to 24%" << endl;
    car2->setGasLevel(24);
}
