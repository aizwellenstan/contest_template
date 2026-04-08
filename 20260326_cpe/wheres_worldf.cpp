#include <bits/stdc++.h>

char g[55][55], w[55];
int m, n, k, T, dr[]={-1,-1,-1,0,0,1,1,1}, dc[]={-1,0,1,-1,1,-1,0,1};

bool check(int r, int c, int d) {
    for (int i=0; w[i]; i++) {
        int nr = r + i*dr[d], nc = c + i*dc[d];
        if (nr<0 || nr>=m || nc<0 || nc>=n || g[nr][nc] != tolower(w[i])) return 0;
    }
    return 1;
}

int main() {
    scanf("%d", &T);
    while (T--) {
        scanf("%d %d", &m, &n);
        for (int i=0; i<m; i++) {
            scanf("%s", g[i]);
            for (int j=0; j<n; j++) g[i][j] = tolower(g[i][j]);
        }
        scanf("%d", &k);
        while (k--) {
            scanf("%s", w);
            bool f = 0;
            for (int i=0; i<m && !f; i++)
                for (int j=0; j<n && !f; j++)
                    for (int d=0; d<8 && !f; d++)
                        if (check(i, j, d)) {
                            printf("%d %d\n", i+1, j+1);
                            f = 1;
                        }
        }
        if (T) puts("");
    }
}
