#!/usr/bin/python

def count(string):
    words = string.split()
    return len(words)


if __name__ == '__main__':
    string = raw_input("Enter a string: ")
    print "Word count: ", count(string)
