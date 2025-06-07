/*******************************************************
 * File        : 02.01-WhoDidSomethingGood.cpp
 * Description : 谁做了好事
 * Author      : Teacher
 * Date        : 2025-04-08
 * Notes       : 
 *      4位同学，其中1名同学做了好事，校长问谁做了好事？
 *      A说：不是我
 *      B说：是C
 *      C说：是D
 *      D说：他胡说
 *      已知3个人说的真话，1个人说的假话，找到做好事的人。
 * 
 * 解题思路:
 *      枚举+验证
 *******************************************************/

#include <iostream>
using namespace std;

int main() {
    
    char GoodMan;
    int count = 0;
    GoodMan = 'A';
    if (GoodMan != 'A')
        count++;
    if (GoodMan == 'C')
        cout++;
    if (GoodMan == 'D')
        cout++;
    if (GoodMan != 'D')
        count++;
    if (count == 3)
        cout << GoodMan << endl;
        else {
            GoodMan = 'B';
            ....
        }

    return 0;
}