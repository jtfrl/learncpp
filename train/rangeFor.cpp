/****
Baseado em STROUSTRUP, Bjarne. The C++ Programming Language. 
4th ed. Boston: Addison-Wesley, 2013.
P. 45 

Exemplo de range-for

*/

#include <iostream>

int v[]={0,1,2,3}; //variável global

void print_rangeFor(){
	for (auto x:v) //para cada elemento x em v
		std::cout<<x<<std::endl;
}

int main(){
	print_rangeFor();
	
	return 0;
}