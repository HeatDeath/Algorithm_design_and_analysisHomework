#include<iostream>
#include<cmath>
using namespace std;
void BubbleSort(int r[], int n)
{
	int bound, exchange = n - 1;   //第一趟起泡排序的区间是【0，n-1】
	while (exchange != 0)        //当上一趟排序有记录交换时
	{
		bound = exchange;
		exchange = 0;
		for (int j = 0; j<bound; j++)   //一趟起泡排序区间是【0，bound】
			if (r[j]>r[j + 1])
			{
				int temp = r[j];      //交换记录
				r[j] = r[j + 1];
				r[j + 1] = temp;
				exchange = j;        //记载每一次记录交换的位置
			}
	}
}
int main()
{
	int n;
	int r[100];
	int j;
	cin >> n;
	for (int i = 0; i<n; i++)
	{
		cin >> r[i];
	}
	BubbleSort(r, n);
	int a = 0;
	int b = 1;
	int dx = abs(r[1] - r[0]);
	for (j = 0; j<n; j++)
	{
		int dTmp;

		dTmp = abs(r[j + 1] - r[j]);
		if (dTmp<dx)
		{
			a = j;
			b = j + 1;
			dx = dTmp;
		}
	}
	cout << "最接近数的差值是" << abs(r[a] - r[b]) << endl;
}