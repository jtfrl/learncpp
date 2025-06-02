#include <iostream>
#include <vector>
#include <string>

//structs devem vir fora
  struct waterGal{
        double volume, weight, price;
        std::string brand;

        friend std::ostream& operator<<(std::ostream& os, const waterGal& wg){
            os<< "Water Gallon - Volume: " << wg.volume << ", Price: " << wg.price << ", Weight: " <<
            wg.weight << ", Brand: " << wg.brand;
            return os;
        }
    };
    struct gasCyl{
        double volCap, price;
        std::string saftyCert, gasType;

        //fazer algo similar para waterGal
        friend std::ostream& operator<<(std::ostream& os, const gasCyl& gc) {
            os << "Gas Cylinder - Volume Capacity: " << gc.volCap << ", Price: " << gc.price
            << ", Safety Cert: " << gc.saftyCert << ", Gas Type: " << gc.gasType;
            return os;
        }
    };


template <typename T> //a ideia é que T seja trocado ou por waterGall ou pelo outro
class DeliveryManager {
private:
    std::vector<T> inventory; //aqui vem os dois tipos criados abaixo


public:
    DeliveryManager(T item);
    void addItem(const T& item);
    void removeItem(int index);
    void displayInventory() const;

    double totalWt(T u_weight);
    double totalVl(T u_volume); //esse e o primeiro para waterGal
    double totalVC(T u_volCap);
};

template<class T>
DeliveryManager<T>::DeliveryManager(T item){
     inventory.push_back(item);
    //u_item=item;
}

template<class T>  
void DeliveryManager<T>::addItem(const T& item){
    inventory.push_back(item);
}


// template<class T> remove function here



//implementing for displayInventory
template<class T>
void DeliveryManager<T>::displayInventory() const {
    size_t i=0;
    //for(size_t i=0; i<inventory.size(); ++i){
    for (const auto& item: inventory){
        std::cout<<i+1<<". "<<item<<std::endl;
        ++i;
    }
    //it should use what addItem must have 
}

/*
int main() {
    waterGal wg{10.5, 20.0, 5.0, "BrandA"};
    DeliveryManager<waterGal> manager(wg);
    manager.displayInventory();
    return 0;
}
    */