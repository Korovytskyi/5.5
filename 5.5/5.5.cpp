// 5.5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;
double V, a, b,  c,  m, V1 , V2;
	

int main()


{
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "m = "; cin >> m;
    cout << " V1= "; cin >> V1;
    cout << " V2= "; cin >> V2;
#include <iostream>
}
unsigned int PRNG()
{
    
    static unsigned int seed = (a * V1 + b * V2 + c);

    
    seed = (8253729 * seed + 2396403);

    
    return seed % 32768;
}

int main()
{
    
    for (int count = 0; count < 100; ++count)
    {
        std::cout << PRNG() << "\t";

        
        if ((count + 1) % 5 == 0)
            std::cout << "\m";
    }
}