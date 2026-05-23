class SoldCar {

    private: 

        Client *client_obj;
        Car *car_obj;
        int car_purchase_date;

    public: 
        
        Client* get_client_obj() const;
        void set_client_obj(Client* client_obj);
    
        Car* get_car_obj() const;   
        void set_car_obj(Car* car_obj);

        int get_car_purchase_date() const;
        void set_car_purchase_date(int car_purchase_date);  

        void print_sold_cars();

};
