/**
 * @author      : Xue Yi (andy.xueyi@hotmail.com)
 * @file        : oper_cmp
 * @created     : Tuesday Dec 10, 2019 16:00:27 CST
 */
#include <iostream>
#include <assert.h>
using namespace std;

char* strcpy(char * str_dest, const char* str_src){
    assert( (str_dest != NULL) && (str_src != NULL));
    char* addr = str_dest;
    while( (*str_dest++ = *str_src++) != '\0' ){};

    return addr;
}


size_t strlen(const char* str){
    assert( str != NULL);
    size_t len = 0;
    while( *str++ != '\0'){
        len++;
    }
    return len;
}

int main(int argc, const char* argv[]) {
    char* src = "Hello World!";
    char dest[20];
    char * x = strcpy(dest, src);

    cout << x << endl;
    cout << dest << endl;

    cout << strlen(dest) << endl;
    return 0;
}
