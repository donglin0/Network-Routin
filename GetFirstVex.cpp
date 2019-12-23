#include"GetFirstVex.h"
#include"ListGet.h"

//在带权有向图G中取第v个顶点的第一个邻接顶点，如果这样的邻接顶点存在，则返回该顶点在顶点顺序表的序号，否则返回-1。
int GetFirstVex(AdjMGraph G, int v)

{
	int col;//列号
	DataType x;
	v = v - 1;
	if (ListGet(G.vertices, v, &x) == 0)
	{
		printf("取第一个邻接顶点时参数v越界出错！\n");
		exit(1);
	}
	//寻找邻接矩阵v行中从最左开始第一个值非零且非无穷大的权值对应的顶点
	for (col = 0;col < G.vertices.size;col++)
		if (G.edge[v][col] > 0 && G.edge[v][col] < MaxWeight)
			return col;
	return -1;
}