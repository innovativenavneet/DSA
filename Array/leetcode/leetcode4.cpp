  #include<bits/stdc++.h>
  using namespace std;
  int main()
  {   
  int arr[]={1,1,1,2,2,2,3,3,3,4,4};
  int n= sizeof(arr)/sizeof(int);
  int temp;
  for(int i=0;i<n;i++){
  if(arr[i]==arr[i+1]==arr[i+2]){
  arr[i+2]=temp;
  } 
  }
  for(int i=0;i<n;i++){
  cout<<arr[i];
  }
  return 0;
  }