/*请输入星期几的第一个字母来判断一下是星期几，
如果第一个字母一样，则继续判断第二个字母。
*/

#include <stdio.h>

int main(void) {
    char frist, second;

    printf("输入星期的首字母: \n");
    scanf("%c", &frist);

    switch (frist) {

    case 'm':
    case 'M':
        printf("周一 monday\n");
        break;

    case 't':
    case 'T':
        printf("输入第二个字母: ");
        getchar();
        scanf("%c", &second);

        if (second == 'u') {printf("周二 tuesday。\n");}
        else if (second == 'h') {printf("周四 thursday。\n");}
        else {printf("error\n");}
        
        break;

    case 'w':
    case 'W':
        printf("周三 wednesday\n");
        break;

    case 'f':
    case 'F':
        printf("周五 friday\n");
        break;

    case 's':
    case 'S':
        printf("输入第二个字母:\n");
        scanf("%c", &second);

        if (second == 'a') {printf("周六 saturday\n");}
        else if (second == 'u') {printf("周日 sunday\n");}
        else {printf("error\n");}
        
        break;

        default:
        printf("error\n");
    	break;
    }

    return 0;
}