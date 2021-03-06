template <typename Comparable>
class BinaryHeap
{
public:
    explicit BinaryHeap(int capacity = 100);
    explicit BinaryHeap(const vector<Comparable> &items);

    bool isEmpty() const;
    const Comparable& findMin() const;

    void insert(const Comparable &x);
    void deleteMin();
    void deleteMin(Comparable &minItem);
    void makeEmpty();

private:
    int currentSize;
    vector<Comparable> array;

    void buildHeap();
    void percolateDown(int hole);
};

