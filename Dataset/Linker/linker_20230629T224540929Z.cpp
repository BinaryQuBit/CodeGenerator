class MyClass {
  friend MyClass operator+(const MyClass&, const MyClass&);
};

int main() {
  MyClass obj1, obj2;
  MyClass result = obj1 + obj2;
  return 0;
}
