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
        // ������ ��ġ���� ��(1)���� ���ư��� �մϴ�.
        if (adj[v][1] && ans > cost + adj[v][1])
            ans = cost + adj[v][1];
        return;
    }
    // ���� �������� ����� ���� DFS Ž��
    for (int i = 2; i <= N; ++i) {
        // �̹� �湮�� ���� ���� (1������ �湮�ϱ� ����)
        // ����Ǿ� ���� ���� �� ����
        if (visited[i] || !adj[v][i]) continue;
        // ������ ���� ��� ����
        if (cost + adj[v][i] > ans) continue;
        visited[i] = 1;
        DFS(depth + 1, i, cost + adj[v][i]);
        visited[i] = 0;
    }
}
int main() {
    // freopen("input.txt", "r", stdin);
    input();
    // ��(1��)�� �����ϰ� ��� ��ȸ�ؾ� �մϴ�.
    visited[1] = 1;
    DFS(1, 1, 0);
    printf("%d\n", ans);
}