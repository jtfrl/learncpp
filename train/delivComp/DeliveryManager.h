template <typename T>
class DeliveryManager {
private:
    std::vector<T> inventory;
    T price; //pode ser um double aqui
public:
    void addItem(const T& item);
    void removeItem(int index);
    void displayInventory() const;
    // Add other methods as needed
};