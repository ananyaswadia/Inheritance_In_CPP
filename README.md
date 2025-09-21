# Inheritance_In_CPP
## Aim
To study and implement INHERITANCE in C++.
## Theory
The capability of a class to derive properties and characteristics from another class is called Inheritance. Inheritance is one of the most important features of Object-Oriented Programming in C++. In this article, we will learn about inheritance in C++, its modes and types along with the information about how it affects different properties of the class.

Types Of Inheritance in C++
The inheritance can be classified on the basis of the relationship between the derived class and the base class. In C++, we have 5 types of inheritances:
1. Single inheritance
2. Multilevel inheritance
3. Multiple inheritance
4. Hierarchical inheritance
5. Hybrid inheritance
## Algorithms
### Single Level
1. Start.

2. Define base class Vehical with data member brand and function color().

3. Define derived class Car inheriting from Vehical, with data member model.

4. In main(), create object mycar of class Car.

5. Display car brand and model.

6. Call color() function to display the color.

7. End.
### Multi Level
1. Start.

2. Define class Material with types of materials.

3. Define class Length inheriting from Material, with fabric lengths.

4. Define class Cloth inheriting from Length, with types of clothes.

5. In main(), create objects mycloth and mycloth2.

6. Display order details with material, cloth type, and required length.

7. End.
### Hierarchical 
1. Start.

2. Define base class Organism with constructor printing "Mammal".

3. Define derived classes Type1 (Dog) and Type2 (Cat).

4. Define further derived classes: Species1 (Dog breeds) and Species2 (Cat breeds).

5. In main(), create object s1 of Species1 → prints hierarchy for dogs.

6. Create object s2 of Species2 → prints hierarchy for cats.

7. End.
## Conclusion
With this experiment we learnt to apply 4 types of Inheritance in C++.
