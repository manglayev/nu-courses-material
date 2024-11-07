class Car:
    def __init__(self, brand, yr, cr, weight):
        self.brand=brand
        self.year = yr
        self.color = cr
        self.weight = weight
        self.mileage = 0
        #print("HELLO ALL!!!")
        
    def move(self, km):
        self.mileage = self.mileage + km
    
    def __str__(self):
        return f"Brand: {self.brand} Year: {self.year} Color: {self.color} Weight: {self.weight}"
    
    def __lt__(self, other):
        if self.year < other.year:
            return True
        elif self.year == other.year:
            return self.weight < other.weight
        else:
            return False
    def __add__(self, other):
        self.weight=self.weight+other.weight

carsList = []
with open("cars.txt","rt") as f:
    lines = f.readlines()
    for line in lines:
        lst = line.split(", ")
        car = Car(lst[0], int(lst[1]), lst[2], int(lst[3]))
        carsList.append(car)
for car in carsList:
    print(car)
print("==============")
sortList = sorted(carsList)
for car in sortList:
    print(car)
    
x = 35
y = 50
print(x+y)    

car1 = Car("Kia",2020, "white", 2500)
car2 = Car("Honda",2021, "blue", 3000)

print(car1.weight)
print(car2.weight)
car1+car2
print(car1.weight)
print(car2.weight)

car2+car1
print(car1.weight)
print(car2.weight)