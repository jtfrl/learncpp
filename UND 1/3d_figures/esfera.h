class Esfera {
    double m_raio;
    static int e_count;
    public:
    Esfera();
    Esfera(double m_raio);
    double area();
    double volume();
    void setRaio(double raio);
    double getRaio();
    static int getTotal();
};