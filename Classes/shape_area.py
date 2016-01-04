class Shape(object):

    def __init__(self, side):
        self.side = side

    def getPerimeter(self):
        return 4 * self.side

    def getArea(self):
        return pow(self.side, 2)


class Diamond(Shape):

    def __init__(self, diag1, diag2):
        Shape.__init__(self, diag1)
        self.diag1 = self.side
        self.diag2 = diag2

    def getArea(self):
        return (self.diag1 * self.diag2) / 2


class Rectangle(Shape):

    def __init__(self, length, width):
        Shape.__init__(self, length)
        self.length = self.side
        self.width = width

    def getArea(self):
        return self.length * self.width


class Triangle(Shape):

    def __init__(self, base, height):
        Shape.__init__(self, base)
        self.base = self.side
        self.height = height

    def getArea(self):
        return (self.base * self.height) / 2


if __name__ == "__main__":

    s = Shape(3)
    t = Triangle(3, 2)
    r = Rectangle(4, 5)

    print "S side:", s.side
    print "S area:", s.getArea()
    print "S peri:", s.getPerimeter()
    print
    print "T side: %d, %d " % (t.base, t.height)
    print "T area:", t.getArea()
    print "T peri:", t.getPerimeter()
    print
    print "R side: %d, %d" % (r.length, r.width)
    print "R area:", r.getArea()
    print "R peri:", r.getPerimeter()
