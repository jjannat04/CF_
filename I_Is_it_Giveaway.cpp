#include <iostream>
#include <string>
using namespace std;

int main() {
    int R, C, K;
    cin >> R >> C >> K;
    string M[R][C], P[R][K];

    for (int i = 0; i < R; i++){
        for (int j = 0; j < C; j++){
            cin >> M[i][j];
        }
        for (int m = 0; m < K; m++){
            cin >> P[i][m];
        }
    }
    int max_count = -1;
    for (int m = 0; m < K; m++){
        int count = 0;
        for (int i = 0; i < R; i++){
            if (P[i][m] == "*"){
                count++;
            }
        }
        if (count > max_count){
            max_count = count;
        }
    }
    int count = 0;
    for (int j = 0; j < C; j++){
        count = 0;
        for (int i = 0; i < R; i++){
            if (M[i][j] == "*")
                count++;
        }
        if (count != max_count ){
            cout << 'N' ;
            return 0;
        }
    }
    cout << 'Y';   
    
    return 0;
}
