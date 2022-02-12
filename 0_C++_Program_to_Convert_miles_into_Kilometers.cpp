#include<iostream>

using namespace std;

inline void keep_window_open ()
{
  char ch;
  cin >> ch;
}

int main()
{
  float miles_distance, kilometer_distance;

  cout <<"Enter distence in Miles: ";
  cin >>miles_distance;

  kilometer_distance = miles_distance*1.609;
  
  cout <<"Distance in Kilometers: "<<kilometer_distance;
}

  