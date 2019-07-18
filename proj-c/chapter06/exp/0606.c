/*
返回x的n次幂
*/

double power(double x,int n)
{
	double tmp = 1.0;

	while (n-- >0)
		tmp *= x;
	return tmp;
}