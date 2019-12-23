#include"ListDelete.h"

int ListDelete(SeqList* L, int i, DataType* x)
/*删除顺序表L中位置为i(0 <= i = size-1)的数据元素并存放到x中*/
/*删除成功返回1，删除失败返回0*/
{
	int j;
	if (L->size <= 0)
	{
		printf("顺序表已空无数据元素可删!\n");
		return 0;
	}
	else if (i < 0 || i > L->size - 1)
	{
		printf("参数i不合法!\n");
		return 0;
	}
	else
	{
		*x = L->list[i];  /*保存删除的元素到x中*/
		/*依次前移*/
		for (j = i + 1; j <= L->size - 1; j++)
			L->list[j - 1] = L->list[j];
		L->size--;        //元素个数减1
		return 1;
	}
}
