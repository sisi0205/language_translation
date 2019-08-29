x=30

def f():
	y=4
	print x
	def z():
		print x
	z()


def g():
	x=10
	def h():
		x=40
		f()
	h()

g()
