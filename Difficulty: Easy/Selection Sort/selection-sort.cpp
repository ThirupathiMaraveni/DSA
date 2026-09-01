class Solution {
  public:
    void selectionSort(vector<int> &arr) {
        // code here
        int n = arr.size();
        int minI;
        //int y = 0;
        int i;
        for(i=0;i<n-1;i++){
            minI=i;
            for(int j=i+1;j<=n-1;j++){
                if(arr[j]<arr[minI]){
                    minI = j;
                }
            }
        swap(arr[i],arr[minI]);
        }
        
    }
};