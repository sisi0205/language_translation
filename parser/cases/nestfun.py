def f(x):
	if x == 1:
		print a
	elif x == 2:
		print b
		def size1(y):
			while y < 6:
				if y < 2:
					print y
				elif y < 4:
					print y ^ 2
			def size2(y):
				while y < 6:
					if y < 2:
						print y
					elif y < 4:
						print y ^ 2
def g(y):
	while y < 6:
		if y < 2:
			print y
		elif y < 4:
			print y ^ 2

f(4)
g(3)
