
#include <bits/stdc++.h>
#define krys_free( ptr ) delete ptr; ptr = nullptr;
using namespace std;

void generate_fibo( int* array )
{
    0[array](0);
    1[array](1);
    
    for ( int i = 2; i < 10; i++ )
     i[array] = (i-1)[array] + (i-2)[array];
}

int main()
{
    // kymchi lines
    cin.tie( 0 ); cout.tie( 0 ); ios_base::sync_with_stdio( false );
    
    int* fibo = new int[10];
    
    generate_fibo( fibo );
    
    for ( int i = 0; i < 10; i++ )
        cout << i[fibo] << " ";
    
    krys_free( fibo );
}
