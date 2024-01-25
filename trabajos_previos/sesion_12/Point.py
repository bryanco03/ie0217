class Point(object):
    def __new__(cls, *args, **kwargs):
        print("Fron new")
        print(cls)
        print(args)
        print(kwargs)

        # crear objecto y delvolverlo
        obj = super().__new__(cls)
        return obj
    
    def __init__(self, x = 0, y = 0):
        print("From init")
        self.x = x
        self.y = y
        

class SqPoint(Point):
    MAX_Inst = 4
    Ins_created = 0
    def __new__(cls, *args, **kwargs):
        if (cls.Ins_created >= cls.MAX_Inst):
            raise ValueError("Cannot create more objects")
        cls.Ins_created += 1
        return super().__new__(cls)




