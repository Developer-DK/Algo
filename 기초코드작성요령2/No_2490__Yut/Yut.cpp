#include <iostream>

using namespace std;

int main()
{
    int Yut[3][4] = {0, };
    int cnt = 0;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++) 
        {
            cin >> Yut[i][j];
        }
    }

     

    for(int i = 0; i < 3; i++)
    {
        cnt = 0;
        for(int j = 0; j < 4; j++)
        {
            if( Yut[i][j] == 0 ) cnt++;
        }

        switch(cnt)
        {
            case 1  : cout << "A"; break;
            case 2  : cout << "B"; break;
            case 3  : cout << "C"; break;
            case 4  : cout << "D"; break;
            default : cout << "E"; break;
        }
        cout << "\n";
    }
}

/*
// 2차원배열 변수 선언않고 입력된값마다 조건 판단 -> 배열에 값담지않아도되니 훨씬 간편한데?
#include <stdio.h>
void Yogurt()
{
    int i, j;
    int N;
    int cnt;
    for (i = 0;i < 3;i++)
    {
        cnt = 0;
        for (j = 0;j < 4;j++)
        {
            scanf("%d", &N);
            if (N == 0)
                cnt++;
        }
        if (cnt == 0)
            printf("E\n");
        else if (cnt == 1)
            printf("A\n");
        else if (cnt == 2)
            printf("B\n");
        else if (cnt == 3)
            printf("C\n");
        else
            printf("D\n");
    }
}
int main()
{
    Yogurt();
}
*/

/* 벡터 사용 / 배열의 합 구하는 accumulate 함수 사용
#include <iostream>
#include <vector>
#include <numeric>  // accumulate 함수
using namespace std;
 
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
 
	int sum;
	vector<int> v(4);
 
	for (int i = 0; i < 3; i++) {
		cin >> v[0] >> v[1] >> v[2] >> v[3];
		sum = accumulate(v.begin(), v.end(), 0);    // accumulate(시작 지점, 끝 지점, 초기값)
                                                    // https://torbjorn.tistory.com/253 함수반환값은 초기값 타입 따라간다.
		if (sum == 0) cout << 'D';
		else if (sum == 1) cout << 'C';
		else if (sum == 2) cout << 'B';
		else if (sum == 3) cout << 'A';
		else if (sum == 4) cout << 'E';
		cout << '\n';
	}
 
	return 0;
}
*/