package linkedlists;

public class linkedlist {

	class node{
		int element;
		node next;

		public node(int e , node n )
		{
			element = e;
			next = n;
		}
	}


	private node head;
	private node tail;
	private int size;

	public linkedlist() {
		head = null;
		tail = null;
		size = 0;

	}
	public int length() {

		return size;
	}
	public boolean isEmpty() {

		return size == 0;
	}
	public void addlast (int e ) {

		node newest =   new node(e,null);
		if(isEmpty())

		
  

			tail.next= newest;

		tail = newest;
		size = size+1;

	}
	public void display() {
		 node p =  head;
		 
		 while(p!=null)
		 {
			 System.out.print(p.element + " ,");
			 p = p.next;
		 }
	System.out.println( );
	}
	
	public static void main (String args[]) {
		linkedlist l = new linkedlist(); 
		
		l.addlast(7);
		l.addlast(4);
		l.addlast(0);
		l.display();
		
		System.out.println("size" +l.length());
		l.addlast(12);
		l.addlast(2);
		l.addlast(2);
		l.display();
		System.out.println("size" +l.length());

		

	}
	
}
