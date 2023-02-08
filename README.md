## The Comparison Between Merge, Quick, Insertion, and Heap Sorting Algorithms
University of Lodz

Course: Algorithms and Complexity

Professor: Marek Rogalski

[Research Paper](https://github.com/AdiletBaimyrza/AlgorithmsComparison/blob/master/ResearchPaper.pdf)

### Introduction
In this project I compared 4 well-known comparison-based sorting algorithms. I implemented them using no external source of information, which guarantees the originality of the source code. Algorithms presented below and their implementations could be found in **AlgorithmsComparison** directory:
- Merge Sort 
- Quick Sort
- Insertion Sort
- Heap Sort

Each algorithm is going to sort an array of size n, where the integer is bounded to the range (-n, n). The items will be sorted in an ascending order.

### Methodology
The above algorithms were implemented in C++ language and were tested on my laptop in Visual Studio. The results were obtained for the arrays of bigger size such as **100, 200, 300, . . . , 5000** and for smaller arrays starting from **1, 2, 3, 4, . . . , 100**.
> For each algorithm, there was given the same input data. Each array size was tested **100 times**.
The result for each size is the average time it took for each algorithm to sort the input array. 

### 3 Resulted Graphs
![](/graphs_photos/big.jpg "")
![](/graphs_photos/bigWithoutInsertion.jpg "")
![](/graphs_photos/small.jpg "")

The data is visualized based on obtained data that is stored in files:
- **random_small.txt**
- **random.txt**
The files located in **AlgorithmsComparison** directory.

