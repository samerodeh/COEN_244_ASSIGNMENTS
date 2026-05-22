#include "client_request.h"


ClientRequest::ClientRequest(Client *client_obj, Car *car_obj) 
             : client_obj(client_obj), car_obj(car_obj)
             {
             }

ClientRequest::~ClientRequest() {}

void ClientRequest::print_client_request() const {
    cout << "client request info: " << client_obj->print_client()
         << "model year: " << car_obj->get_car_model_year() 
         << "price: " << car_obj->get_car_price()
         << "milage: " << car_obj->get_car_milage()

}



