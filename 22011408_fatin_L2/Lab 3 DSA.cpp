#include <bits/stdc++.h> //own note: this includes libraries in c++
using namespace std;

#define M 4
#define N 5

void printCommonElements(int mat[M][N])
{
    unordered_map<int, int> mp;

    for (int j = 0; j < N; j++)
        mp[(mat[0][j])] = 1;

    for (int i = 1; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (mp[(mat[i][j])] == i)
            {
                mp[(mat[i][j])] = i + 1;

                if (i==M-1 && mp[(mat[i][j])]==M)
                  cout << mat[i][j] << " ";
            }
        }
    }
}

int main()
{
    int mat[M][N] =
    {
        {1, 6, 6, 6, 8},
        {2, 2, 2, 2, 1},
        {8, 7, 7, 3, 1},
        {8, 1, 2, 7, 9},
    };

    printCommonElements(mat);

    return 0;
}