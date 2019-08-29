def f():
  for x in range(3):
    if x < 3:
      print x
    else:
      print x+1


def getnum(val):
	if val > 3:
		try:
			val=int(raw_input("Enter a number "))
			for x in xrange(1,10):
				pass
		except Exception, e:
			print "Error -", e
			raise
		if val <0:
			try:
				val=raw_input("Renter a number ")
			except Exception, e:
				raise	
		else:
			print val




		#getnum(4)
		#f()




