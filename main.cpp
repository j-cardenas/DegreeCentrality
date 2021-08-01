
#include "centrality.h"

#include<bits/stdc++.h>

bool sortDegree(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second > b.second);
}

int main()
{
   int numRegions = 5; //number of regions
   int arr[numRegions]; //Region
   int arr1[numRegions]; //Distance
   int arr3[numRegions]; //FINAL
   Graph reg(numRegions); //Constructor
  vector< pair <int, int> > pa1r; //Cloness Centrality

  //Linked list
   reg.addEdge(0, 1);
   reg.addEdge(0, 4);
   reg.addEdge(1, 3);
   reg.addEdge(1, 4);
   reg.addEdge(1, 2);
   reg.addEdge(2, 3);
   reg.addEdge(3, 4);



//populates array with ID and Distance
  for(int i =0; i<numRegions; ++i){
  arr[i] = i;
  arr1[i] = reg.degreeCentrality(i);
  }

//Pushes array into pair
int n = sizeof(arr)/sizeof(arr[0]);
 for (int i=0; i<n; i++)
    pa1r.push_back( make_pair(arr[i],arr1[i]) );

//Sorts vector by second element
sort(pa1r.begin(), pa1r.end(), sortDegree);

//Close Centrality Order
    for (int i=0; i<n; i++)
     arr3[i] = pa1r[i].first;
  
   for (int i=0; i<n; i++)
  cout << pa1r[i].first<<"  "<<pa1r[i].second<<endl;

return 0;

}


