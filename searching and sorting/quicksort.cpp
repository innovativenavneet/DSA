#include<iostream>

using namespace std;

int partition(int arr[],int low, int high){
    //choosing the pivot element 
    int pivot=arr[high]; 
    cout<<"the choosen pivot elemnt is : "<<pivot<<endl;
    int i=(low-1);   // intialising the i at negative first

    for(int j=low;j<=high;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);

    }
    }

   // for positioning the pivot element at middle 
 swap(arr[i+1],arr[high]);
 return (i+1);// returning the index of pivot element 
}

void QuickSort(int arr[],int low,int high)
{
    if(low<high)
    {
        int o= partition (arr, low, high);// this will store the index of pivot element
        QuickSort(arr, low, o-1);// this will sort elements less than pivot
        QuickSort(arr, o+1, high);// this will sort elements greater than pivot
    }
}


int main()
{
    int arr[]={10,5,2,7,6,4};
    int n=sizeof(arr)/sizeof(int);
    // partition(arr,0,n-1);
    QuickSort(arr,0,n-1);
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<endl;

    }
   
   
    return 0;

}