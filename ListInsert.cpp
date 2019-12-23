#include"ListInsert.h"

int ListInsert(SeqList* L, int i, DataType x)
/* 在顺序表L的第i(0 <= i = size)个位置前插入数据元素值x插入成功返回1，插入失败返回0*/
{
	int j;
	//cout<<i<<"应有的数字"<<endl;
	if (L->size >= MaxSize)
	{
		printf("顺序表已满无法插入!\n");
		return 0;
	}
	else if (i < 0 || i > L->size)
	{
		printf("参数i不合法!\n");
		return 0;
	}
	else
	{
		/*为插入做准备*/
		for (j = L->size; j > i; j--)
			L->list[j] = L->list[j - 1];
		L->list[i] = x;
		L->size++;      //元素个数加1
		return 1;
	}
}