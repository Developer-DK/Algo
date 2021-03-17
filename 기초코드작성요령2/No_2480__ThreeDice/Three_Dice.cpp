// 2480번 주사위 세개

#include <iostream>
#include <algorithm>  // sort 함수

using namespace std;

int main()
{
    const int N = 3;
    int dice[N];    // sort 정렬 위해 배열 사용
    // int dice_1, dice_2, dice_3; 
    int price;
    
    for(int i = 0; i < N; i++)
    {
        cin >> dice[i];
    }
    
    if( dice[0] == dice[1])
    {
        if( dice[0] == dice[2] )
        {
            price = 10000 + dice[0] * 1000;
        }
        else
        {
            price = 1000 + dice[0] * 100;
        }
    }
    else if( dice[1] == dice[2] )
    {
        price = 1000 + dice[1] * 100;
    }
    else if( dice[0] == dice[2] )
    {
        price = 1000 + dice[0] * 100;
    }
    else
    {
        sort(dice, dice + 3); // 오름차순 정렬
        price = dice[2] * 100;
    }
    
    cout << price;
    
    return 0;
}

/*
// 입력된 세 수 비교
#include <iostream>
 
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a == b && b == c) printf("%d\n", 10000 + a * 1000);
    else if (a == b) printf("%d\n", 1000 + a * 100);    // &&의 부정이므로 각각의 경우
    else if (b == c) printf("%d\n", 1000 + b * 100);    // &&의 부정이므로 각각의 경우
    else if (c == a) printf("%d\n", 1000 + c * 100);
    else {
        if (a > b && a > c) printf("%d\n", a * 100);
        else {
            if (b > c) printf("%d\n", b * 100);
            else printf("%d\n", c * 100);
        }
    }
    return 0;
}
*/
/*
// 입력된 수의 주사위를 카운트 
#include <iostream>
#include <algorithm>    // max 함수

using namespace std;

// int dice[7];    // 전역변수로 선언 시 문제가 없음..

int main()
{
    int dice[7] = {0,}; // 0으로 초기화안해줄 시 여기서 선언하면 2 2 2 입력시 -100이 나온다.. 원인은..?
    int num     = 0;
    int price   = 0;
    
    
    for(int i = 0; i < 3; i++)
    {
        cin >> num;
        
        dice[num]++;
    }
    
    int maxNum  = -1;
    for(int i = 1; i < 7; i++)
    {
        if( dice[i] == 3 )       
        {
            price = 10000 + i * 1000;
            break;
        }
        else if( dice[i] == 2 )  
        {
            price = 1000 + i * 100;
            break;
        }
        else if( dice[i] == 1 )  
        {
            maxNum = max(maxNum, i);
        }
    }
    
    if( price )     cout << price;
    else            cout << maxNum * 100;
    
    return 0;
}
*/
