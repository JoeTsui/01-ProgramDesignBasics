/*******************************************************
 
 &c 是 char*（指向字符的地址）
 cout << char* 会被解释为 字符串指针，而不是地址
 所以 cout 从 &c 开始把后面内存当作字符串内容，一直打印直到遇到 \0
 所以你看到输出是 *Gz? 这种 乱码串
 
 *******************************************************/

#include <iostream>
using namespace std;

int main() {
    int n;
    float f;
    double d = 1.23;
    char c = '*';
    cout << "address of n: " << &n << endl;
    cout << "address of f: " << &f << endl;
    cout << "address of d: " << &d << endl;
    cout << "address of c: " << &c << endl;
    return 0;
}