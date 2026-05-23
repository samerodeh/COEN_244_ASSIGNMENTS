#include "car_manager.h"
#include <algorithm>


void CarManager::CarManager () {


}

void CarManager::~CarManager() {


}

void CarManager::get_num_of_cars () {}

void CarManager::set_num_of_cars () {}

void CarManager::get_inventory() {}

void CarManager::set_inventory() {}

void CarManager::get_sold_cars() {}

void CarManager::set_sold_cars() {}


void CarManager::insert_new_car (Car* car) {

    for (int i = 0; i < 1000; i++) {
        if (inventory[i] == nullptr) {
            inventory[i] = car;
            num_of_cars++;
            break;
        }
    }
}

Car CarManager::func2(ClientRequest request) {
    Car desired = request.get_car_obj();
    Client client = request.get_client_obj();

    for (int i = 0; i < 1000; i++) {
        if (inventory[i] == nullptr) continue;

        if (inventory[i]->get_car_model()     == desired.get_car_model()     &&
            inventory[i]->get_car_price()      <= desired.get_car_price()     &&
            inventory[i]->get_car_milage()     <= desired.get_car_milage()    &&
            inventory[i]->get_car_model_year() >= desired.get_car_model_year()) {

            SoldCar* sold = new SoldCar(client, *inventory[i], 0);
            for (int j = 0; j < 200; j++) {
                if (sold_cars[j] == nullptr) {
                    sold_cars[j] = sold;
                    break;
                }
            }
            Car result = *inventory[i];
            delete inventory[i];
            inventory[i] = nullptr;
            num_of_cars--;
            return result;
        }
    }

    return Car("", "", "", 0, 0, 0);
}

void CarManager::func3() {


}

void CarManager::func4() {

}

void CarManager::func5() {


}



