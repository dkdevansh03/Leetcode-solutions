class Solution {
public:
    int partition(vector<int>& arr , int low , int high){
        int pivotIndex = low + rand() % (high - low + 1);
        swap(arr[low], arr[pivotIndex]);
        int pivot = arr[low];
        int i = low;
        int j = high;
        while(i<j){
            while(arr[i]<=pivot && i<=high-1){
                i++;
            }
            while(arr[j]>pivot && j>=low+1){
                j--;
            }
            if(i<j) swap(arr[i],arr[j]);
        }
        swap(arr[low],arr[j]);
        return j;
    }
    void quickSort(vector<int>& arr , int low , int high){
        if(low<high){
            int pIndex = partition(arr,low,high);
            quickSort(arr,low,pIndex-1);
            quickSort(arr,pIndex+1,high);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        quickSort(nums,0,n-1);
        return nums;
        
    }
};