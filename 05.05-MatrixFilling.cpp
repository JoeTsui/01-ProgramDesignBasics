/*******************************************************
 * File        : 05.05-MatrixFilling.cpp
 * Description : 数字方阵旋转填充
 * Author      : Teacher
 * Date        : 2025-04-23
 * 题目:
 *      
 * 
 * 解题思路:
 * 数字方阵的旋转填充，
 * 在一个 N×N 的矩阵中，
 * 从一个起点（例如矩阵的左上角）开始，
 * 以顺时针或逆时针的方式填充数字，
 * 直到矩阵填充完成。
 * 
 *        
 *******************************************************/

 #include <iostream>
 using namespace std;



 int main(){

 }

// matrix为总矩阵，size为剩余的矩阵的大小，num为要填的第一个数，
// offset为剩余矩阵在总矩阵中的位置
void FillMatrix(int matrix[N][N], int size, int num, int offset){
    
    // 递归中止条件1
    if(size == 0)
        return;
    // 递归中止条件2
    if(size == 1){
        matrix[offset][offset] = sum;
        return;

    }
    // 先填充外围
    for(int i = 0; i < size - 1; i++){
        matrix[offset + i][offset] = num + i;
        matrix[offset + size - 1][offset + i] = num + (size - 1) + i;
        matrix[offset + size - 1 - i][offset + size - 1] = num + 2 * (size - 1) + i;
        matrix[offset][offset + size - 1 - i] = num + 3 * (size - 1) + i;
    }
    // 再递归填充内核（小了一圈的子阵）
    FillMatrix(matrix, size - 2, num + 4 * (size - 1), offset + 1);
}