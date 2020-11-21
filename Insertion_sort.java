package Sort;

public class Insertion_sort {
  public static void main(String[] args) {
	  int[] arr= {12,11,3,2,5};
	  sort(arr,arr.length);
	  //printing the output
	  for(int i=0;i<arr.length;i++) {
		  System.out.print(arr[i] + " ");
	  }
}

private static void sort(int[] arr, int length) {
	// TODO Auto-generated method stub
	int n= arr.length;
	for(int i=1;i<n;i++) {
		int key =arr[i];
		//start of unsorted array
		int j=i-1;
		//element in the unsorted region isless then the current element
		while(j>=0&& arr[j]>key) {
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}
}
}
