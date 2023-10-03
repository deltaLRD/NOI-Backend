#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream ifsout;
    ifsout.open("C:/Users/22845/Desktop/NOJ/ojbackend/src/main/resources/static/judge_test/temp_execute_files/1.out", ios::in);
    ifstream ifsans;
    ifsout.open("C:/Users/22845/Desktop/NOJ/ojbackend/src/main/resources/static/judge_test/temp_execute_files/1.ans", ios::in);
    ofstream ofs;
    cout << ifsout.eof();
    ofs.open("C:/Users/22845/Desktop/NOJ/ojbackend/src/main/resources/static/judge_test/temp_execute_files/result.txt", ios::out);
    while (!ifsout.eof() && !ifsans.eof()) {
        string s1, s2;
        ifsout >> s1;
        ifsans >> s2;
        if (s1 != s2) {
            ofs << "wa";
            return 0;
        }
    }
    if (ifsout.peek() == EOF && ifsans.peek() == EOF) {
        ofs << "ok";
        return 0;
    }
    else {
        ofs << "wa";
        return 0;
    }
}