#include"DeleteVertex.h"
//删除顶点
void DeleteVertex(AdjMGraph* G, int v)
{

	int m3, i, j;
	m3 = v - 1;

	if (m3 < 0 || m3 >= G->vertices.size)
	{
		printf("对不起，此链路内没有您想要删除的路由节点\n");
		exit(0);
	}
	else
	{
		//for(i=m3;i < G->vertices.size;i++)
		for (j = 0, i = m3;j < G->vertices.size;j++)
		{
			G->edge[j][i] = MaxWeight;//边的权值改为最大值表示不连通
		}

		//for(i=m3;i < G->vertices.size;i++)
		for (i = m3, j = 0;j < G->vertices.size;j++)
			G->edge[i][j] = MaxWeight;//有向图修改两次
		//for(i=m3;i < G->vertices.size;i++)
		//G->vertices.list[i]=G->vertices.list[i]-1;
		//G->vertices.size--;
		printf("删除结点成功\n");
	}

}