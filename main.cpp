#include "date.h"
#include "client.h"     
#include "car.h"     
#include "sold_car.h"     
#include "car_manager.h"     



int main () {

    Car* car1  = new Car("Toyota",   "Red",    "SN001", 2023, 15000,  21000);
    Car* car2  = new Car("Honda",    "Blue",   "SN002", 2021, 32000,  18000);
    Car* car3  = new Car("Ford",     "Black",  "SN003", 2022, 20000,  25000);
    Car* car4  = new Car("BMW",      "White",  "SN004", 2020, 45000,  35000);
    Car* car5  = new Car("Mazda",    "Grey",   "SN005", 2019, 60000,  14000);
    Car* car6  = new Car("Chevrolet","Silver", "SN006", 2024, 5000,   30000);
    Car* car7  = new Car("Nissan",   "Green",  "SN007", 2018, 80000,  11000);
    Car* car8  = new Car("Hyundai",  "Orange", "SN008", 2022, 27000,  17000);
    Car* car9  = new Car("Kia",      "Brown",  "SN009", 2021, 38000,  15000);
    Car* car10 = new Car("Audi",     "Yellow", "SN010", 2023, 12000,  40000);






















    
    delete car1;
    delete car2;
    delete car3;
    delete car4;
    delete car5;
    delete car6;
    delete car7;
    delete car8;
    delete car9;
    delete car10;



}    
