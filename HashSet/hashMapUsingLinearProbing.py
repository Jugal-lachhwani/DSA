class hashSet:
    def __init__(self,size=100):
        self.size = size
        self.buckets = [None for i in range(size)]
    def hashtable(self,value):
        return sum(ord(char) for char in value)%self.size
    def add(self,value):
        index = self.hashtable(value)
        while self.buckets[index] != None:
           index = (index + 1) % self.size 
        self.buckets[index] = value
    def contains(self,value):
        index = self.hashtable(value)
        flag = False
        for i in range(0,self.size):
            if self.buckets[index] == value:
                flag = True
                break
            index += 1
        return flag
    def remove(self,value):
        if self.contains(value):
            self.buckets.remove(value)
        
    def printSet(self):
        for bucket in self.buckets:
            if bucket:
                print(bucket)

hash_set = hashSet(10)

hash_set.add("Charlotte")
hash_set.add("Thomas")
hash_set.add("Jens")
hash_set.add("Peter")
hash_set.add("Lisa")
hash_set.add("Adele")
hash_set.add("Michaela")
hash_set.add("Bob")

hash_set.printSet()