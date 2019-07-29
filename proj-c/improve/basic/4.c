/*通过键盘输入一个圆的半径（浮点型），求出圆的周长和面积并显示
（小数点后去四位，圆周率取3.14）
*/
#include <stdio.h>

int main(void)
{
	double r,l,s;	//l=2*3.14*r 	s=3.14*r*r

	printf("输入圆的半径:  "); scanf("%lf",&r);

	printf("圆的周长为:%.4f。\n", 2 * 3.14 * r);
	printf("圆的面积为:%.4f。\n", 3.14 * r * r);

	return 0;
}