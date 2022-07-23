class MyHashSet {
public:
    list<int>ll;
    MyHashSet() {
        
    }
    
    void add(int key) {
        ll.push_back(key);
    }
    
    void remove(int key) {
        ll.remove(key);
    }
    
    bool contains(int key) {
       list<int>::iterator it;
        for(it = ll.begin(); it != ll.end(); it++)
            if(*it == key) return true;
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