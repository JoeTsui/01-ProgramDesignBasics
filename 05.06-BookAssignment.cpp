/*******************************************************
 * File        : 05.06-BookAssignment.cpp
 * Description : 分书问题
 * Author      : Teacher
 * Date        : 2025-04-24
 * 题目:
 *    5本书分给5个人，每人喜好如下：
 *      书 0  1  2  3  4
 *    人
 *    A    0  0  1  1  0
 *    B    1  1  0  0  1
 *    C    0  1  1  0  1
 *    D    0  0  0  1  0
 *    E    0  1  0  0  1
 *    找到所有的分配方案，让所有人满意。
 * 
 *******************************************************/

#include <iostream>
using namespace std;

int Num;            //方案数
int take[5];        //5本书分别分给谁（用户编号）

bool assigned[5];   //5本书是否已分配

int like[5][5] = {  {0,0,1,1,0},
                  {1,1,0,0,1},
                  {0,1,1,0,1},
                  {0,0,0,1,0},
                  {0,1,0,0,1}    };

void Try(int id){
   //递归中止条件：所有读者均已分配合适书籍
   if(id == 5){
      //方案数加1
      Num++;

      //输出方案细节
      cout << "第" << Num << "个方案(按ABCDE次序): ";
      for(int i = 0; i < 5; i++)
         cout << take[i] << ' ';
      cout << endl;

      return;
   }

   //逐一为每本书找到合适的读者
   for(int book = 0; book <= 4; book++){
      //是否满足分书条件
      if((like[id][book] == 1) && !assigned[book]){
         //记录当前这本书的分配情况
         take[id] = book;
         assigned[book] = true;

         //为下一位读者分配合适书籍
         Try(id+1);

         //将书退还(回溯),尝试另一种方案
         assigned[book] = false;
      }
   }
}

int main(){

   Num = 0; //分书方案初始值
   for(int book = 0; book < 5; book++)
      assigned[book] = false;

   //从第0个人（A）开始分书
   Try(0);

   return 0;
   
}