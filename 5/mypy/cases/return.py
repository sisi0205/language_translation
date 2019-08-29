def f():
  x = 0
  if x == 0: 
    print 99
    x = 17
    if x: 
      x=18
      print 1
      return
    else: 
      print 2
    print 101

f()
print 17
