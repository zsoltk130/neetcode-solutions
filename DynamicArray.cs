public class DynamicArray
{
    private int[] array;
    private int size;
    private int capacity;
    private const int DEFAULT_CAPACITY = 16;

    public DynamicArray(int capacity)
    {
        this.capacity = capacity > 0 ? capacity : DEFAULT_CAPACITY; //  Ensure positive capacity
        this.array = new int[this.capacity];
        this.size = 0;
    }

    public int Get(int i)
    {
        re
    }

    public void Set(int i, int n)
    {

    }

    public void PushBack(int n)
    {

    }

    public int PopBack()
    {

    }

    private void Resize()
    {

    }

    public int GetSize()
    {

    }

    public int GetCapacity()
    {

    }
}