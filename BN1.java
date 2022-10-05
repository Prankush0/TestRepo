package binary.search;
public class BN1 {
    public static void main(String[] args) {
        int nums[]={1,2,3,4,5,6,7,8,9,11,12,13,14,15,16,17};
        int target=17;
        int ans=binarySearch(nums,target);
        System.out.println(ans);
    }
        
        
        
    //return the index
    //return -1 if it doesn't exist
    static int binarySearch(int[] arr,int target)
    {
        int start=0;
        int end=arr.length-1;
        while(start<=end)
        {
            //int mid=(start+end)/2 can be very large for int data type
            int mid=start+(end-start)/2;
            
            if(target<arr[mid])
            {
                end=mid-1;
            }
            else if(target>arr[mid])
            {
                start=mid+1;
            }
            else
            {
                return mid;
            }
        }
        return -1;
    }
    
 
}
