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
			print "Pass"


