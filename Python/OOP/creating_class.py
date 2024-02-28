class Employee:
    def __init__(self,name,age,salary):
        self.name=name
        self.age=age
        self.salary=salary
        pass

class SoftwareEngineer(Employee):

    def __init__(self,name,age,salary,domain,role):
        super().__init__(name,age,salary)
        self.domain=domain
        self.role=role
    
    def __str__(self):
        return f"{self.name} is currently working with {self.domain} as a {self.role} Software Engineer"

se1=SoftwareEngineer("Shafayetul Islam",26,30000,"Robotics","Senior")

print(se1)
