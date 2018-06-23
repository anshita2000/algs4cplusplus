# Algorithms
Algorithms, 4th edition textbook code (using c++)

**Note：**

1. based on STL Library
2. using C++14
3. **Not support** drawing

> the code is writed and debug in CLion IDE，and not test in terminal（I will check it after finish more code）

## ch1. Fundamentals

|                             REF                              |                          PROGRAM                          |      DESCRIPTION / JAVADOC       |                             REF                              |                        PROGRAM                        |      DESCRIPTION / JAVADOC      |
| :----------------------------------------------------------: | :-------------------------------------------------------: | :------------------------------: | :----------------------------------------------------------: | :---------------------------------------------------: | :-----------------------------: |
|   [-](https://algs4.cs.princeton.edu/11model/index.php#-)    |         [BinarySearch.h](ch1/head/BinarySearch.h)         |          binary search           |   [-](https://algs4.cs.princeton.edu/11model/index.php#-)    |       [RandomSeq.cpp](ch1/2_RandomSeq/main.cpp)       | random numbers in a given range |
|   [-](https://algs4.cs.princeton.edu/11model/index.php#-)    |           [Average.cpp](ch1/3_Average/main.cpp)           | average of a sequence of numbers |   [-](https://algs4.cs.princeton.edu/11model/index.php#-)    |             [Cat.cpp](ch1/4_Cat/main.cpp)             |        concatenate files        |
|   [-](https://algs4.cs.princeton.edu/11model/index.php#-)    |                [Knuth.h](ch1/head/Knuth.h)                |          Knuth shuffle           |    [-](https://algs4.cs.princeton.edu/12oop/index.php#-)     |            [Counter.h](ch1/head/Counter.h)            |             counter             |
|    [-](https://algs4.cs.princeton.edu/12oop/index.php#-)     |      [StaticSETofInts.h](ch1/head/StaticSETofInts.h)      |         set of integers          |    [-](https://algs4.cs.princeton.edu/12oop/index.php#-)     |       [Whitelist.cpp](ch1/8_Whitelist/main.cpp)       |        whitelist client         |
|    [-](https://algs4.cs.princeton.edu/12oop/index.php#-)     |               [Vector.h](ch1/head/Vector.h)               |         Euclidean vector         |    [-](https://algs4.cs.princeton.edu/12oop/index.php#-)     |               [Date.h](ch1/head/Date.h)               |              date               |
|    [-](https://algs4.cs.princeton.edu/12oop/index.php#-)     |          [Transaction.h](ch1/head/Transaction.h)          |           transaction            |    [-](https://algs4.cs.princeton.edu/12oop/index.php#-)     |            [Point2D.h](ch1/head/Point2D.h)            |              point              |
|    [-](https://algs4.cs.princeton.edu/12oop/index.php#-)     |               [RectHV.h](ch1/head/RectHV.h)               |      axis-aligned rectangle      |    [-](https://algs4.cs.princeton.edu/12oop/index.php#-)     |         [Interval1D.h](ch1/head/Interval1D.h)         |           1d interval           |
|    [-](https://algs4.cs.princeton.edu/12oop/index.php#-)     |           [Interval2D.h](ch1/head/Interval2D.h)           |           2d interval            |    [-](https://algs4.cs.princeton.edu/12oop/index.php#-)     |        [Accumulator.h](ch1/head/Accumulator.h)        |   running average and stddev    |
| [1.1](https://algs4.cs.princeton.edu/13stacks/index.php#1.1) |   [ResizingArrayStack.h](ch1/head/ResizingArrayStack.h)   |   LIFO stack (resizing array)    | [1.2](https://algs4.cs.princeton.edu/13stacks/index.php#1.2) |        [LinkedStack.h](ch1/head/LinkedStack.h)        |    LIFO stack (linked list)     |
|   [-](https://algs4.cs.princeton.edu/13stacks/index.php#-)   |                [Stack.h](ch1/head/Stack.h)                |            LIFO stack            |   [-](https://algs4.cs.princeton.edu/13stacks/index.php#-)   | [ResizingArrayQueue.h](ch1/head/ResizingArrayQueue.h) |   FIFO queue (resizing array)   |
| [1.3](https://algs4.cs.princeton.edu/13stacks/index.php#1.3) |          [LinkedQueue.h](ch1/head/LinkedQueue.h)          |     FIFO queue (linked list)     |   [-](https://algs4.cs.princeton.edu/13stacks/index.php#-)   |              [Queue.h](ch1/head/Queue.h)              |           FIFO queue            |
|   [-](https://algs4.cs.princeton.edu/13stacks/index.php#-)   |     [ResizingArrayBag.h](ch1/head/ResizingArrayBag.h)     |    multiset (resizing array)     | [1.4](https://algs4.cs.princeton.edu/13stacks/index.php#1.4) |          [LinkedBag.h](ch1/head/LinkedBag.h)          |     multiset (linked list)      |
|   [-](https://algs4.cs.princeton.edu/13stacks/index.php#-)   |                  [Bag.h](ch1/head/Bag.h)                  |             multiset             |  [-](https://algs4.cs.princeton.edu/14analysis/index.php#-)  |          [Stopwatch.h](ch1/head/Stopwatch.h)          |        timer (wall time)        |
|  [-](https://algs4.cs.princeton.edu/14analysis/index.php#-)  |                    [StopwatchCPU.h]()                     |         timer (CPU time)         |  [-](https://algs4.cs.princeton.edu/14analysis/index.php#-)  |   [LinearRegression.h](ch1/head/LinearRegression.h)   |    simple linear regression     |
|  [-](https://algs4.cs.princeton.edu/14analysis/index.php#-)  |             [ThreeSum.h](ch1/head/ThreeSum.h)             |      brute-force three sum       |  [-](https://algs4.cs.princeton.edu/14analysis/index.php#-)  |       [ThreeSumFast.h](ch1/head/ThreeSumFast.h)       |        faster three sum         |
|  [-](https://algs4.cs.princeton.edu/14analysis/index.php#-)  |         [DoublingTest.h](ch1/head/DoublingTest.h)         |          doubling test           |  [-](https://algs4.cs.princeton.edu/14analysis/index.php#-)  |  [DoublingRatio.cpp](ch1/32_DoublingRatio/main.cpp)   |         doubling ratio          |
|     [-](https://algs4.cs.princeton.edu/15uf/index.php#-)     |          [QuickFindUF.h](ch1/head/QuickFindUF.h)          |            quick find            |     [-](https://algs4.cs.princeton.edu/15uf/index.php#-)     |       [QuickUnionUF.h](ch1/head/QuickUnionUF.h)       |           quick union           |
|   [1.5](https://algs4.cs.princeton.edu/15uf/index.php#1.5)   | [WeightedQuickUnionUF.h](ch1/head/WeightedQuickUnionUF.h) |       weighted quick union       |     [-](https://algs4.cs.princeton.edu/15uf/index.php#-)     |                 [UF.h](ch1/head/UF.h)                 | union-by-rank with path halving |

