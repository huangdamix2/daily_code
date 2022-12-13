#include <iostream>

using namespace std;

const int N = 1000010;

int a[N], q[N];

int main()
{
    int n, k;
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; i ++ ) scanf("%d", &a[i]);

    int hh = 0, tt = -1; // hh 队头 , tt 队尾
    for (int i = 0; i < n; i ++ )
    {
    	// 判断队头是否已经滑出了队列
        if (hh <= tt && i - k + 1 > q[hh]) hh ++ ; // 终点是i, 起点是i-k+1

        while (hh <= tt && a[q[tt]] >= a[i]) tt -- ; // q存的是下标，取值要套一个a数组
        q[ ++ tt] = i;
        /*
        printf("-------\n");
        printf("hh:%d tt:%d\n", hh, tt);
        printf("-------\n\n");
        */

        if (i >= k - 1) printf("%d ", a[q[hh]]); // 此题是从前k个输出，若最后数量小于k则不用输出
    }

    /**
     * 队列寸的是下标
     * 优化：取最值可以取两个端点
     * 查找元素可以用二分
     * q[hh] 为队头
     */

    puts("");

    hh = 0, tt = -1;
    for (int i = 0; i < n; i ++ )
    {
    	// 判断队头是否已经滑出了队列
        if (hh <= tt && i - k + 1 > q[hh]) hh ++ ;

        while (hh <= tt && a[q[tt]] <= a[i]) tt -- ;
        q[ ++ tt] = i;

        if (i >= k - 1) printf("%d ", a[q[hh]]);
    }

    puts("");

    return 0;
}
