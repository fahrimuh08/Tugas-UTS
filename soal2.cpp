#include <iostream>

using namespace std;
int main()
{int N,X,T,Batas;
N = 84;
Batas = 84 + 100;
X = 20;
T = 84;
while( T <= Batas)
    {   T = T + X;
        X = X + 10;

    }
    cout << T;
}
