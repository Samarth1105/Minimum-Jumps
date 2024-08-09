class Solution{
  public:
    int minJumps(int arr[], int n){
        int jump=0, currStart=0, currEnd=0;
        int currMaxReach= -1;
        if (n<=1)
            return 0;
        if(arr[0]==0){
            return -1;
        }
        
        while(currStart<n-1){
            currMaxReach = max(currMaxReach, currStart+arr[currStart]);
            
            if(currMaxReach >= n-1){
                jump++;
                break;
            }
            
            if(currStart == currEnd){
                jump++;
                currEnd= currMaxReach;
            }
            currStart++;
            
            if(currStart>currMaxReach){
                return -1;
            }
        }
        return jump;
    }
};
