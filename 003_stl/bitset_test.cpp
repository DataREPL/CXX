/**
 * @author      : Xue Yi (andy.xueyi@hotmail.com)
 * @file        : bitset_test
 * @created     : Tuesday Dec 10, 2019 14:45:38 CST
 */
#include <iostream>
#include <bitset>
#include <string>
using namespace std;

int main(int argc, const char* argv[]){
    bitset<8> b(255);
    cout << b << endl;

    bitset<4> foo(string("1001"));
    bitset<4> boo(string("0011"));

    cout << foo << endl;
    cout << boo << endl;
    cout << "|= " << (foo |= boo) << endl;
    cout << foo << endl;
    cout << boo << endl;
    cout << "^=" << (foo ^= boo) << endl;
    cout << foo << endl;
    cout << boo << endl;
    cout << "&=" << (foo &= boo) << endl;

    cout << "==========" << endl;
    cout << "~boo = " << (~boo) << endl;
    cout << "boo << 1 = " << (boo << 1) << endl;

    cout << "func =====" << endl;

    cout << "boo count " << boo.count() << endl;
    cout << "boo size  " << boo.size() << endl;

    bitset<10> foo1(string("10011011"));
    cout << foo1.to_string() << endl;
    unsigned long a = foo1.to_ulong();
    cout << a << endl;
    return 0;
}
