#include<stdio.h>
main()
{
int i,j,stack[10],top=-1,source,pop,nodes;
int adjacency[10][10],visit[10]={};
printf("Enter the no. of nodrs in the graph:");
scanf("%d",&nodes);
printf("\nEnter the adjacency matrix of graphs:\n");
for(i=1;i<=nodes;i++)
{
for(j=1;j<=nodes;j++)
{
scanf("%d",&adjacency[i][j]);
}
}
/* printing the adjacency matrix*/
printf("\n The adjacency matrix is:\n");
for(i=1;i<=nodes;i++)
{
for(j=1;j<=nodes;j++)
{
printf(" %d  ",adjacency[i][j]);
}
printf(" \n ");
}
printf("Enter the source vertex for D.F.S");
scanf("%d",&source);
top++;
stack[top]=source;
while(top>=0)
{
pop=stack[top];
top--;
if(visit[pop]==0)
{
printf("%d",pop);
visit[pop]=1;
}
for(i=1;i<=nodes;i++)
{
if(adjacency[pop][i]==1 && visit[i]==0)
{
top++;
stack[top]=i;
}
}
}
}

