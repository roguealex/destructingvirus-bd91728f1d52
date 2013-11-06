#classes

class Banana:

#python needs two underscores
    def __init__(self , ripenessIn, speciesIn): #default, every function under a class must have a self(ie)
        self.ripeness = ripenessIn
        self.species = speciesIn

    #normal constructor what do?
    #notin'



    def grow(self):
        self.ripeness += 1

theVariable = Banana(1, "Guate-olo")
print theVariable.species
print theVariable.ripeness
grow(self)
print theVariable.ripeness

#var = 500
#print "The var is" + str(var) #wrongola
