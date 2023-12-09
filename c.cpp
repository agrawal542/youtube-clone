#include<bits/stdc++.h>
using namespace std ;
int distance(pair<int,int> a,pair<int,int> b)
{
    int x = pow((a.first - b.first),2) ;
    int y = pow((b.second - b.second),2) ;
    
    float z = sqrt(x+y) ;
  
    return ceil(z) ;
}
int perfect(int n)
{
    int x =sqrt(n) ;
    
    if((x*x) == n)
      return n ;
    
   int above = (x+1)*(x+1) ;
   int below = x*x ;
    
   int d1 = above - n ;
   int d2 = n - below ;
   
   if(d1 < d2)
     return below ;
  else
     return above ;
}
int main()
{
  vector<pair<int,int>> v ;
  
  for(int i = 0 ; i < 3 ; i++)
  {
      cin>>v[i].first>>v[i].second;
  }
  
  int actualArea = distance(v[0],v[1]) ;
  int fenceArea = distance(v[0],v[2]) ;
  
  if(actualArea == fenceArea)
  {
    cout<<-1<<endl ;
  }
  else if(fenceArea < actualArea)
  {
    cout<<(actualArea-fenceArea)*20 ;
  }
  else
  {
       int N = (fenceArea - actualArea) ;
       int newN = perfect(N) ;
       
       if( newN > N)
       {
            cout<<"Krishna"<<(newN-N)*20<<endl ;
       }
       else
       {
            cout<<"Shiva"<<(N-newN)*20<<endl ;
       }
  }
  return  0 ;
}
