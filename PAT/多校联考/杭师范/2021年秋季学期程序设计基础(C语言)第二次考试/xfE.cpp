
#include<stdio.h>

void work(int mp[][210],int q)
{
    while(q--)
    {
       int x,y;    
    scanf("%d%d",&x,&y);
        if(mp[x][y]==1) printf("Boom!\n");
        else 
        {
            int sum=0;
            for(int i=y-1;i<=y+1;i++)
            {
                for(int j=x-1;j<=x+1;j++)
                {
                    if(mp[i][j]==1) sum++;
                }
            }
            printf("%d\n",sum);
        } 
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