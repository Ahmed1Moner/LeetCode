class MyHashSet {
public:
    //initialize a vector with a name of map
    vector<int> map;
    int size;
    
    MyHashSet() {
        //initialize the size variable with the number of the maximum given elements & with an extra one space, as it's 0-based indexing
        size=pow(10,6)+1;
        
        //resizing the map vector size
        map.resize(size);
    }
    
    void add(int key) {
        //assign the position of the key value in the array to 1
        map[key]=1;
    }
    
    void remove(int key) {
        //to erase an element-> assign its value to -1, as the elements start with 0
        map[key]=-1;
    }
    
    bool contains(int key) {
        //return true-> if the given variable value is available-> equal to 1... else-> return false 
        return map[key]==1;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */