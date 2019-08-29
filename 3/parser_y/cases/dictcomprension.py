def key_value_gen(k):
	yield chr(k+65)
	yield chr((k+13)%26+65)
	d = dict(map(key_value_gen, range(26)))
