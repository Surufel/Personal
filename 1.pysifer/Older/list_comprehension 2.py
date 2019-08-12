#!/usr/bin/env python3
# Sifer Aseph

category1 = ["A", "B", "C"]
category2 = ["item1", "item2", "item3", "item4", "item5", "item6"]
category3 = [(0, 1), (2, 3), (4, 5)]

print({ y[1]: { x[1] for x in enumerate(category2) if x[0] in category3[y[0]] } for y in enumerate(category1) })
