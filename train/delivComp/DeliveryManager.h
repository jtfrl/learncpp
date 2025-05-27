#include <iostream>
#include <vector>

template <typename T> //a ideia é que T seja trocado ou por waterGall ou pelo outro
class DeliveryManager {
private:
    std::vector<T> inventory; //aqui vem os dois tipos criados abaixo

    struct waterGal{
        double volume, weight, price;
        std::string brand;
    };
    struct gasCyl{
        double volCap, price;
        std::string saftyCert, gasType;
    };

public:
    DeliveryManager(T item);
    void addItem(const T& item);
    //overloading aqui

    void removeItem(int index);
    void displayInventory() const;

    double totalWt(T u_weight);
    double totalVl(T u_volume); //esse e o primeiro para waterGal
    double totalVC(T u_volCap);
    // Add other methods as needed
};

template<class T>
DeliveryManager<T>::DeliveryManager(T item){
    u_item=item;
}

