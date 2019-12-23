#include"CreatGraph.h"
#include"DeleteEdge.h"
#include"DeleteVertex.h"
#include"Dijkstra.h"
#include"GetFirstVex.h"
#include"GetNextVex.h"
#include"GraphInitiate.h"
#include"InsertEdge.h"
#include"InsertVertex.h"



void putList();
void Deletevertex();
void Deleteedge();
void Insertedge();
void Insertvertex();

AdjMGraph g1;//邻接矩阵
int a[MaxSize];//结点
RowColWeight rcw[100];//权值

void menu()
{
	while (1)
	{
		cout << "\t\t\t\t**************网络路由算法***************" << endl
			<< "\t\t\t\t*\t\t1.输出路由表\t\t*" << endl
			<< "\t\t\t\t*\t\t2.删除结点\t\t*" << endl
			<< "\t\t\t\t*\t\t3.删除边\t\t*" << endl
			<< "\t\t\t\t*\t\t4.填加结点\t\t*" << endl
			<< "\t\t\t\t*\t\t5.填加边\t\t*" << endl
			<< "\t\t\t\t*\t\t6.退出系统\t\t*" << endl
			<< "\t\t\t\t*****************************************" << endl;
		
		int cho;
		cout << "***请输入选择：***" << endl;
		cin >> cho;
		switch (cho)
		{
		case 1:
			cout << "\t\t\t\t**************输出路由表***************" << endl;
			putList();break;
		case 2:
			cout << "\t\t\t\t**************删除结点***************" << endl;
			Deletevertex();break;
		case 3:
			cout << "\t\t\t\t**************删除边***************" << endl;
			Deleteedge();break;
		case 4:
			cout << "\t\t\t\t**************插入结点***************" << endl;
			Insertvertex();break;
		case 5:
			cout << "\t\t\t\t**************插入边***************" << endl;
			Insertedge();break;
		case 6:
			cout << "***谢谢使用！***" << endl;
			exit(0);
		default:
			cout << "***请您看清楚再输入！OK？***" << endl << endl;
		}
	}
}

void putList()
{
	int i, j;
	int distance[MaxSize], path[MaxSize];//注意大小
	printf("请输入要生成的路由表的起始路由器:\n");
	scanf_s("%d", &i);
	i--;
	Dijkstra(&g1, i, distance, path);
	printf("顶点%d到其他各顶点的最短距离如下：\n", g1.vertices.list[i]);
	for (j = 0;j < g1.vertices.size;j++)
		cout << "<" << g1.vertices.list[i] << "," << g1.vertices.list[j] << ">最短距离为：" << distance[j] << endl;
}

void Deletevertex()
{
	int i;
	printf("请输入你要删除的是第几个顶点v：\n");
	scanf_s("%d", &i);
	DeleteVertex(&g1, i);
}

void Deleteedge()
{
	int i, j;
	printf("请输入你要删除的边的两个顶点v1,v2：\n");
	scanf_s("%d%d", &i, &j);
	DeleteEdge(&g1, i - 1, j - 1);
}

void Insertedge()
{
	int i, j, w;
	printf("请输入你要插入的边的两个顶点和其权直v1,v2,w：\n");
	scanf_s("%d%d%d", &i, &j, &w);
	InsertEdge(&g1, i - 1, j - 1, w);
}

void Insertvertex()
{
	DataType i;
	printf("请输入你要插入的顶点：\n");
	cin >> i;
	InsertVertex(&g1,i);
	//cout << "*插入成功！*" << endl;
}

int main()
{
	int i=0, j=0, k=0;
	FILE* fp=NULL;          //读入文件
	fopen_s(&fp,"tuoputu10.txt", "r");
	fscanf_s(fp, "%d", &i);//从文件读入i
	for (k = 0;k < i;k++)
	{
		fscanf_s(fp, "%d", &a[k]);//从文件读入顶点
	}
	fscanf_s(fp, "%d", &j);//从文件读入j
	for (k = 0;k < j;k++)
	{
		fscanf_s(fp, "%d%d%d", &rcw[k].row, &rcw[k].col, &rcw[k].weight);//从文件输入权值
	}
	fclose(fp);

	GraphInitiate(&g1);//置空图
	CreatGraph(&g1,a, i, rcw, j);//创建图
	menu();
}
