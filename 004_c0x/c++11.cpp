/**
 * @author      : Xue Yi (andy.xueyi@hotmail.com)
 * @file        : test
 * @created     : Tuesday Dec 10, 2019 22:09:47 CST
 */
#include <iostream>
#include <memory>
using namespace std;

int sum(int a, int b) { return a+b; }

int main(int argc, const char* argv[]){
    int a = 10;
    decltype(a) b = a;
    decltype((a)) c = a;

    int arr[] = { 1,2,3,4,5};
    for ( auto &i: arr){
        cout << i << "\t";
    }
    cout << endl;
    shared_ptr<int> p(new int[5]);
    shared_ptr<int> p2 = make_shared<int>(5);

    auto func = [&](int j) -> int { return j+a+b;};
    cout << func(10) << endl;

    return 0;
}
