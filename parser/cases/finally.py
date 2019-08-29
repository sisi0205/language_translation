def cetnum(val):
	if val > 3:
		try:
			for n in range(3):
				print "error"
			val=int(raw_input("Enter a number "))
		except Exception, e:
			print "Error -", e
			raise
		else:
			print val
		finally:
			print "Pass"

def getnum(val):
	if val < 3:
		print 'boss'
	else:
		print val+1
