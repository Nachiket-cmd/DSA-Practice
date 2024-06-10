/* We will start with Merge Sort now. */

//Merge Sort (Divide and Conquer(Merge))  O(n*log(n))
void merge(vector<int>&arr, int low, int mid, int high){
{
  vector<int>temp;
  int left=low;
  int right=mid +1;
  while(left<=mid && right<=high) {
    if(arr[left]<=arr[right])
    {
      temp.push_back(arr[left]);
      left++;
    }
    else{
      temp.push_back(arr[right]);
      right++;
    }
  }

  while(left<=mid) {
    temp.push_back(arr[left]);
      left++;
  }
  while(right<=high) { 
    temp.push_back(arr[right]);
      right++;
  }

  for(int i= low; i<=high; i++) {
    arr[i]= temp[i-low]; //why - low? why not just use temp[i]?
  }
}

void mergeSort(arr,low,high) {
  //base condition 
  if(low==high) {
    return ;
  }
  int mid = (low + high)/2;
  mergeSort(arr,low,mid);
  mergeSort(arr,(mid+1),high);
  merge(arr,low,mid,high);
}
