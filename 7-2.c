#include <stdio.h>
const int MAX_N = 12 + 2;
const int INF = 2e9;
int adj[MAX_N][MAX_N], visited[MAX_N];
int N, ans = INF;
void input() {
    scanf("%d", &N);
    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= N; ++j) {
            scanf("%d", &adj[i][j]);
        }
    }
}
void DFS(int depth, int v, int cost) {
    if (depth >= N) {
        // 마지막 위치에서 집(1)으로 돌아가야 합니다.
        if (adj[v][1] && ans > cost + adj[v][1])
            ans = cost + adj[v][1];
        return;
    }
    // 현재 지점에서 연결된 곳을 DFS 탐색
    for (int i = 2; i <= N; ++i) {
        // 이미 방문한 곳은 제외 (1번씩만 방문하기 때문)
        // 연결되어 있지 않은 곳 제외
        if (visited[i] || !adj[v][i]) continue;
        // 가망이 없는 경우 제외
        if (cost + adj[v][i] > ans) continue;
        visited[i] = 1;
        DFS(depth + 1, i, cost + adj[v][i]);
        visited[i] = 0;
    }
}
int main() {
    // freopen("input.txt", "r", stdin);
    input();
    // 집(1번)을 제외하고 모두 순회해야 합니다.
    visited[1] = 1;
    DFS(1, 1, 0);
    printf("%d\n", ans);
}