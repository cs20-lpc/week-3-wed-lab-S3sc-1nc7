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
    new_linked_list = nullptr;

    LinkedList<string>* stringlist = new LinkedList<string>();
    
    stringlist->append("67");
    stringlist->append("hello");
    stringlist->append("world");
      cout << *stringlist;

      // test replace func
    try{
        stringlist->replace(2,"kingdom");
        cout << *stringlist;    
    }
    catch (exception & e) { cout << e.what() << endl;}
        // test getElement func
    try{
        string sam = stringlist->getElement(1);
        cout << "SecondElement is: "<< sam << endl;
    }
    catch (exception & e){ cout << e.what() << endl;}

    delete stringlist;  // destructor calls clear()

    stringlist = nullptr;
    
    return 0;
}