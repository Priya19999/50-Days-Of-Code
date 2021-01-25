class MedianFinder {
public:
    /** initialize your data structure here. */
    priority_queue<int> left; //storing the second half of numbers in left
    priority_queue<int,vector<int>,greater<int>> right; //first half in right
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        //if it is empty
        if(left.empty()&&right.empty())
        {
            left.push(num);
        }
        else if(left.size()==right.size())
        {
            int prevMedian=findMedian();
            if(num<prevMedian)
            {
                left.push(num);
            }
            else
            {
                right.push(num);
            }
        }
        else
        {
            int prevMedian=findMedian();
            if(num<prevMedian)
            {
                left.push(num);
            }
            else
            {
                right.push(num);
            } 
            // Make sure that difference in size of heaps is not more than 1
            // Rebalancing
            if((left.size()-right.size())==2)
            {
                right.push(left.top());
                left.pop();
            }
            else if((right.size()-left.size())==2)
            {
                left.push(right.top());
                right.pop();
            }
           
        }
    }
    
    double findMedian() {
         if(left.empty() && right.empty())
            return -1;
        
        if(left.size()==right.size())
        {
            double med=(double)(left.top()+right.top())/2;
            return med;
        }
        else if(left.size()>right.size())
        {
            return left.top();
        }
        else
            return right.top();
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
