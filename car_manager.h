class CarManager {

    private: 

        int num_of_cars;
        Car* inventory[1000]; 
        SoldCar* sold_cars[200]; 


    public: 

    CarManager (int num_of_cars, Car* inventory[], SoldCars* sold_cars);
    ~CarManager();

    int get_num_of_cars ();
    void set_num_of_cars (int num_of_cars);

    Car* get_inventory ();
    void set_inventory (Car* inventory[]);

    SoldCars* get_sold_cars ();
    void set_sold_cars (SoldCars* sold_cars[]);

    void func1 (Car* inventory);


    void func2 ();
        
    
    void func3 ();
    
    
    void func4 ();


    void func5 ();
};