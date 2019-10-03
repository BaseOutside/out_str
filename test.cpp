#include <iostream>
#include <algorithm>
#include <random>
#include <string>

#include "src/out_str.hpp"

using std::cout;
using outside_string::out_str;

int main() {
    std::string str("abcde");
    out_str ostr(str);
    cout << ostr.c_str() << ", " << ostr.size() << ", " << ostr.capacity() << "\n";
    /*
    const out_str str("abcABC123xXyYzZ");
    cout << str.c_str() << ", " << str.size() << ", " << str.capacity() << "\n";
    cout << str.upper_case().c_str() << ", " << str.upper_case().size() << ", " << str.upper_case().capacity() << "\n";
    cout << str.lower_case().c_str() << ", " << str.lower_case().size() << ", " << str.lower_case().capacity() << "\n";
    cout << str.rot13().c_str() << ", " << str.rot13().size() << ", " << str.rot13().capacity() << "\n";
    cout << str.base64().c_str() << ", " << str.base64().size() << ", " << str.base64().capacity() << "\n";
    cout << str.substr(6, 3).c_str() << ", " << str.substr(6, 3).size() << ", " << str.substr(6, 3).capacity() << "\n";
    */
    /*
    out_str str("abc");
    cout << str.c_str() << ", " << str.size() << ", " << str.capacity() << "\n";
    str += "d";
    cout << str.c_str() << ", " << str.size() << ", " << str.capacity() << "\n";
    str.shrink_to_fit();
    cout << str.c_str() << ", " << str.size() << ", " << str.capacity() << "\n";
    std::string tmp; std::cin >> tmp;
    str = tmp.c_str();
    cout << str.c_str() << ", " << str.size() << ", " << str.capacity() << "\n";
    */

    /*
    std::random_device rd;
    std::mt19937 mt(rd());
    out_str str("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789");
    std::shuffle(str.begin(), str.end(), mt);
    for (const auto &i : str) cout << i << ",";
//----------
    {
        out_str str(10, 'x');
        str.push_back('z');
        cout << str.c_str() << "\n"
             << str.size() << ", " << str.capacity() << "\n";
    }
    out_str str("test");
    cout << str.c_str() << ", " << str.size() << "\n";
    str += "aaa";
    cout << str.c_str() << ", " << str.size() << "\n";
    str = "b";
    cout << str.c_str() << ", " << str.size() << "\n";
    str = str + "ccc";
    cout << str.c_str() << ", " << str.size() << "\n";
    str[0] = 'a';
    cout << str.c_str() << ", " << str.size() << "\n";
    out_str st2 = "vvvvv";
    str += st2;
    cout << str.c_str() << ", " << str.size() << "\n";
    str = "abc";
    str.pop_back();
    cout << str.c_str() << ", " << str.size() << "\n";
    str.push_back('c');
    cout << str.c_str() << ", " << str.size() << "\n";

    out_str qwe("abcde");
    cout << (qwe == "abcde") << ", " << (qwe == "abc") << ", " << (qwe != "abcde") << ", " << (qwe != "abc") << "\n";
    qwe *= 50;
    cout << qwe.c_str() << ", " << qwe.size() << "\n";
    */
}
