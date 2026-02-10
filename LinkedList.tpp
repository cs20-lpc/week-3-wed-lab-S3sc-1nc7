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
    Node* ptr = this->head;
    if(!ptr){
        this->head = new Node(elem);
        this->length++;
        return;
    }
    while(ptr->next != nullptr){
        ptr = ptr->next;
    }
    ptr->next = new Node(elem);
    this->length++;
    
}

template <typename T>
void LinkedList<T>::clear() {
    Node* ptr = this->head;
    while(ptr != nullptr){
        Node* nextptr = ptr->next;
        delete ptr;
        ptr = nextptr;
    }
    head = nullptr;
    this->length = 0;

    // TODO
}

template <typename T>
T LinkedList<T>::getElement(int position) const {
    Node* ptr = this->head;
    while(ptr != nullptr){
        if(position > 0){
            ptr = ptr->next;
            position--;
        }
        else{
            return ptr->value;
        }
    }
    throw out_of_range("Position is out of range");
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
    Node* ptr = this->head;
    while(ptr != nullptr){
        if(position > 0){
            ptr = ptr->next;
            position--;
        }
        else{
            ptr->value = elem;
            return;
        }
    }
    throw out_of_range("Position is out of range");
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
