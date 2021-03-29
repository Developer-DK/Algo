#include <iostream>
#include <algorithm> // sort
// #include <vector>   

using namespace std;

int main()
{
    
    int arr[5];
    // vector<int> arr(5);
    int sum = 0;
    int avg = 0;
    int mid = 0;

    for (int  i = 0; i < 5; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    
    avg = sum / 5;

    sort(arr, arr + 5); // 오름차순
    // sort(arr.begin(), arr.end());

    cout << avg << "\n" << arr[2]; 
}