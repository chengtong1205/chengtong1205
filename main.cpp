#include <iostream>
using namespace std;

int main()
{
    int a = 31;
    double b = 1.23456;
    string c("inexbot");
    printf("a=0x%04X,b=%.2f,c=\"%s\"\n", a, b, c.c_str());
    getchar();
    return 0;
}
