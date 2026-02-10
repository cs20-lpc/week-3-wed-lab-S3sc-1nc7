// TO DO: Implement the driver main() function to test your code.
#include "LinkedList.hpp"

int main(){
    LinkedList<int>* new_linked_list = new LinkedList<int>();
    
    new_linked_list->append(67);

    new_linked_list->append(32);

    new_linked_list->append(12);
    cout << *new_linked_list;

    new_linked_list->replace(0,69);
    cout << *new_linked_list;    

    new_linked_list->clear();
    cout << *new_linked_list;

    delete new_linked_list;
    return 0;
}