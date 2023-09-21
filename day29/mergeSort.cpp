//https://practice.geeksforgeeks.org/problems/merge-sort/1?page=1&difficulty[]=1&category[]=Sorting&sortBy=submissions

class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
         // Your code here
         int size = r-l+1;
       int temp[size], i=l,j=m+1,k=0;
      
        while(i<=m && j<=r)
            {
                if(arr[i]<arr[j]){
                    temp[k++]=arr[i++];
                }
                else{
                    temp[k++]=arr[j++];
                }
                
            }
        
        while(i<=m){
            temp[k++]=arr[i++];
        }
        
        while(j<=r){
            temp[k++]=arr[j++];
        }
        for(int a=0,i=l;i<=r;i++,a++)
         {
             arr[i]=temp[a];
         }
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        int m;
         
         if(l<r){
         m=l+(r-l)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
         merge(arr,l,m,r);
         }
        
    }
};
