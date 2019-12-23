#include"GetNextVex.h"
#include"ListGet.h"


//在带权有向图G中取第v1个顶点的继邻接结点第v2个顶点之后的下一个邻接结点。
int GetNextVex(AdjMGraph G, int v1, int v2)
{
	int col;
	DataType x;
	if ((ListGet(G.vertices, v1, &x) == 0) || (ListGet(G.vertices, v2, &x) == 0))
	{
		printf("取下一邻接顶点时参数v1和v2越界出错！\n");
		exit(1);
	}
	if (G.edge[v1][v2] == 0)
	{
		printf("v2不是v1的邻接顶点\n");
		exit(1);
	}
	//寻找邻接矩阵v行中从第v2+1列开始的第一个值非零且非无穷大的权值对应的顶点
	for (col = v2 + 1;col < G.vertices.size;col++)
		if (G.edge[v1][col] > 0 && G.edge[v1][col] < MaxWeight)
			return col;
	return -1;
}