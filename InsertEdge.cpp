#include"InsertEdge.h"
#include"ListGet.h"
void InsertEdge(AdjMGraph* G, int v1, int v2, int weight)
{
	DataType x;
	//int i = G->getVertexPos(v1);
	//int j = G->getVertexPos(v2);
	int i = v1;
	int j = v2;

	if (i != j)
	{
		if ((ListGet(G->vertices, i, &x) == 0) || (ListGet(G->vertices, j, &x) == 0))
		{
			printf("插入边时参数v1和v2越界出错！\n");
			exit(1);
		}
		G->edge[v1][v2] = weight;
		G->edge[v2][v1] = weight;//有向图，两边
		G->numOfEdges++;
	}
}
