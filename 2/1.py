f = open('pars.txt', 'r', encoding='utf-8')
f2 = open('pars2.txt', 'w', encoding='utf8')



for row in f:
	
		
	#print (row)
	a = row.split()
	a.append(a[3])
	a[3] = int(a[1])*int(a[2])
	#print(a)
	f2.write(str(a)) \n
	


f.close()
f2.close()
