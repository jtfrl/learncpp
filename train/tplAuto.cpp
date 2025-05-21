#include <iostream>

char max(char a, char b) { return ( a > b) ? a : b; }
int max(int a, int b) { return ( a > b) ? a : b; }
float max(float a, float b) { return ( a > b) ? a : b; }
double max(double a, double b) { return ( a > b) ? a : b; }
auto max(long long int a, long long int b)  { return ( a > b) ? a : b; }

//em template para todas
Template <typename T>
	T max(T a, T b) {
	return (a > b) ? a : b;
}