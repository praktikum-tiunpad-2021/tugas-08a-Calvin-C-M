/*
 * Bebas disini bisa masukin apa aja.
 * Misal mau testing atau debugging sendiri.
 *
 */

#include <iostream>

#include "queue.hpp"

using namespace strukdat::priority_queue;

int main()
{
  auto Q = new_queue<int>();
  enqueue(Q, 1, 5);
  enqueue(Q, 2, 3);
  enqueue(Q, 3, 7);
  enqueue(Q, 4, 5);
  enqueue(Q, 5, 1);

  // dequeue(Q);

  ElementPtr<int> curr = Q.head;
  while(curr != nullptr)
  {
    std::cout << curr->data << " : " << curr->priority << '\n';
    curr = curr->next;
  }
  
  return 0;
}
