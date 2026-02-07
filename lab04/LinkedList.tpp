template <typename T>
LinkedList<T>::LinkedList()
: head(nullptr) { }

template <typename T>
LinkedList<T>::~LinkedList() {
    clear();
}

template <typename T>
void LinkedList<T>::append(const T& elem) {
    // TODO
    Node<T>* ptr = head;
    while ptr->next != nullptr{
        ptr = ptr->next;
    }
    ptr->next = new Node(elem)
    this->length++;
    
}

template <typename T>
void LinkedList<T>::clear() {
    Node<T>* ptr = head;
    while(ptr != nullptr){
        Node<T>* nextptr = ptr->next;
        delete ptr;
        ptr = nextptr;
    }
    head = nullptr;
    this->length = 0;

    // TODO
}

template <typename T>
T LinkedList<T>::getElement(int position) const {
    Node<T>* ptr = head;
    int i = 0;
    while(ptr != nullptr){
        if(i==position){
            return ptr->value;
        }
        ptr = ptr->next;
        i++;
    }
    return nullptr;
}

template <typename T>
int LinkedList<T>::getLength() const {
    return this->length;
}

template <typename T>
bool LinkedList<T>::isEmpty() const {
    return this->length == 0;
}

template <typename T>
void LinkedList<T>::replace(int position, const T& elem) {
    // TODO
    Node<T>* ptr = head;
    int i = 0;
    while(ptr != nullptr){
        if(i==position){
            ptr->value = elem;
            break;
        }
        else{
            ptr = ptr->next;
            i++;
        }
    }
}

template <typename T>
ostream& operator<<(ostream& outStream, const LinkedList<T>& myObj) {
    if (myObj.isEmpty()) {
        outStream << "List is empty, no elements to display.\n";
    }
    else {
        typename LinkedList<T>::Node* curr = myObj.head;
        while (curr != nullptr) {
            outStream << curr->value;
            if (curr->next != nullptr) {
                outStream << " --> ";
            }
            curr = curr->next;
        }
        outStream << endl;
    }

    return outStream;
}
