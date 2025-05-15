#include <string> //necessário para usar string
#include <vector>
class favorite{
    std::string m_character;
    std::string m_series;
    int m_age=0;
    int m_seriesYear=0;
    static int m_chtr;
    static int m_sCount;
    static std::vector<std::string> m_allSeries; //vetor que armazena os nomes


    public:
    //favorite()=default;
    favorite(); //construtor padrão
    favorite(std::string character, std::string series, int age, int seriesYear);

    void setCharacter(std::string novoChtr);
    std::string getCharacter();
    void setSeries(std::string seriesName);
    std::string getSeries();
    void setAge(int age);
    int getcAge();
    void setseriesYear(int seriesYear);
    int getsYear();
    static int countFav(); //deve ser estático
    static int countSeries();
    static void displaySeries(); //dessa forma, passa a pertencer entre os métodos da classe

};
