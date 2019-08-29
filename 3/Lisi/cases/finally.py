def getnum(val):
	if val > 3:
		try:
			val=int(raw_input("Enter a number "))
		except Exception, e:
			print "Error -", e
			raise
		else:
			print val
		finally:
			for x in xrange(1,10):
				pass
			#print "Pass"


