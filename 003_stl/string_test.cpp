/**
 * @author      : Xue Yi (andy.xueyi@hotmail.com)
 * @file        : main
 * @created     : Sunday Dec 08, 2019 19:08:23 CST
 */

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string ss("hello1 world!");
    ss.insert(0, "AAAA");
    cout << ss << endl;

    ss.erase(ss.begin(), ss.begin() + 3);
    cout << ss << endl;
    ss.replace(0,1, "BB");

    string::iterator si = find(ss.begin(), ss.end(), '1');

    if (si != ss.end()) {
        ss.erase(si);
    }
    cout << ss << endl;
    return 0;
}

