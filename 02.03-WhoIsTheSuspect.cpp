/*******************************************************
 * File        : 02.03-WhoIsTheSuspect.cpp
 * Description : 谁是嫌疑犯
 * Author      : Teacher
 * Date        : 2025-04-08
 * Notes       : 
 *      某地刑侦大队对涉及6个嫌疑人一桩疑案进行分析：
 *      （1）A、B至少有一人作案；
 *      （2）A、D不可能是同案犯；
 *      （3）A、E、F这3人至少有2人参与作案；
 *      （4）B、C或同时作案，或与本案无关；
 *      （5）C、D中有且仅有1人作案；
 *      （6）如果D没有参与作案，则E也不可能参与作案。
 *      写一程序，找到作案人。
 * 
 * 解题思路:
 *      枚举每一种情况，总共6个人，每个人有参与作案、
 *      未参与作案2种情况，因此枚举的情况共有2^6种。
 *      break仅能退出一层循环，我们换种方法，定义一个
 *      变量，found
 * 
 * 表示：
 *      某人 = 1；作案
 *      某人 = 0；未作案
 *******************************************************/

#include <iostream>
using namespace std;

int main() {
    
    int A, B, C, D, E, F;
    bool found = false;

    for (int A = 0; A <= 1 && !found; A++)
    {
        for (int B = 0; B <= 1 && !found; B++)
        {
            for (int C = 0; C <= 1 && !found; C++)
            {
                for (int D = 0; D <= 1 && !found; D++)
                {
                    for (int E = 0; E <= 1 && !found; E++)
                    {
                        for (int F = 0; F <= 1 && !found; F++)
                        {
                            bool b1 = (A == 1) || (B == 1);
                            bool b2 = !((A == 1) && (D == 1));
                            bool b3 = ((A == 1) && (E == 1)) ||
                                      ((A == 1) && (F == 1)) ||
                                      ((E == 1) && (F == 1));
                            bool b4 = ((B == 1) && (C == 1)) || 
                                      ((B == 0) && (C == 0));
                            bool b5 = ((C == 1) && (D == 0)) ||
                                      ((C == 0) && (D == 1));
                            bool b6 = ((D == 0) && (E == 0)) ||
                                      (D == 1);
                            
                            if (b1 && b2 && b3 && b4 && b5 && b6)
                            {
                                cout << A << B << C << D << E << F << endl;
                                found = true;
                            }
                            
                        }
                        
                    }
                    
                }
                
            }
            
        }
        
    }
    
    return 0;
}