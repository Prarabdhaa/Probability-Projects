#include <iostream>
#include <vector>
#include <algorithm>  
#include <random> // for default_random_engine
#include <chrono> // for system_clock
extern "C" {
#include <stdlib.h>
#include <time.h>
}

using namespace std;

//Create Function prototypes for card loading and shuffling deck of cards
void shuffle(vector<int> &);
int deal(vector<int> &);
int remainingCards(vector<int> &);
void q4(vector<int> &);
//void q5(vector<int> &);
/*
player1[0]=deal(deck);
  player1[1]=deal(deck);
  //cout<<"Cards of Player 1: "<<player1[0]<<","<<player1[1]<<endl;
  p1_sum = player1[0]+player1[1];
  //cout<<"Total of Player1: "<<p1_sum;
  
  player2[0]=deal(deck);
  player2[1]=deal(deck);
  //cout<<"Cards of Player 2: "<<player1[0]<<","<<player1[1]<<endl;
  p1_sum = player1[0]+player1[1];
  //cout<<"Total of Player1: "<<p1_sum;
  
  player3[0]=deal(deck);
  player3[1]=deal(deck);
  //cout<<"Cards of Player 3: "<<player1[0]<<","<<player1[1]<<endl;
  p1_sum = player1[0]+player1[1];
  //cout<<"Total of Player1: "<<p1_sum;
  //if(p1_sum==21)
  //if(p1_sum>21)

  if(hand == 1 && my_sum+11 <= 21)
         {
          hand = 10;
          my_sum += hand;
         }
  dealer.push_back(deal(deck));
  //cout<<"Card dealt to the dealer: "<<dealer[0]<<endl;
*/


int remainingCards(vector<int> &deck){
   return (int) deck.size();
}

int deal(vector<int> &deck){
  int x;
  if((int) deck.size()>0)
  { x = deck.back();
  deck.pop_back();}
  else
  {
    for (int j=1; j<=4; j++)
  {
    for (int i=1; i<=10; i++) 
      deck.push_back(i);
    for (int x=1; x<=3; x++)     
    deck.push_back(10);
  }
   shuffle(deck);
   x = deck.back();
   deck.pop_back();

  }
return x;
}



void shuffle(vector<int> &deck)
{ 
   int temp[52];
   int i,t;

  for(i=0; i<52;i++){
   temp[i]=deck[i];
   
  }
   int j;
    for(i=0;i<=50;i++){
    
     j = i + rand()/((RAND_MAX/(52-i))+1);
     
     t=temp[j];
     temp[j]=temp[i];
     temp[i]=t;
 }

for(i=0; i<52;i++){
deck.pop_back();  
}
   

for(i=0; i<52;i++)
deck.push_back(temp[i]);


}

int main(int argc,char *argv[]){

srand((unsigned int)time(NULL));
vector<int> deck;
  // set some content in the vector:
q4(deck);
for (int j=1; j<=4; j++)
  {
    for (int i=1; i<=10; i++) 
      deck.push_back(i);
    for (int x=1; x<=3; x++)     
    deck.push_back(10);
  }


shuffle(deck);
for(int i=0; i<52;i++)
cout<<deck[i]<<endl;

cout<<"------"<<deck.at(15);

return 0;
}

void q4(vector<int> & deck){
int x,y,sum=0,k=0;
float w;
int l=0;
float bustedcount;
int i,hand;
for(i = 10; i < 21; i++)
{
   
  
   bustedcount = 0;
    for(int j=0; j<10000; j++)
   {
      sum = 0;
      while(sum<i)
      {
         hand = deal(deck);
         sum += hand;
         if(hand == 1 && sum+11 <= 21)
         {
          hand = 10;
          sum += hand;
         }
        
      }
        if(sum > 21)
        bustedcount++;
     
   } 
  
   w=bustedcount/10000;
  cout<<"probability"<<i<<"   "<<w<<endl;
}

}

