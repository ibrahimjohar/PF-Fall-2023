#syntax to create an array in python

#arrayName = array.array(type code for data type, [array, items])

import array 

array1 = array.array('f', [10, 5, 3])

print(array1)

import array as myArray

abc = myArray.array('d', [2.5,4.9,6.7])

print(abc)

import array as myarray

abc= myarray.array('q',[3,9,6,5,20,13,19,22,30,25])

#slicing 
print(abc[1:4])

print(abc[7:10])


balance = array.array('i', [300,200,100])

print(balance)

balance.insert(2, 150)

print(balance)

import array as myarr

first = myarr.array('b', [4, 6, 8])

second = myarr.array('b', [9, 12, 15])

numbers = myarr.array('b')

numbers = first + second

print(numbers)


import array as myarr

first = myarr.array('b', [20, 25, 30])

first.pop(2)

print(first)

#List is a collection which is ordered and changeable. Allows duplicate members.

sample_list = [1, "Fahad", ['a','e']]

print(sample_list)


#thisdict =  { "brand": "toyota", "model": "grande", "year": 2021 }

#a = {"name": "faisal","age":25,"university":"fast" }

#print(a)

#print(a[name]) = ‘faisal’

#print(a.get(‘name’)) => ‘faisal’

#print(a[‘name2’]) = Error

#print(a.get(‘name2’)) = ?

example = {1:'a',2:'b',3:'c',4:'d'}
for i,k in enumerate(example):
    print(i,k)
    
    
    
a = "PROGRAMMING IN AI"

b = a.split(" ")

print(b)



x = lambda a : a + 10
print(x(5))
