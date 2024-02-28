from sklearn.linear_model import LinearRegression
import pandas as pd
import numpy as np
import joblib

model=joblib.load("/home/uatech/Problem-Solving/project/Employee Salary/model")

#print(type(model.predict([[2,8,8]])))

class Employee:
    def __init__(self,name,age):
        self.name=name
        self.age=age

class Candidate(Employee):
    def __init__(self,name,age,experience,test_score,interview_score):
        super().__init__(name,age)
        self.experience=experience
        self.test_score=test_score
        self.interview_score=interview_score
    
    def _determineSalary(self):
        return model.predict([[self.experience,self.test_score,self.interview_score]])
    
    def __str__(self):
        return f"{self.name} may get {self._determineSalary()[0]} BDT"
person1=Candidate("Shafayet",26,1,8,5)

print(person1)