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

    if( oddMin == 100 ) cout << -1; // oddMin�� 100�̶�� ���� Ȧ���� �ϳ��� ������ ���� ��(������ 100���� ���� �ڿ���)
    else    cout << oddSum << "\n" << oddMin;
    
}

/* ���� �̿�
if( sum == 0) cout << -1;
*/