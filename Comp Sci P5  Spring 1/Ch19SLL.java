import java.util.NoSuchElementException;
import java.util.Scanner;

public class Ch19SLL
{
    public static void main()
    {
        ListNode node5 = new ListNode("elephant", null);
        ListNode node4 = new ListNode("sheep", node5);
        ListNode node3 = new ListNode("cat", node4);
        ListNode node2 = new ListNode("giraffe", node3);
        ListNode node1 = new ListNode("hippo", node2);
        ListNode head = node1;
        
        
        printlist(head);
        /*
        if(hasTwo(head))
            System.out.println("Has two or more. ");
        else
            System.out.println("Less than two. ");
            
        head = removeFirst(head);
        printlist(head);        
        
        System.out.println("List has " + size(head) + " nodes.");
        
        head = add(head, "lizard");
        printlist(head);
        
        head = rotate(head);
        printlist(head);
               
        printmiddle(head);
        
       
        ListNode headtwo = reverseList(head);
        printlist(headtwo);
        */
       
        ListNode alphahead = alpha(head);
        printlist(alphahead);
    }

    public static void printlist(ListNode head)
    {
        ListNode node;
        
        for(node = head; node != null; node = node.getNext())
        {
            System.out.println(node.getValue());
        }
        
        System.out.println();
    }

    public static boolean hasTwo(ListNode head)
    {
       return head != null && head.getNext() != null;
    }

    public static ListNode removeFirst(ListNode head)
    {
        ListNode temp = head.getNext();
        head.setNext(null);
        return temp;
    }
    
    public static int size(ListNode head)
    {
        int count = 0;
        ListNode node;
        
        for(node = head; node != null; node = node.getNext())
        {
            count++;
        }
        
        return count;
    }

    public static ListNode add(ListNode head, Object value)
    {
        ListNode newnode = new ListNode(value);
        
        if(head == null)
            head = newnode;
        else
        {
            ListNode node = head;
        
            while(node.getNext() != null)
                node = node.getNext();
        
                node.setNext(newnode);
        }
        
        return head;
    }

    public static ListNode rotate(ListNode head)
    {
        Object first = head.getValue();
        ListNode newhead = head.getNext();
        
        newhead = add(newhead, first);
        return newhead;
    }
   
    public static void printmiddle(ListNode head)
    {
        int sz = size(head);
        int i;
        ListNode node = head;
        
        for(i = 0; i < sz/2; i++)
        {
            node = node.getNext();
        }
        
        System.out.println("The middle node is " + node.getValue());
    }
    
    public static ListNode reverseList(ListNode head)
    {
        ListNode node;
        ListNode newhead = null;
        
        for(node = head; node != null; node = node.getNext())
        {
            ListNode newnode = new ListNode(node.getValue(), newhead);
            newhead = newnode;
        }
        
        return newhead;
    }
 
    public static ListNode alpha(ListNode head)
    {
        ListNode node, newhead, pos, lastpos;
        String value;
        
        node = head;
        newhead = new ListNode(node.getValue());
        
        for(node = node.getNext(); node != null; node = node.getNext())
        {
            value = (String)node.getValue();
            
            pos = newhead;
            lastpos = newhead;
            while(pos != null && value.compareToIgnoreCase((String)pos.getValue()) > 0)
            {
                lastpos = pos;
                pos = pos.getNext();
            }
            
            if (pos == newhead)
              newhead = new ListNode(value, pos);
            else
            {                
                ListNode newnode = new ListNode(value, pos);
                lastpos.setNext(newnode);
            }
            
        }
        
        return newhead;
    }
    /*
    public static ListNode add(ListNode head, Object value) {
        ListNode newnode = new ListNode(value);
        
        if(head == null)
            head = newnode;
        else
        {
            ListNode node = head;
        
            while(node.getNext() != null)
                node = node.getNext();
        
                node.setNext(newnode);
        }
        
        return head;
    }
    */
    public static ListNode remove(ListNode head, Object value)
    {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the animal to remove: ");
        String inputString = input.nextLine();
        
        ListNode newnode = new ListNode(value);
        
        ListNode node = head;
        while(node.getNext().getValue() != inputString)
            node = node.getNext();
        node.setValue(null);
        
        return head;
    }
    
}