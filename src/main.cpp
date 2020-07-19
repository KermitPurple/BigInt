#include<iostream>
#include"BigInt.h"

int main(){
    BigInt a(987654321);
    // a = a.add(12345679);
    std::cout << a << std::endl;
    bool b = BigInt(-12222) < BigInt(-12224);
    std::cout << (b ? "true" : "false") << std::endl;
    b = BigInt(22) > BigInt(-23);
    std::cout << (b ? "true" : "false") << std::endl;
    b = BigInt("232323232323232323232323232323232323232") <= BigInt("3232323232323232323232323232323232323232");
    std::cout << (b ? "true" : "false") << std::endl;
    b = BigInt(50) >= BigInt(50);
    std::cout << (b ? "true" : "false") << std::endl;
    b = BigInt(50) == BigInt(50);
    std::cout << (b ? "true" : "false") << std::endl;
    b = BigInt(50) != BigInt(50);
    std::cout << (b ? "true" : "false") << std::endl;
	return 0;
}
