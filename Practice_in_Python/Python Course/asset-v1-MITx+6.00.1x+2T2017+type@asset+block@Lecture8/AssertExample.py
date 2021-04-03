# -*- coding: utf-8 -*-
"""
raises an AssertionError, if it is given an empty list for grades, otherwise runs Ok.

@author: CHV
"""

def avg(grades):
	assert not len(grades) == 0, 'No grades data'
	return sum(grades)/len(grades)
	
print 'Average is: ', avg([])
