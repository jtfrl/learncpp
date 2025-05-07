class Cubo {
    double m_aresta;
    static int c_count;
    public:
    Cubo(); //padrão
    Cubo(double m_aresta);
    double area();
    double volume();
    void setAresta(int aresta);
    int getAresta();
    static int getTotal();
};

