/**
 * @author      : Xue Yi (andy.xueyi@hotmail.com)
 * @file        : deep_shadow_cpy
 * @created     : Tuesday Dec 10, 2019 16:18:43 CST
 */
#include <iostream>
#include <string>
using namespace std;
int main(int argc, const char* argv[]){
    string ss("Test");
    string so(ss);

    so = "Done";
    cout << ss << "\t" << so << endl;

    return 0;
}
