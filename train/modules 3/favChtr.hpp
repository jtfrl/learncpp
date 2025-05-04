#include <string> //necessário para usar string

class favorite{
    std::string m_character;
    std::string m_series;
    int m_age=0;
    int m_seriesYear=0;

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
    void setseriesYer(int seriesYear);
    int getsYear();

};