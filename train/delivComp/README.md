markdown
# C++ Class Template Challenge: Delivery Company Inventory

_Challenge created originally by Deepseek in 2025.05.27_

## Challenge Description
Create a class template to manage inventory for a delivery company that handles different types of items (water gallons and gas cylinders).

## Files Structure
```
project/
├── DeliveryManager.h // Header with class template implementation
├── main.cpp // Demonstration program
└── README.md // This file
```

## Requirements

### 1. Header File (`DeliveryManager.h`)
Implement a class template with:
```cpp
template <typename T>
class DeliveryManager {
private:
    std::vector<T> inventory;
public:
    void addItem(const T& item);
    void removeItem(int index);
    void displayInventory() const;
    // Add other methods as needed
};
```

### 2. Item Structures
WaterGallon should contain:

- Volume (liters)

- Brand

- Weight (kg)

- Price

GasCylinder should contain:

- Capacity (kg)

- Gas type

- Safety certification

- Price

### 3. Main Program (main.cpp)
Demonstrate functionality with both types:

```cpp
DeliveryManager<WaterGallon> waterDelivery;
waterDelivery.addItem({"20L", "PureWater", 10, 15.99});

DeliveryManager<GasCylinder> gasDelivery;
gasDelivery.addItem({"15kg", "Propane", "ISO-1234", 29.99});
```

## Implementation Tasks
- Create the class template in DeliveryManager.h

- Implement required methods:

- Add/remove items

- Display inventory

- Calculate total weight/value

- Create the two struct types

- Demonstrate usage in main.cpp

Example Output
Your program should display information like:

```
WATER GALLONS INVENTORY:
1. 20L, PureWater, 10kg, $15.99

GAS CYLINDERS INVENTORY:
1. 15kg, Propane, ISO-1234, $29.99

```


#### How to Compile and Run

```bash
g++ -std=c++11 main.cpp -o delivery_app
./delivery_app
```

#### Skills Practiced
- Class templates

- STL containers (vector)

- Structured data handling

- Real-world system modeling
