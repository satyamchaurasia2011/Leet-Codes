class Node{
    public : 
       int val;
        Node* next;
    Node(){val = 0; next = nullptr;}
};
class MyHashSet {
public:
    Node* head = nullptr;
    MyHashSet() {
        
    }
    
    void add(int key) {
        if(contains(key)) return;
        Node* tmp = new Node;
        tmp->val = key;
        tmp->next = head;
        head = tmp;
            
    }
    
    void remove(int key) {
     
        Node* prev = nullptr;
        Node* curr = head;
        if(head && head->val == key){
            head = head->next;
            return;
        }
            
        while(curr){
            if(curr->val == key){
                 prev->next = curr->next;
                break;
            }
               prev = curr;
            curr = curr->next;
        }
    }
    
    bool contains(int key) {
       Node* tmp = head;
        while(tmp){
            if(tmp->val == key)
            return true;
                tmp = tmp->next;
        }
        return false;
           
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */