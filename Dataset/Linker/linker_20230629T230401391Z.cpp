class MyClass {
public:
    MyClass(int value) : myValue(value) {}
    // No explicit declaration or definition of the copy constructor
private:
    int myValue;
};

int main() {
    MyClass obj1(10);
    MyClass obj2 = obj1; // Error: Undefined reference to copy constructor
    return 0;
}
