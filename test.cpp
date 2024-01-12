#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = { 10, 0, 0 }; int* a_ptr = a;

    cout << *(a_ptr + 100);

    *(a_ptr + 500) = 10;

    cout << *(a_ptr + 500);
}