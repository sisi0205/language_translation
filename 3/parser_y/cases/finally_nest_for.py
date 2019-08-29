def getnum(val):
	if val > 3:
		try:
			for x in xrange(1,10):
				pass
			#val=int(raw_input("Enter a number "))
		except Exception, e:
			print "Error -", e
			raise
		else:
			print val
		finally:
			print "Pass"
			if x <3:
				pass
			


#getnum(2)