#include <iostream>
#include <unordered_map>
int main(){
    std::unordered_map<std::string,int> m;
    m["apple"]=3;
    m["banana"]=5;
    std::cout << m["apple"] << std::endl;
}
