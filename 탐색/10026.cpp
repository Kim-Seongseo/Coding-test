#include <stdio.h>
#include <queue>
using namespace std;

int N;
char map[200][200];     //RGB 다 가진
char map2[200][200];    //R->G 변환한 GB만 가진

typedef struct point{
    int x, y;
}Point;

void bfs(int y, int x, char src[200][200]) {
	char c = src[y][x];

    queue<Point> q;
    src[y][x] = '@';
    q.push({ x,y });

    while(q.empty() == false){
        Point p = q.front();
        q.pop();
        int dx[] = { 0,0,-1,1 };
        int dy[] = { 1,-1,0,0 };
        for(int i=0; i<4; i++){
            int nX = p.x + dx[i];
            int nY = p.y + dy[i];
            if(nX >= 0 && nX < N && nY >= 0 && nY < N){
                if(src[nY][nX] == c){
                    src[nY][nX] = '@';
                    q.push({ nX, nY });
                }
            }
        }
    }
}

int main(){
    scanf("%d", &N);
    for(int i=0; i<N; i++){
        scanf("%s", map[i]);
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            map2[i][j] = map[i][j];
            if(map2[i][j] == 'R'){
                map2[i][j] = 'G';
            }
        }
    }
    int cnt = 0;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(map[i][j] != '@'){
                bfs(i, j, map);
                cnt++;
            }
        }
    }
    printf("%d ", cnt);
    cnt = 0;

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(map2[i][j] != '@'){
                bfs(i, j, map2);
                cnt++;
            }
        }
    }
    printf("%d", cnt);

    return 0;
}