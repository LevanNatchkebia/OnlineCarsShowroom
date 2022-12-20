#include <iostream>
using namespace std;

class AbstractCar {
    protected:
    
    string CarName;
    string ModelName;
    int CarPrise;
    
    public:
    
    static int CarCount;
    
    AbstractCar (string CarName, string ModelName, int CarPrise) {
        this->CarName=CarName;
        this->ModelName=ModelName;
        this->CarPrise=CarPrise;
        CarCount++;
    }
    
    string getCarName() {
        return CarName;
    }
    
    void setCarName(string CarName){
        this-> CarName = CarName;
    }
    
    string getModelName() {
        return ModelName;
    }
    
    void setModelName(string ModelName){
        this->ModelName=ModelName;
    }
    
    int getCarPrise(){
       return CarPrise;
    }
    
    void setCarPrise(int CarPrise) {
        this->CarPrise = CarPrise;
    }
    
    void doorsopen() {
        cout<<CarName<<"'s door is open"<<endl;
    }
    
    void adjustseat() {
        cout<<CarName<<" seat is adjust"<<endl;
    }
    virtual void startEngine ()= 0;
    
    void connectmobile() {
        cout<<CarName<<" is connetcing to your mobile"<<endl;
    }
    
};
int AbstractCar::CarCount=0;

class MercedesBenz: public AbstractCar {
    public:
    
    MercedesBenz (string CarName, string ModelName, int CarPrise): AbstractCar (CarName, ModelName, CarPrise) {}
    
    void startEngine () {
        cout<<"Press strat button to star engine"<<endl;
    }
    
    void startEngine (string startMode){
        cout<<startMode<<" mode is activated"<<endl;
    }
};

class Ferrari: public AbstractCar {
    public:
    
    Ferrari (string CarName, string ModelName, int CarPrise): AbstractCar (CarName, ModelName, CarPrise) {}
    
     void startEngine () {
        cout<<"Press start button to star engine"<<endl;
    }
    
    void startEngine (string startMode){
        cout<<startMode<<" mode is activated"<<endl;
    }
};

class OnlineShowroom {
    string Name;
    
    public:
    
    static int SoldCarCount;
    
    OnlineShowroom (string Name) {
        this->Name = Name;
    }
    
    string getName() {
        return Name;
    }
    
    void setName(string Name) {
        this->Name = Name;
    }
    
    void SellCar () {
        cout<<"Online Showroom sold car to costumer"<<endl;
        SoldCarCount++;
    }
    
    void SellCar(MercedesBenz mercedes) {
        cout<<"Online Showroom sold "<<mercedes.getCarName()<<" "<<mercedes.getModelName() <<" to costumer for $"<<mercedes.getCarPrise()<<endl;
        SoldCarCount++;
    }
    
    void SellCar(Ferrari ferrari) {
        cout<<"Online Showroom sold "<<ferrari.getCarName()<<" "<<ferrari.getModelName() <<" to costumer for $"<<ferrari.getCarPrise()<<endl;
        SoldCarCount++;
    }
};
int OnlineShowroom::SoldCarCount = 0;

int main()
{
    MercedesBenz benz ("Mercedes-Benz", "GTS", 400000);
    Ferrari enzo ("Ferrari", "La Ferrari", 1420000);
    OnlineShowroom showroom("Showroom");
    
    // showroom.SellCar();
    // cout<<OnlineShowroom::SoldCarCount<<endl;
    // showroom.SellCar(benz);
    // cout<<showroom.SoldCarCount<<endl;
    // showroom.SellCar(enzo);
    // cout<<showroom.SoldCarCount<<endl;
    
    // benz.startEngine();
    // benz.startEngine("Start");
    
    // enzo.startEngine();
    // enzo.startEngine("Sport");
    
    // benz.doorsopen();
    // enzo.doorsopen();
    
    // benz.adjustseat();
    // enzo.adjustseat();
    
    // benz.connectmobile();
    // enzo.connectmobile();
    
    return 0;
}
