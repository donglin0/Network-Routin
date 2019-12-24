#include"DeleteEdge.h"
// 在带权有向图G中删除一条第v1个顶点指向第v2个顶点的边。

void DeleteEdge(AdjMGraph* G, int v1, int v2)

{
	//cout<<"邓超文"<<endl;
	G->edge[v1][v2] = MaxWeight;
	G->edge[v2][v1] = MaxWeight;
	G->numOfEdges--;
}