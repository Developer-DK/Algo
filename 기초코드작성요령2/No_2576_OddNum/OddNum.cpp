#include <iostream>

using namespace std;

int main()
{
    int arr[7];
    int oddMin = 100;
    int oddSum = 0;

    for( int  i = 0;  i < 7; i++ )
    {
        cin >> arr[i];

        if( arr[i] % 2 != 0)
        {
            oddSum += arr[i];
            if( arr[i] < oddMin ) oddMin = arr[i];
        }
    }

    if( oddMin == 100 ) cout << -1; // oddMin이 100이라는 것은 홀수가 하나도 나오지 않은 것(값들은 100보다 작은 자연수)
    else    cout << oddSum << "\n" << oddMin;
    
}

/* 합을 이용
if( sum == 0) cout << -1;
*/