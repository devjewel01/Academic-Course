#include<stdio.h>

int main()
{
    int graph[50][50];
    int i,j,edge,vertex,p,x,y,indegree1[90]= {0},outdegree1[90]= {0},a,q,w;

    printf("Enter the Number of Vertex : ");
    scanf("%d",&vertex);

    printf("\n");

    printf("Enter the Number of Edge : ");
    scanf("%d",&edge);
    printf("\n");


    for(w=1; w<=vertex; w++)
        for(q=1; q<=vertex; q++)
            graph[w][q]=0;


    for(i=1; i<=edge; i++)
    {
        scanf("%d%d",&x,&y);
        graph[x][y]=1;
    }
    printf("\n");


    for(i=1; i<=vertex; i++)
    {
        for(j=1; j<=vertex; j++)
        {
            if(graph[i][j]==1)
            {
                outdegree1[i]++;
                indegree1[j]++;
            }
        }

    }

    printf("Indegree\n");
    for(p=1; p<=vertex; p++)
    {
        printf("%d : %d\n",p,indegree1[p]);
    }

    printf("Outdegree\n");
    for(a=1; a<=vertex; a++)
    {
        printf("%d : %d\n",a,outdegree1[a]);
    }


    return 0;
}
