#include"GraphInitiate.h"
#include"ListInitiate.h"

//置带权有向图G为空图
void GraphInitiate(AdjMGraph* G)

{
	int i, j;
	for (i = 0;i < MaxVertices;i++)
		for (j = 0;j < MaxVertices;j++)
		{
			if (i == j) {
				G->edge[i][j] = 0;
			}
			else {
				G->edge[i][j] = MaxWeight;//MaxWeight表示权值无穷大
			}
		}
	G->numOfEdges = 0;  //边的条数置为0
	ListInitiate(&G->vertices);  //顶点顺序表初始化
}