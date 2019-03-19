/* 計算機概論實務-基本練習作業-作業2 */
/* 製作人：郭柏鋒 */
/* 完成時間：2019/03/15 09:00*/  
#include <stdio.h> //函示庫
#include <stdlib.h> //函示庫

int main() 
{
 int year,month,day; //定義年,月,日 
 printf("請輸入你的出生年分(西元)：");
 scanf("%d",&year);  //存年份 
 printf("請輸入你的出生月分：");
 scanf("%d",&month); //存月份 
 printf("請輸入你的出生日期：");
 scanf("%d",&day);  //存日期 
 printf("你的出生年月日為：%d年%d月%d日\n",year,month,day); //顯示存入的年月日 
 system("pause"); //暫停視窗    
 return 0; //回傳值為0  
}
