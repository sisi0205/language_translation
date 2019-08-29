def f():
	for x in range(4):
		print x
	def g():
		for x in range(3):
			if x < 3:
				print x
			else:
				print x+1
				def t():
					print x


def gh(n):
  x = 0
  while x < n:
    if x < 3:
      print x
    else:
      print x+1
    x += 1





f()
gh(3)
