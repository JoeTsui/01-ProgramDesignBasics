
// target为待插入的牌,求比target的大的最小的一张牌
for(int i = 1; i < 13; i++){

    int target = cards[i], min = 500; pos = -1;
    
    for(int j = 0; j < i; j++){
        if(cards[j] > target)
            if(card[j] < min){
                min = cards[j];
                pos = j;
            }        
    }

    if (pos != -1)
    {
        for(int j = i; j > pos; j--)
            cards[j] = cards[j - 1];
        cards[pos] = target;
        
    }
}

for (int i = 1; i < 13; i++)
{
    int target = cards[i], pos = 0;
    while(target > cards[pos])
        pos++;
    for(int j = i; j > pos; j--)
        cards[j] = cards[j - 1];
    cards[pos] = target;
}



假设当前 cards = {3, 5, 7, 4},我们处理的是第 i = 3 项(target = 4):
第一版:

    比 4 大的数有:5、7

    其中最小的是 5

    插入到 5 前

第二版:

    从头开始比:3(跳过),5(比 4 大,停),插入到 5 前

    最终插入位置一致,过程更简单直接。