import copy as cp
class Rand:
    def __init__(self, val):
        self.value=val
    
class Vehicle:
    def __init__(self, name, max_speed, mileage):
        self.name=name
        self.max_speed=max_speed
        self.mileage = mileage
        self.rand = Rand(10)
        
    def needsMainetenance(self):
        if self.mileage > 50000:
            return True
        else:
            return False
    def __lt__(self, other):
        return self.max_speed < other.max_speed
    

class Bus(Vehicle):
    def __init__(self, name, max_speed, mileage, capacity):
        super().__init__(name, max_speed, mileage)
        self.capacity= capacity
    
    def needsMainetenance(self):
        temp = super().needsMainetenance()
        return temp and self.capacity > 60
    
    def __add__(self, other):
        self.capacity = self.capacity + other.capacity
        
    def __str__(self):
        return f"Name: {self.name} Capacity: {self.capacity}"
    
b1 = Bus("Bus1", 80, 65000, 75)
b2 = Bus("Bus2", 90, 65100, 45)

print(b1.needsMainetenance())
print(b2.needsMainetenance())

b3 = cp.deepcopy(b1)
b3.capacity =111
print(b1.capacity)
print(b3.capacity)

b3.rand.value=25

print(b1.rand.value)
print(b3.rand.value)

if b1 < b2:
    print("B1")
else:
    print("B2")
    
b1+b2
print(b1.capacity)
    
    
    
    















