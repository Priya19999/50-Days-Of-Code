class LRUCache {
public:
     list<int>dq;
    unordered_map<int, list<int>::iterator> mp;
    int a[3001];
    int c;
    LRUCache(int capacity) {
        for(int i=0;i<=3000;i++)
            a[i]=-1;
        c=capacity;
    }
    
    int get(int key) {
        if(mp.find(key)!=mp.end())
        {
            int val=a[key];
            dq.erase(mp[key]);
            dq.push_front(key);
            mp[key]=dq.begin();
        }
        return a[key];
    }
    
    void put(int key, int value) {
        if(mp.find(key)==mp.end())
        {
            if(dq.size()==c)
            {
                int last=dq.back();
                dq.pop_back();
                mp.erase(last);
                a[last]=-1;
            }
            
        }
        else
        {
            dq.erase(mp[key]);
            mp.erase(key);
        }
        
        dq.push_front(key);
        mp[key]=dq.begin();
        a[key]=value;

    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
