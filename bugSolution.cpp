int main() { int x = 10; int *ptr = new int; *ptr = 10; int y = *ptr; delete ptr; ptr = nullptr; return 0; }