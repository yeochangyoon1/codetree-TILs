#include <iostream>
using namespace std;

void printstar();
int main() {
    // 여기에 코드를 작성해주세요.
    for(int i = 0; i < 5; i++)
    {
        printstar();
    }
    return 0;
}

void printstar()
{
    cout << "**********" << endl;
}