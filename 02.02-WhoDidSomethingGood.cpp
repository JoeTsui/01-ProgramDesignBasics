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
 *      枚举+验证+循环
 *      这里是4名同学，可以将重复的代码写4遍，但若是400名同学呢？
 *      我们需要普遍的方法来解决
 *      break 整个循环不再执行；
 *      continue 跳过当前循环的一次执行

 *******************************************************/

#include <iostream>
using namespace std;

int main() {
    
    char GoodMan;
    for (GoodMan  = 'A'; GoodMan <= 'D'; GoodMan++)
    {
        int count = 0;
        if (GoodMan != 'A')
            count++;
        if (GoodMan == 'C')
            count++;
        if (GoodMan == 'D')
            count++;
        if (GoodMan != 'D')
            count++;
        if (count == 3) {
            cout << "GoodMan is " << GoodMan << "." << endl;
            break;
        }
    }
    
    return 0;
}