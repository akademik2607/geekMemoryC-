#include<iostream>
#define NUM_COUNT 4
using namespace std;


uint32_t numMaker(unsigned char num1, unsigned char num2, unsigned char num3, unsigned char num4){
    unsigned char arr[] = {num1, num2, num3, num4};
    void* p = static_cast<void*>(arr);
    uint32_t* res = static_cast<uint32_t*>(p);
    return *res;
}

void showReNum(uint32_t val){
    void* p = static_cast<void*>(&val);
    unsigned char* res = static_cast<unsigned char*>(p);
    for(int i = 0; i < NUM_COUNT; i++){
        cout << (int)*(res + i) << endl;
    }
}
int main(int args, char** argv){
    int a = 2, b = 7, c = 9, d = 3;
    uint32_t val = numMaker(a, b, c, d);
    cout << val << endl;
    showReNum(val);

    return 0;
}
