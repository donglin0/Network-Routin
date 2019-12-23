#include"CreatGraph.h"
#include"GraphInitiate.h"
#include"InsertEdge.h"
#include"InsertVertex.h"
//创建有向图G，通过在空图G中插入n个顶点和e条边实现。时间复杂度:O(n^2+e)。
void CreatGraph(AdjMGraph* G, DataType v[], int n, RowColWeight W[], int e)
{
	int i, k;
	GraphInitiate(G);//图初始化
	for (i = 0;i < n;i++)
	{
		InsertVertex(G, v[i]);//插入顶点
	}
	for (k = 0;k < e;k++)
		InsertEdge(G, W[k].row, W[k].col, W[k].weight);//插入边
}
