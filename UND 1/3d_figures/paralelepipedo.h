class Paralelepipedo {
    double m_aresta1, m_aresta2, m_aresta3;
    static int p_count;
    public:
    Paralelepipedo();
    Paralelepipedo(double m_aresta1, double m_aresta2, double m_aresta3);
    double area();
    double volume();
    void setAresta1(double aresta1);
    void setAresta2(double aresta2);
    void setAresta3(double aresta3);
    double getAresta1();
    double getAresta2();
    double getAresta3();
    static int getTotal();

};