#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <queue>

using namespace std;

int scan()
{
    int n;
    scanf("%d",&n);
    return -n;
}

int main()
{
    int n;
    while(scanf("%d",&n)&&n)
    {
        priority_queue<int>q;
        for(int i=0; i<n; i++)q.push(scan());
        int sum=0;
        for(int i=0; i<n-1; i++)
        {
            int cost=-q.top();
            q.pop();
            cost+=-q.top();
            q.pop();
            sum+=cost;
            q.push(-cost);
        }
        printf("%d\n",sum);
    }
    return 0;
}
