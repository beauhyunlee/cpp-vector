class MyVector{
private:
    int* data;
    int capacity;
    int length;
    
public:
    MyVector();
    ~MyVector();

    void push(int value);
    int get(int index);
    int size();
};