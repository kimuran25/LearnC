#include <stdio.h>
/*
    代入演算子をを用いた計算
*/
 
void main()
{
    /* 使用する変数の定義 */
    int a1=2,b1=2,c1=2,d1=2;    // 変数の宣言(1)
    int a2=2,b2=2,c2=2,d2=2;    // 変数の宣言(2)
    //  普通の演算による計算と代入
    a1 = a1 + 1;
    b1 = b1 - 1;
    c1 = c1 * 2;
    d1 = d1 / 2;
    //  代入演算による計算
    a2 += 1;
    b2 -= 1;
    c2 *= 2;
    d2 /= 2;    
    printf("a1=%d b1=%d c1=%d d1=%d\n",a1,b1,c1,d1);
    printf("a2=%d b2=%d c2=%d d2=%d\n",a2,b2,c2,d2);
}