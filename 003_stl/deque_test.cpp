/**
 * @author      : Xue Yi (andy.xueyi@hotmail.com)
 * @file        : deque_test
 * @created     : Tuesday Dec 10, 2019 13:17:41 CST
 */
#include <iostream>
#include <deque>

using namespace std;

int main(int argc, const char* argv[]) {
    deque<int> d(10, 1);
    d.push_back(2);
    d.push_front(10);

    d.pop_front();
    d.pop_front();
    cout << d.max_size() << "\t" << d.size() << endl;

    for( deque<int>::iterator it = d.begin(); it!= d.end(); it++ ){
        cout << *it << "\t";
    }
    cout << endl;

    return 0;
}
