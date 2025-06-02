//criando classe base para waterGal e gasCyl
//teste_02
#include <iostream>
#include <vector>
#include <string>

class Material{

    protected: 
        double vl, price;
        //wg::weight; 

    public:
        Material(double u_vl, double u_price){
            vl=u_vl;
            price=u_price;
        };
    //template cumpre a função de colocar classes nos parâmetros de função
        template<class C>
        void addItem(const C& item);
        
        template<class C>
        void removeItem(int item);

        void displayInventory() const;

        //possivel ter
        /*
        template <class C>
    void displayInventory(const std::vector<C>& inventory) const;
        */

};

class waterGal : public Material{
    private:
        std::string brand;
        double weight; //definida fora do escopo de Material

    public: //em ajuste


        //construtor precisa de definição padrão
        waterGal(std::string u_brand="", double u_vl=0.00, double u_price=0.00, double u_weight=0.00):
            Material(u_vl, u_price), brand(u_brand), weight(u_weight)
            {  
                std::cout<<"Marca: "<<brand<<" | Volume: "<<vl<<"l | Preço: "<<price<<" R$ | Peso: "<<weight<<"kg "<<std::endl;
            }
        //predefiniçao da classe    
      //  friend std::ostream& operator<<(std::ostream& os, const waterGal& wg);
};

/*
   criar nova classe para bujao de gás (ver header de delivery)
*/


int main(){
    waterGal wg{"BrandA", 10.5, 20.0, 5.0};
    
    return 0;
}
