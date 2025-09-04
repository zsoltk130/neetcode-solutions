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
        return this.array[i];
    }

    public void Set(int i, int n)
    {
        this.array[i] = n;
    }

    public void PushBack(int n) // Adds an element to the end
    {
        if (this.size == this.capacity)
        {
            this.Resize();
        }
        this.array[this.size++] = n;
    }

    public int PopBack() // Removes and returns the last element
    {
        return this.array[--this.size];
    }

    private void Resize() // Doubles the capacity
    {
        this.capacity *= 2;
        int[] newArray = new int[this.capacity];
        Array.Copy(this.array, newArray, this.size);
        this.array = newArray;
    }

    public int GetSize()
    {
        return this.size;
    }

    public int GetCapacity()
    {
        return this.capacity;
    }
}