/**
 * @author      : Xue Yi (andy.xueyi@hotmail.com)
 * @file        : vector_test
 * @created     : Sunday Dec 08, 2019 19:25:53 CST
 */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, const char* argv[]) {
    vector<int> v;
    v.push_back(9);
    v.push_back(2);
    v.push_back(10);
    sort(v.begin(), v.end());
    for (size_t i = 0; i < v.size(); i++) {
        cout << v.at(i) << endl;
    }
    cout << endl;

    v.front() = 10;
    v.back() = 20;
    v.insert(v.begin(), 3, 100);

    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout << *it << "\t";
    }
    cout << endl;

    v.erase(v.begin(), v.begin() + 1);
    v.erase(v.begin() + 1);

    for(auto it = v.begin(); it!=v.end(); it++){
        cout << *it << "\t";
    }

    cout << endl;
    return 0;
}
