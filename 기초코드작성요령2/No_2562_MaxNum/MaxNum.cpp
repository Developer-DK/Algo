#include <iostream>

using namespace std;

int main()
{
    const int num   = 9;
    int arr[num]    = { 0, };
    int max         = 0;
    int index       = 0;

    for(int i = 0 ; i < num ; i++)
    {
        cin >> arr[i];
    }

    max = arr[0];
    index = 1;
    for(int i = 0 ; i < num - 1 ; i++)
    {
        if( arr[i + 1] > max)   
        {
            max = arr[i + 1];        
            index = i + 1 + 1;
        }
    }
    
    cout << max << "\n" << index;
    
}

/* 더 단순하게
#include <iostream>

using namespace std;

int main()
{
    const int num   = 9;
    int arr[num]    = { 0, };
    int max         = 0;
    int index       = 0;

    for(int i = 0; i < num; i++)
    {
        cin >> arr[i];
    
        if( arr[i] > max)
        {
            max = arr[i];
            index = i;
        }     
    }

    cout << max << "\n" << index + 1;
}
*/
