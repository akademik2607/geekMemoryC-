#include<iostream>

using namespace std;


int main(int args, char** argv){

#if _WIN32 == 1

    cout << "Windows" << endl;
#else
    cout << "Linux" << endl;
#endif
    cout << "Date of compile: " << __DATE__ << endl;
    cout << "Time of compile: " << __TIME__ << endl;
    return 0;
}
