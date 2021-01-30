#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3 = 0;
    int max, mid, min = 0;
    
    cin >> num1 >> num2 >> num3;
    
    if(num1 > num2) // num2 num1
    {
        if(num1 > num3) // (num3 num2) num1
        {   
            max = num1;
            if(num2 > num3) // num3 num2 num1
            {    
                min = num3;
                mid = num2;
            }
            else
            {
                min = num2; // num2 num3 num1
                mid = num3;
            }
        }
        else
        {    
            max = num3; // num2 num1 num3
            mid = num1;
            min = num2;
        }
    }
    else    // num1 num2
    {
        if(num2 > num3) // (num1 num3) num2
        {
            max = num2;
            if(num3 > num1) // num1 num3 num2
            {
                min = num1;
                mid = num3;
            }
            else
            {
                min = num3; // num3 num1 num2
                mid = num1;
            }
        }
        else
        {
            max = num3; // num1 num2 num3
            mid = num2;
            min = num1;
        }
    }
    
    cout << min << " " << mid << " " << max;
        
    return 0;
}

/*
// SWAP 이용
#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3 = 0;
    int tmp;
    
    cin >> num1 >> num2 >> num3;
    
    if( num1 > num2 ){
        tmp = num1; num1 = num2; num2 = tmp;
    }
    if( num2 > num3){
        tmp = num3; num3 = num2; num2 = tmp;
    }
    if( num1 > num2 ){
        tmp = num1; num1 = num2; num2 = tmp;
    }
        
    cout << num1 << " " << num2 << " " << num3;
        
    return 0;
}
*/

/*
//  이용
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int arr[3];
    
    for(int i = 0; i < 3; i++){
        cin >> arr[i];
    }
    
    sort(arr, arr + 3);   
/////////////////////////////////////////////////
   start                      end
    ㅣ . . . ㅣ . . . ㅣ . . . ㅣ 
  [arr]    arr+1    arr+2    [arr+3]
/////////////////////////////////////////////////
    
    for(int i = 0; i < 3; i++){
        cout << arr[i]<< ' ';
    }
    
    return 0;
}
*/
