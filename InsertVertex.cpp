#include"InsertVertex.h"
#include"ListInsert.h"
//插入顶点
void InsertVertex(AdjMGraph* G, DataType vertex)
{
	if (ListInsert(&G->vertices, G->vertices.size, vertex) == 0)//在顶点顺序表的表尾插入顶点vertex
	{
		printf("插入顶点时空间已满无法插入！");
		exit(1);
	}
}
