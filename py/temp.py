from ordered_set import OrderedSet


class LRUCache:
    def __init__(self, capacity: int) -> None:
        self.capacity = capacity
        self.data = {}
        self.ages = [] # A sort of ordered set queue

    def put(self, key: int, value: int) -> None:
        self.data[key] = value
        # Add the key at the end of the ages queue (but first remove all instances of the key)
        if key in self.ages: self.ages.remove(key)
        self.ages.append(key)

        # If dict has been overfilled, delete the oldest key
        if len(self.data) > self.capacity:
            oldest_key = self.ages[0]
            # Remove all instances of the oldest key in the queue
            if oldest_key in self.ages: self.ages.remove(oldest_key)
            # Remove the oldest key from the dict
            del self.data[oldest_key]
    
    
    def get(self, key: int) -> int:
        # Update the ages queue
        if key in self.data:
            # Add the key at the end of the ages queue (but first remove all instances of the key)
            if key in self.ages: self.ages.remove(key)
            self.ages.append(key)
            # Return the value
            return self.data[key]
        # If key isnt present (checked by the above if statement), return -1
        return -1
        

        


# Your LRUCache object will be instantiated and called as such:
testcase_1 = [
    ["LRUCache","put","put","get","put","get","put","get","get","get"],
    [[2],[1,1],[2,2],[1],[3,3],[2],[4,4],[1],[3],[4]]
]
testcase_2 = [
    ["LRUCache","put","put","put","put","put","get","put","get","get","put","get","put","put","put","get","put","get","get","get","get","put","put","get","get","get","put","put","get","put","get","put","get","get","get","put","put","put","get","put","get","get","put","put","get","put","put","put","put","get","put","put","get","put","put","get","put","put","put","put","put","get","put","put","get","put","get","get","get","put","get","get","put","put","put","put","get","put","put","put","put","get","get","get","put","put","put","get","put","put","put","get","put","put","put","get","get","get","put","put","put","put","get","put","put","put","put","put","put","put"],
    [[10],[10,13],[3,17],[6,11],[10,5],[9,10],[13],[2,19],[2],[3],[5,25],[8],[9,22],[5,5],[1,30],[11],[9,12],[7],[5],[8],[9],[4,30],[9,3],[9],[10],[10],[6,14],[3,1],[3],[10,11],[8],[2,14],[1],[5],[4],[11,4],[12,24],[5,18],[13],[7,23],[8],[12],[3,27],[2,12],[5],[2,9],[13,4],[8,18],[1,7],[6],[9,29],[8,21],[5],[6,30],[1,12],[10],[4,15],[7,22],[11,26],[8,17],[9,29],[5],[3,4],[11,30],[12],[4,29],[3],[9],[6],[3,4],[1],[10],[3,29],[10,28],[1,20],[11,13],[3],[3,12],[3,8],[10,9],[3,26],[8],[7],[5],[13,17],[2,27],[11,15],[12],[9,19],[2,15],[3,16],[1],[12,17],[9,1],[6,19],[4],[5],[5],[8,1],[11,7],[5,2],[9,28],[1],[2,2],[7,4],[4,22],[7,24],[9,26],[13,28],[11,26]]
]

testcase = testcase_1

obj = LRUCache(testcase[1][0][0])

for i in range(1, len(testcase[0])):
    if testcase[0][i] == 'put':
        obj.put(*testcase[1][i])
    elif testcase[0][i] == 'get':
        print(obj.get(*testcase[1][i]))
    print(obj.data, obj.ages)


