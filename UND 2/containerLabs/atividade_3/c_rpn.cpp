#include "rpn.hpp"

numRPN::numRPN(std::vector<std::string> n_op): numOp(n_op){
    std::cout<<"Construtor chamado com "<<n_op.size()<<" elementos\n";
}

numRPN::~numRPN() {
    numOp.clear();
}


double numRPN::appOp(char op, double op1, double op2){
    switch(orderPri(op)){
        case 1:
        return (op=='+') ? op1 + op2 : op1 - op2;
        case 2: 
        return (op=='*') ? op1 * op2 : op1 / op2;
    }

    return 0;
}



int numRPN::orderPri(char ch){
    if(ch=='+' || ch=='-') return 1;
    if(ch=='*' || ch=='/') return 2;
    else{
        throw std::runtime_error("Operador inválido");
    }
}

std::string numRPN::strOperation(std::vector<std::string> numOp){

    std::stack<std::string> stackNumOp;
    //std::vector<std::string>::iterator it=numOp.begin(); //iterador alternativo

    for(const auto& currentStr:numOp){
        bool isNumber=false;

        try{
            std::stod(currentStr);
            isNumber=true;
        }catch(...){
            isNumber=false;
        }

        if(isNumber){
        stackNumOp.push(currentStr);
        }else if(currentStr == "+" || currentStr == "-" || currentStr == "/" || currentStr == "*"){
                //"" -> uso para string
                if(stackNumOp.size()<2){ //sem haver no mínimo dois dígitos
                    throw std::runtime_error("Expressão inválida (use notação prefixa)\n");
                }

                std::string op2=stackNumOp.top(); //LIFO
                stackNumOp.pop();
                std::string op1=stackNumOp.top();
                stackNumOp.pop();

                //combinação

                std::string comb="("+op1+" "+currentStr+" "+op2+")";
                stackNumOp.push(comb);
            }  
            else{
            throw std::runtime_error("Token inválido: "+currentStr);
            }
    }
    


    if (stackNumOp.size()!=1) throw std::runtime_error("Expressão incompleta.\n");

    return stackNumOp.top();

}



double numRPN::resStack(const std::vector<std::string>& fullOp){
    std::stack<double> opStack;

    for(const auto& token:fullOp){
        if(token.length()==1&& (token=="+" || token=="-" || token == "*" || token == "/")){
            //operadores!
            
            double op2=opStack.top();
            opStack.pop();
            double op1=opStack.top();
            opStack.pop();

            char op=token[0];
            double res=appOp(op, op1, op2);
            opStack.push(res);
        }
        else{
            try{
                double num=std::stod(token); //conversão pra dobule
                opStack.push(num);
            }catch(...){
                throw std::runtime_error("Token para operação inválido "+token+"\n");
            }
        }
    }

    if(opStack.size()!=1) throw std::runtime_error("Expressão inválida. Coloque mais operandos.\n");


    return opStack.top();
  

}
