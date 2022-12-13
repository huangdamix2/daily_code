#include<stdio.h>

void work(int mp[][210],int q)
{
    while (q -- )
    {

        int x, y; scanf("%d%d", &x, &y);
        if (mp[x][y])
        {
            printf("Boom!\n");
            continue;
        }
        int dx[10]={-1, 0, 1, 1, 1, 0, -1, -1}, dy[10]={-1, -1, -1, 0, 1, 1, 1, 0};
        int cnt = 0;
        for (int i = 0; i < 8; i ++ )
        {
            int nX = x + dx[i], nY = y + dy[i];
            // if (nX >= 1 && nY >= 1)
                if (mp[nX][nY] == 1) cnt ++ ;
        }
        printf("%d\n", cnt);
    }
    
}

int main()
{
    int mp[210][210];
    int n,m,q,i,j;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            scanf("%d",&mp[i][j]);
        }
    }
    scanf("%d",&q);
    work(mp,q);
}