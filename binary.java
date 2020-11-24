package Sort;

public class binary 
{
	public static void main(String args[]) {
		
int[] arr= {2,3,4,10,23,47,56};
int x=47;
System.out.println(binary(arr,x));
}


private static int binary(int[] arr,int x) {
	int left=0;
	int right=arr.length-1;
	while(left<=right) {
		int mid=(left+right)/2;
		if(arr[mid]==x) {
			return mid;
	}
		if(arr[mid]<x) {
			left=mid+1;
		}else {
			right=mid-1;
		}
}
	return -1;
}
}
