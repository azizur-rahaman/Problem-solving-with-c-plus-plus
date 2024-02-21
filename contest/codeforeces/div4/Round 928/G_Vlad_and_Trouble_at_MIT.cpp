#include <iostream>
#include <vector>
using namespace std;

const int N = 7;
const int INF = 1e9;

bool isValid(int x, int y) {
    return x >= 0 && x < N && y >= 0 && y < N;
}

int countDiagonalNeighbors(int x, int y, vector<string>& grid) {
    int count = 0;
    int dx[] = {-1, -1, 1, 1};
    int dy[] = {-1, 1, -1, 1};
    
    for (int i = 0; i < 4; ++i) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        
        if (isValid(nx, ny) && grid[nx][ny] == 'B')
            count++;
    }
    return count;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        vector<string> grid(N);
        for (int i = 0; i < N; ++i)
            cin >> grid[i];
        
        int minOps = INF;
        
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                if (grid[i][j] == 'B') {
                    int ops = 0;
                    int diagonalCount = countDiagonalNeighbors(i, j, grid);
                    if (diagonalCount == 4) ops = 4;
                    else if (diagonalCount == 3) ops = 3;
                    else if (diagonalCount == 2) ops = 2;
                    else if (diagonalCount == 1) ops = 1;
                    else ops = 0;
                    minOps = min(minOps, ops);
                }
            }
        }
        
        cout << minOps << endl;
    }
    
    return 0;
}
