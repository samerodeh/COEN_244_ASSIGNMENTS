class ClientRequest {

    private:    

        Client *client_obj;
        Car *car_obj;

    public: 

        ClientRequest(Client *client_obj, Car *car_obj);

        ~ClientRequest();

        Client *get_client_obj() {return client_obj;}
        void set_client_obj(Client *client_obj) {this->client_obj = client_obj;}

        Car *get_car_obj() {return car_obj;}
        void set_car_obj(Car *car_obj) {this->client_obj = client_obj;}

        void print_client_request() const;

};