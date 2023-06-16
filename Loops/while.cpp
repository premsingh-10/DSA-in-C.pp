#include <iostream>
using namespace std;

int main() {
    int a ;
    std::cin >> a;
    
    std::cout << "The value of a: "<< a << std::endl;
    int i = 1;
    
    while(i<=a){
        cout<< i<<" ";
        i++;
    }
}