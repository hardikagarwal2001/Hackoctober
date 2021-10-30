package linearSearching;

public class searchng {

	public static void main (String [] args)
	{

		int [] nums = {12,3,23,32,1,11};
		int target =11;

		int answer = linearsearch(nums,target);


		System.out.println(answer);



	}



	static int linearsearch(int[] arr , int target)
	{
		if(arr.length==0) {
			return -1;

		}

		for(int index =0; index<arr.length;index++) {
			int element = arr[index];

			if (element == target) {
				return index;
			}

		}


		return -1;
	}
}



