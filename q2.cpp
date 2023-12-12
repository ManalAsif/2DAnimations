#include <iostream>
#include <stdlib.h>
using namespace std;
void grid(char arr[][50]){

  for(int i=0;i<25;i++){
    for(int j=0;j<50;j++){
      if(j==0 || j==49){
        arr[i][j]= '|';
      }
      if(i==12 && j==25){
        arr[i][j]= '+';
      }else if((j>0 && j<49)&& i!=0 && i!=24){
          arr[i][j]= ' ' ;
      }
      if(i==0 || i==24){
        arr[i][j]= '-';
      }

    }
  }
}
void print(char arr[][50],char arr1[][50]){
    for(int i=0;i<25;i++){
      for(int j=0;j<50;j++)
      {
        cout<<arr[i][j];
      }  for(int x=0;x<50;x++)
      {
        cout<<arr1[i][x];
      }
      cout<<endl;
    }



}
void right(char arr[][50],char arr1[][50])
{
  int i=12;
  for(int j=26;j<47;j++){

    arr[i][j]= ' ';
    arr[i][j+1]= '-';
    arr[i][j+2]= '>';
    
  }
   for(int j=24;j>3;j--){
    arr1[i][j]= ' ';
    arr1[i][j-1]= '-';
    arr1[i][j-2]= '<';
    print(arr,arr1);
  }




}
void left(char arr[][50],char arr1[][50]){
  int i=12;
  for(int j=24;j>3;j--){
    arr[i][j]= ' ';
    arr[i][j-1]= '-';
    arr[i][j-2]= '<';
    

  }
  
  for(int j=26;j<47;j++){

    arr1[i][j]= ' ';
    arr1[i][j+1]= '-';
    arr1[i][j+2]= '>';
}
}
void up(char arr[][50],char arr1[][50])
{
  int j = 25;
  for (int i = 11; i > 2; i--)
    {
        arr[i][j] = ' ';
        arr[i-1][j] = '|';
        arr[i-2][j] = '^';
       
    }
    for (int i = 11; i > 2; i--)
    {
        arr[i][j] = ' ';
        arr[i-1][j] = '|';
        arr[i-2][j] = '^';
       
    }
    
 
}
void down(char arr[][50],char arr1[][50])
{
  int j = 25;
  for (int i = 13; i < 22; i++)
    {
        arr[i][j] = ' ';
        arr[i+1][j] = '|';
        arr[i+2][j] = 'v';
       
    }
    for (int i = 13; i < 22; i++)
    {
        arr1[i][j] = ' ';
        arr1[i+1][j] = '|';
        arr[i+2][j] = 'v';
       
    }
 
  
}

void all(char arr[][50],char arr1[][50])
{
  int i = 12;
  int j = 25;
  
  for (int i = 11; i > 2; i--)
  {
      arr[i][j] = ' ';
      arr[i-1][j] = '|';
      arr[i-2][j] = '^';
  }
  for (int i = 13; i < 22; i++)
  {
      arr[i][j] = ' ';
      arr[i+1][j] = '|';
      arr[i+2][j] = 'v';
  }
  for(int j=24;j>3;j--){
    arr[i][j]= ' ';
    arr[i][j-1]= '-';
    arr[i][j-2]= '<';
  }
  for(int j=26;j<47;j++){

    arr[i][j]= ' ';
    arr[i][j+1]= '-';
    arr[i][j+2]= '>';
  }
   
  for (int i = 11; i > 2; i--)
  {
      arr1[i][j] = ' ';
      arr1[i-1][j] = '|';
      arr1[i-2][j] = '^';
  }
  for (int i = 13; i < 22; i++)
  {
      arr1[i][j] = ' ';
      arr1[i+1][j] = '|';
      arr1[i+2][j] = 'v';
  }
  for(int j=24;j>3;j--){
    arr1[i][j]= ' ';
    arr1[i][j-1]= '-';
    arr1[i][j-2]= '<';
  }
  for(int j=26;j<47;j++){

    arr1[i][j]= ' ';
    arr1[i][j+1]= '-';
    arr1[i][j+2]= '>';
  }
  print(arr,arr1);
  
}

 
int main(){
  char arr[25][50];
  char arr1[25][50];
  grid(arr);
  grid(arr1);
  print(arr,arr1);
  
  cout<<"Enter a number (0/1/2/3/4)";
  char x;
  cin>>x;
  if (x == '0')
  {
    right(arr,arr1);
  }

  
  else if (x == '1')
  {
    
    right(arr,arr1);
  }
  else if (x == '2')
  {
    up(arr,arr1);
  }
  else if ( x == '3')
  {
    down(arr,arr1);
  }
  else if ( x == '4')
  {
    all(arr,arr1);
  } 
  return 0;
} 