#!/usr/bin/env python3
# Sifer Aseph

import pprint

sentence = ['i', 'wish', 'i', 'were', 'beautiful']
sentence.insert(0, sentence[:])

pretty_printing = pprint.PrettyPrinter(indent=4)
pretty_printing.pprint(sentence)
