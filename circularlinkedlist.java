import java.util.*;

public class circularlinkedlist {
	class 	Node{
		int element;
		Node next;

		public Node(int e, Node n) {

			element = e;
			next = n;
		}
	}
	private Node head;
	private Node tail;
	private int size;

	public circularlinkedlist()
	{
		head= null;
		tail= null;
		size=0;


	}
	public int length() {
		return size;

	}

	public boolean isempty() {

		return size == 0;

	}

	public void addlast(int e)
	{
		Node newest =new Node(e,null);
		if(isempty())
		{
			newest.next= newest;
			head=newest;
		}

		else {
			tail=newest;
			size= size+1;
		}
		tail = newest;
		size = size+1;
	}
	public void display() {

		Node p = head;
		int i = 0;
		while (i<length()) {
			System.out.print(p.element+ "  , ");
			p=p.next;
			i=i+1;





		}

		System.out.println();



	}

	public static void main (String args[]) {

		circularlinkedlist  l = new circularlinkedlist(); 
		l.addlast(7);
		l.addlast(4);
		l.addlast(12);
		l.display();
		System.out.println(" size " + l.length());
	}
}

