#Part a: ML defines functions using exhaustive cases, so in case of arbitrary number of levels, ML wont know which base case to match.
#Part bL
import collections  


def flatten(listt):
    for item in listt:
       
        if (isinstance(item, collections.Iterable)):
            
            for single in flatten(item):
                yield single
                
        else:
            yield item
