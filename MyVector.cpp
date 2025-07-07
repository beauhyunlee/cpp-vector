#include "MyVector.h"
#include <iostream>
MyVector::MyVector(){
    capacity = 4; // intial array capcity
    length = 0;
    data = new int [capacity]; // amnually allocate dynamic array
}
MyVector::~MyVector(){
    delete[] data; // free up memeory that was manually allocated
}
void MyVector::push(int value){
    // room in array
    if (length < capacity){
        data[length] = value;
        length ++;
        return;
    }
    // array full and resize
    int newCapacity = capacity * 2;
    int* newData = new int[newCapacity];

    // copy all elements from the old array to the new one
    for (int i = 0; i < length; i++){
        newData[i] = data[i];
    }

    // delete old array
    delete[] data;

    // update internal pointer and capacity
    data = newData;
    capacity = newCapacity;

    // add the new value to the newly resized array
    data[length] = value;
    length++;

}
int MyVector::get(int index){
    if(index < 0 || index >= length){
        throw std::out_of_range("index out of bounds");
    }
}
int MyVector::size(){
    return length;
}