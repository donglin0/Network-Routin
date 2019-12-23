#include"ListGet.h"

int ListGet(SeqList L, int i, DataType* x)
/*取顺序表L中第i个数据元素存于x中，成功返回1，失败返回0*/
{
	if (i < 0 || i > L.size - 1)
	{
		printf("参数i不合法!\n");
		return 0;
	}
	else
	{
		*x = L.list[i];//将值赋给x
		return 1;
	}
}