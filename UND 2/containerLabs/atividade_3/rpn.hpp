#ifndef RPN_H
#define RPN_H

#include <stack>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>
#include <cctype>

class numRPN{
    std::vector<std::string> numOp; //toma a operação
    std::stack<double> data;
    static double appOp(char op, double op1, double op2);
    static int orderPri(char ch); //define a prioridade

    public:
    numRPN()=default;
    numRPN(std::vector<std::string> n_op);
    ~numRPN();
    double resStack(const std::vector<std::string>& fullOp); //resultado
    std::string strOperation(std::vector<std::string> numOp); 
   
};








#endif //RPN_H