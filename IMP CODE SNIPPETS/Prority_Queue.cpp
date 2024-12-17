#include<iostream>
#include <queue>


     //Time Complexity:
// push() and pop(): 𝑂(log𝑁) && top(): 𝑂(1)
  
    std::priority_queue<int> maxHeap; // Default is max-heap
    std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;
