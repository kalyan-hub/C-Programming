//program to implement kruskal's algorithm
#include<stdio.h>
#include<stdlib.h>
int i,j,k,a,b,u,v,n,ne=1;//ne=no.of edges,n=no.of edges
int min,mincost=0,cost[9][9],parent[9];
int find(int);
int uni(int,int);
int main()
{
printf("\n implementataion of kruskal's algorithm\n");
printf("\n enter the number of vertices:");
scanf("%d",&n);
printf("\n enter the cost adjacency matrix:");
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
printf("\n cost of(%d,%d)edge is:",i,j);
scanf("%d",&cost[i][j]);
if(cost[i][j]==0)
cost[i][j]=999;
}
}
printf("\n the edges of MST are:\n");
while(ne<n)
{
for(i=1,min=999;i<=n;i++)
{
for(j=1;j<=n;j++)
{
if(cost[i][j]<min)
{
min=cost[i][j];
a=u=i;
b=v=j;
}
}
}
u=find(u);
v=find(v);
if(uni(u,v))
{
printf("%d edge(%d,%d)=%d\n",ne++,a,b,min);
mincost+=min;
}
cost[a][b]=cost[b][a]=999;
}
printf("\n\t minimum cost=%d\n",mincost);
}
int find(int i)
{
while(parent[i])
i=parent[i];
return i;
}
int uni(int i,int j)
{
if(i!=j)
{
parent[j]=i;
return 1;
}
}
 

