    #include <bits/stdc++.h>

    using namespace std;

    void merge(int *arr,int low,int high){
    vector<int>temp;
    int mid=(low + high)/2;

    int len1 =mid -low + 1; //size of lest array
    int len2 = high - mid; //size of right array
    
    int *first = new int[len1];//a starting variable which will store values of left array
    int *second = new int[len2];//a starting vareiavle which will store values of right array
    
    //copy values into left array
   int  k=low;
    for(int i=0;i<len1; i++){
       first[i]= arr[k++];
    }
    //copy values ibto right array
     k = mid+1;
    for(int i=0;i<len2; i++){
       second[i]= arr[k++];
    }
    
    //merging  2 sorted arrays
    int index1= 0;//for left array
    int index2=0;//for right array
    k=low;
    //comparing elements of two arrays and storing the lowest value in array
    while(index1 < len1 && index2<len2){//when both index lie under definite size
    
        if(first[index1]< second[index2]){
        arr[k++]=first[index1++];
        
        }
        else{
               arr[k++]=second[index2++];
        }
        }
        //storing the value which is left at at left array 
        while (index1<len1)
        {
           arr[k++]= first[index1++];
        }
        //storing the vlaue which is lest at right array
         while (index2<len2){
                arr[k++]=second[index2++];
         }
        
    }

    void ms(int *arr, int low , int high){
        //base case
        if(low >= high){
            return; 
        }
    int mid=(low + high)/2;
            
            ms(arr,low,mid);//calling for left array
            ms(arr,mid+1,high);//calling for right array
            merge(arr,low,high);//calling merge function to merge both array
            

    }


    int main()
    {
    int arr[]={10,5,2,7,6,4};
    int n=sizeof(arr)/sizeof(int);
  
    ms(arr,0,n-1);// calling  merge sort function
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<endl;

    }
   
   
    return 0;

   }
