#include <iostream>
#include <cmath>

int func(int n){
    if (n==0) return 0;
    return func(n-1)+pow(10,n-1);
}

int main(){
    int n;
    std::cin >> n;
    std::cout << func(n) << std::endl;
}