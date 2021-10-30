package structure_JAVA;

public class order_agnostic {

	public static void main (String [] args) {
		int [] arr = {12,33,44,54,78};
		int target = 44;
		int answer = orderagnostic(arr,target);

		System.out.println(answer);



	}

	static int orderagnostic(int [] arr , int target) {

		int start = 0 ;
		int end = arr.length-1;

		// array is accending or decsending
		boolean isAsc = arr[start]<arr[end];



		while(start <= end) {

			int mid  = start + (end - start)/2;
			if(arr[mid] == target) {
				return mid;
			}
			if(isAsc)	{
				if(target <arr[mid]) {
					end = mid-1;

				}

				else {
					start =  mid+1;

				}if(target >arr[mid]) {
					end = mid-1;

				}

				else {
					start =  mid+1;

				}

			}	
		}


		return -1;
	}

}
