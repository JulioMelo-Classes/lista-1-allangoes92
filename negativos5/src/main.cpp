#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.

/*não precisava de um vetor, mas blz*/
int main(void)
{
    int V[SIZE];
    int count = 0;
    for (int i = 0; i < SIZE; i++)
    {
        std::cin >> V[i];
        if (V[i] < 0)
        {
            count++;
        }
    }
    std::cout <<  count;

    return 0;
}