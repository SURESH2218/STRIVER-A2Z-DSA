package list;
public class LinkedList {
    Node head;
    Node tail;
    int size;
    public LinkedList() {
        this.size = 0; 
    }
    public void insertFirst(int val) {
        Node node = new Node(val);
        node.next = head;
        head = node;
        if (tail == null) {
            tail = head;
        }
        size++;
    }
    public void insertLast(int val){
        if(tail == null){
            insertFirst(val);
            return;
        }
        Node node = new Node(val);
        tail.next = node;
        tail = node;
    }
    public void insertAt(int val,int index){
        if(index < 0 || index >size){
            throw new IndexOutOfBoundsException("Index out of bounds");
        }
        if(index == 0) {
            insertFirst(val);
            return;
        }
        else if(index == size){
            insertLast(val);
            return;
        }
        else {
            Node temp = head;
            for(int i = 0;i<index-1;i++){
                temp = temp.next;
            }
            Node node = new Node(val);
            node.next = temp.next;
            temp.next = node;
            size++;

        }
    }
    public void display() {
        Node temp = head;
        while (temp != null) {
            System.out.print(temp.data + " -> ");
            temp = temp.next;
        }
        System.out.println("END");
    }
    public int getSize() {
        return size;
    }
    class Node {
        int data;
        Node next;

        public Node(int value) {
            this.data = value;
        }

        public Node(int value, Node next) {
            this.data = value;
            this.next = next;
        }
    }

    public static void main(String[] args) {
        LinkedList list = new LinkedList();
        list.insertFirst(4);
        list.insertFirst(5);
        list.insertFirst(7);
        list.insertFirst(9);
        list.insertLast(99);
        list.insertAt(44, 3);
        list.display();
        // System.out.println("Size of the linked list: " + list.getSize());
    }
}