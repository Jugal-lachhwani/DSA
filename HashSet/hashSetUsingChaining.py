class hashSet:
    def __init__(self,size=100):
        self.size = size
        self.buckets = [[] for i in range(size)]
    def hashtable(self,value):
        return sum(ord(char) for char in value)%self.size
    def add(self,value):
        index = self.hashtable(value)
        bucket = self.buckets[index]
        if value not in bucket:
            bucket.append(value)
    def contains(self,value):
        index = self.hashtable(value)
        bucket = self.buckets[index]
        return value in bucket
    def remove(self,value):
        index = self.hashtable(value)
        if value in self.bucket:
            self.bucket.remove(value)
    def __str__(self):
        st = ""
        for index, bucket in enumerate(self.buckets):
            st += f"Bucket {index}: {bucket}\n"
        return st
hash_set = hashSet(10)

hash_set.add("Charlotte")
hash_set.add("Thomas")
hash_set.add("Jens")
hash_set.add("Peter")
hash_set.add("Lisa")
hash_set.add("Adele")
hash_set.add("Michaela")
hash_set.add("Bob")

print(hash_set)