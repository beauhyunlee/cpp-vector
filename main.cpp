#include <iostream>
using namespace std;
#include "MyVector.h"

int main (){
    cout <<"Hello World!";
    MyVector v;
    for(int i =0; i <=10; i++){
        v.push(i*10);
    }
    for(int i = 0; i < v.size(); i++){
        std::cout<<"v[" << i << "] = " << v.get(i) << std::endl;
    }
    return 0;
}