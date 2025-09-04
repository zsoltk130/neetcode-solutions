public class LinkedList
{
    private class Node
    {
        public int Value;
        public Node Next;
        public Node(int value)
        {
            Value = value;
            Next = null;
        }
    }
    private Node head;
    private Node tail;
    private int size;

    public LinkedList()
    {
        head = null;
        tail = null;
        size = 0;
    }

    public int Get(int index)
    {
        if (index < 0 || index >= size)
        {
            return -1; // Invalid index
        }
        Node current = head;
        for (int i = 0; i < index; i++)
        {
            current = current.Next;
        }
        return current.Value;
    }

    public void InsertHead(int val)
    {

    }

    public void InsertTail(int val)
    {

    }

    public bool Remove(int index)
    {

    }

    public List<int> GetValues()
    {

    }
}