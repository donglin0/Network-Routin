#pragma once
#include "SeqList.h"

//邻接矩阵实现图的存储类型定义
typedef struct
{
	SeqList vertices;  //存放顶点的顺序表
	int edge[MaxVertices][MaxVertices];//存放边的邻接矩阵
	int numOfEdges;  //边的数目
	int getVertexPos(DataType vertex) {//给出顶点在图中的位置
		for (int i = 0;i < numOfEdges;i++)
			if (vertices.list[i] == vertex) return i;
		return -1;
	}

}AdjMGraph;

//边信息结构体定义
typedef struct
{
	int row;  //行下标
	int col;  //列下标
	int weight;  //权值
}RowColWeight;

//void GraphInitiate(AdjMGraph* G);//置图G为空图
//void InsertVertex(AdjMGraph* G, DataType vertex);///插入顶点
//void InsertEdge(AdjMGraph* G, int v1, int v2, int weight);//删除一条第v1个顶点指向第v2个顶点的边。
//void DeleteEdge(AdjMGraph* G, int v1, int v2);//删除边								 
//void DeleteVertex(AdjMGraph* G, int v); //删除第v个顶点
//int GetFirstVex(AdjMGraph G, int v);//得到第一个邻接点
//int GetNextVex(AdjMGraph G, int v1, int v2);//v1的邻接点v2的邻接点
//void CreatGraph(AdjMGraph* G, DataType v[], int n, RowColWeight W[], int e);//创建图
//void Dijkstra(AdjMGraph* G, int v0, int distance[], int path[]);//迪克特斯拉算法求得是最短路径和相应的路由器
