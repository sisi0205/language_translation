x=0
def f():
	x=0
	def g():
		x+=1
		print x
		if x<10:g()
		print x
	g()
	print x
f()
print x
