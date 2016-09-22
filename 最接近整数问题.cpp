#include<iostream>
#include<cmath>
using namespace std;
void BubbleSort(int r[], int n)
{
	int bound, exchange = n - 1;   //��һ����������������ǡ�0��n-1��
	while (exchange != 0)        //����һ�������м�¼����ʱ
	{
		bound = exchange;
		exchange = 0;
		for (int j = 0; j<bound; j++)   //һ���������������ǡ�0��bound��
			if (r[j]>r[j + 1])
			{
				int temp = r[j];      //������¼
				r[j] = r[j + 1];
				r[j + 1] = temp;
				exchange = j;        //����ÿһ�μ�¼������λ��
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
	cout << "��ӽ����Ĳ�ֵ��" << abs(r[a] - r[b]) << endl;
}