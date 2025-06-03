//criando overinding em addItem
//teste_03
#include <iostream>
#include <vector>
#include <string>
#include <memory>

class Material;

class Material{

    protected: 
        double vl, price;
        //wg::weight; 
        //std::vector<class> inventory;
        std::vector<std::shared_ptr<Material>> inventory;
    //shared_ptr cria um ponteiro compartilhado


    public:
        Material(double u_vl, double u_price){
            vl=u_vl;
            price=u_price;
        };

        virtual ~Material() = default; //destrutor

        //template<class C> não necessário
        virtual void addItem(const std::shared_ptr<Material>& item){
             inventory.push_back(item);
        }

        /*
        virtual void displayInventory() const{ //as classes sub fazem overrinding
            //sem haver tanta dependência
            for (const auto& item : inventory){
                //further implementation
                std::cout << " ®®® ®®® ITENS ®®® ®®® " << std::endl;
            }
        }
        */
            


};

class waterGal : public Material{
    private:
        std::string brand;
        double weight; 
        
        std::vector<std::shared_ptr<Material>> invWG;
        //necessário para o overriding que haja "Material" aqui

    public: 

        waterGal(std::string u_brand="", double u_vl=0.00, double u_price=0.00, double u_weight=0.00):
            Material(u_vl, u_price), brand(u_brand), weight(u_weight)
            {  
                std::cout<<"Marca: "<<brand<<" | Volume: "<<vl<<"l | Preço: "<<price<<" R$ | Peso: "<<weight<<"kg "<<std::endl;
            }
        //predefiniçao da classe    
      //  friend std::ostream& operator<<(std::ostream& os, const waterGal& wg);

        

        void addItem(const std::shared_ptr<Material>& item) override{
           invWG.push_back(item);
        }

        /*
        void displayItemWG() const{
            size_t i=0;
            for(const auto& item: invWG){
               // std::cout<<i+1<<". "<<item<<std::endl;
               std::cout << i + 1 << ". Marca: " << item->brand << ", Volume: " << item->vl << "l" << std::endl;
                i++;
            }
        }
            */

};

/*
   criar nova classe para bujao de gás (ver header de delivery)
*/


int main(){
    /*
    waterGal wg{"BrandA", 10.5, 20.0, 5.0};
    waterGal<waterGal> m(wg);
    */

    auto wg1=std::make_shared<waterGal>("Crystal", 25.0, 9.75, 20);
    auto wg2=std::make_shared<waterGal>("SterBom", 50.0, 19.75, 47);

    //adicionando itens no inventário
    wg1->addItem(wg2);

    //wg1->displayItemWG();

    return 0;
}
