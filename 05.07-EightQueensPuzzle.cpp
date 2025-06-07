/*******************************************************
 * File        : 05.07-EightQueensPuzzle.cpp
 * Description : 八皇后问题
 * Author      : Teacher
 * Date        : 2025-04-27
 * 题目:
 *    8*8棋盘山，放置8个皇后，两两之间互不攻击，即
 *    (1)不在棋盘同一行
 *    (2)不在棋盘同一列
 *    (3)不在棋盘同一对角线上。
 * 
 *******************************************************/


#include <iostream>
using namespace std;

const int Normalize = 9; //用来统一数组下标

int Num; //方案数
int q[9]; //8个皇后所占用的行号

bool S[9]; //S[1]-S[8],当前行是否安全
bool L[17]; //L[2]-L[16],(i-j)对角线是否安全
bool R[17]; //R[2]-L[16],(i+j)对角线是否安全
 
void Try(int col){
   //递归中止条件:所有列均已放上皇后
   if(col == 9){
      Num++;

      cout << "方案" << Num << ":";
      for(int k = 1; k <= 8; k++)
         cout << q[k] << " ";
      cout << endl;
      
      return;
   }

   //依次尝试当前列的8行位置
   for(int row = 1; row <= 8; row++){
      //判断拟放皇后位置是否安全
      if(S[row] && R[col + row] && L[col - row + Normalize]){
         //记录位置信息(行号)
         q[col] = row;

         //修改三个方向的安全性标记
         S[row] = false;
         L[col - row + Normalize] = false;
         R[col + row] = false;

         //递归尝试放下一列
         Try(col + 1);

         //回溯:恢复三个方向原有安全性
         S[row] = true;
         L[col - row + Normalize] = true;
         R[col + row] = true;
      }
   }
}

int main(){
   
   Num = 0;

   for(int i = 0; i < 9; i++)
      S[i] = true;

   for(int i = 0; i < 17; i++){
      L[i] = true;
      R[i] = true;
   }

   Try(1); //从第1列开始放皇后

   return 0;

}