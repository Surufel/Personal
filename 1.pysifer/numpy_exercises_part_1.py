# Sifer Aseph
#
# numpy exercises part 1

import numpy as np

print(np.__version__)
np.show_config()

null_vector1 = np.zeros(10)
print(null_vector1)

# size is how many items there are, itemsize is how big an item is
null_vector2 = np.zeros((10, 10))
print("%d bytes" % (null_vector2.size * null_vector2.itemsize))

# documentation
#%run `python -c "import numpy; numpy.info(numpy.add)"`

null_vector3 = np.zeros(10)
null_vector3[4] = 1
print(null_vector3)

null_vector4 = np.arange(10, 50)
print(null_vector4)

# reverse a vector (first element becomes last)
null_vector5 = np.arange(50)
null_vector5 = null_vector5[::-1]
print(null_vector5)

nv6 = np.arange(9).reshape(3,3)
print(nv6)

nv7 = np.nonzero([1,2,0,0,4,0])
print(nv7)

nv8 = np.eye(3)
print(nv8)

nv9 = np.random.random((3,3,3))
print(nv9)

nv10 = np.random.random((10,10))
nv10min, nv10max = nv10.min(), nv10.max()
print(nv10min, nv10max)

nv11 = np.random.random(30)
nv11mean = nv11.mean()
print(nv11mean)

# create a 2d array with 1 on the border and 0 inside
nv12 = np.ones((10,10))
nv12[1:-1, 1:-1] = 0
print(nv12)

nv13 = np.ones((5,5))
nv13 = np.pad(nv13, pad_width=1, mode='constant', constant_values=0)
print(nv13)

# what are the results?
print(0 * np.nan)
print(np.nan == np.nan)
print(np.inf > np.nan)
print(np.nan - np.nan)
print(np.nan in set([np.nan]))
print(0.3 == 3 * 0.1)
# see IEEE for explanation

nv14 = np.diag(1+np.arange(4), k=-1)
print(nv14)

nv15 = np.zeros((8,8), dtype=int)
nv15[1::2, ::2] = 1
nv15[::2, 1::2] = 1
print(nv15)

# what is the index (x,y,z) of the 100th element?
print(np.unravel_index(99,(6,7,8)))

nv16 = np.tile(np.array([[0,1],[1,0]]), (4,4))
print(nv16)

# normalize a matrix
nv17 = np.random.random((5,5))
nv17 = (nv17 - np.mean(nv17)) / (np.std(nv17))
print(nv17)

# custom dtype that describes red green blue alpha
color = np.dtype([("r", np.ubyte, 1),
                  ("g", np.ubyte, 1),
                  ("b", np.ubyte, 1),
                  ("a", np.ubyte, 1)])

# matrix product
nv18 = np.dot(np.ones((5,3)), np.ones((3,2)))
print(nv18)

# or
nv18 = np.ones((5,3)) @ np.ones((3,2))
print(nv18)

nv19 = np.arange(11)
nv19[(3 < nv19) & (nv19 <= 8)] *= -1
print(nv19)

# what is the result?
print(sum(range(5), -1))
# 9

# what is legal?
#Z**Z
#2 << Z >> 2
#Z <- Z
#1j*Z
#Z/1/1
#Z<Z>Z

# what are the results?
#print(np.array(0) / np.array(0))
#print(np.array(0) // np.array(0))
#print(np.array([np.nan]).astype(int).astype(float))

nv20 = np.random.uniform(-10,+10,10)
print(np.copysign(np.ceil(np.abs(nv20)),nv20))

nv21a = np.random.randint(0,10,10)
nv21b = np.random.randint(0,10,10)
print(np.intersect1d(nv21a,nv21b))

# how to ignore numpy warnings
defaults = np.seterr(all="ignore")
nv22 = np.ones(1) / 0

# revert ignore
_ = np.seterr(**defaults)

# equivalent way, with a context manager
with np.errstate(divide="ignore"):
    nv23 = np.ones(1) / 0

yesterday = np.datetime64('today', 'D') - np.timedelta64(1, 'D')
today     = np.datetime64('today', 'D')
tomorrow  = np.datetime64('today', 'D') + np.timedelta64(1, 'D')

nv23 = np.arange('2016-07', '2016-08', dtype='datetime64[D]')
print(nv23)

nv24a = np.ones(3)*1
nv24b = np.ones(3)*2
np.add(nv24a,nv24b,out=nv24b)
np.divide(nv24a,2,out=nv24a)
np.negative(nv24a,out=nv24a)
np.multiply(nv24a,nv24b,out=nv24a)

# 5 different ways to extract the integer part of an array
nv25 = np.random.uniform(0,10,10)
print(nv25 - nv25%1)
print(np.floor(nv25))
print(np.ceil(nv25)-1)
print(nv25.astype(int))
print(np.trunc(nv25))

nv26 = np.zeros((5,5))
nv26 += np.arange(5)
print(nv26)

def generate():
    for x in range(10):
        yield x
nv27 = np.fromiter(generate(), dtype=float, count=-1)
print(nv27)

nv28 = np.linspace(0,1,11,endpoint=False)[1:]
print(nv28)

nv29 = np.random.random(10)
nv29.sort()
print(29)

nv30 = np.arange(10)
np.add.reduce(nv30)

nv31a = np.random.randint(0,2,5)
nv31b = np.random.randint(0,2,5)
equal = np.allclose(nv31a,nv31b)
print("first: ", equal)
equal = np.array_equal(nv31a,nv31b)
print("second: ", equal)

nv32 = np.zeros(10)
nv32.flags.writeable = False
#nv32[0] = 1

# convert cartesian coordinates to polar coordinates
nv33z = np.random.random((10,2))
nv33x, nv33y = nv33z[:,0], nv33z[:,1]
nv33r = np.sqrt(nv33x**2, nv33y**2)
nv33t = np.arctan2(nv33y, nv33x)
print("R: ", nv33r)
print("T: ", nv33t)

nv34 = np.random.random(10)
nv34[nv34.argmax()] = 0
print(nv34)

# structured array
nv35 = np.zeros((5,5), [('x', float), ('y', float)])
nv35['x'], nv35['y'] = np.meshgrid(np.linspace(0,1,5),
                                   np.linspace(0,1,5))
print(nv35)

# Cauchy matrix
nv36x = np.arange(8)
nv36y = nv36x + 0.5
nv36c = 1.0 / np.subtract.outer(nv36x, nv36y)
print(np.linalg.det(nv36c))

for dtype in [np.int8, np.int32, np.int64]:
   print(np.iinfo(dtype).min)
   print(np.iinfo(dtype).max)
for dtype in [np.float32, np.float64]:
   print(np.finfo(dtype).min)
   print(np.finfo(dtype).max)
   print(np.finfo(dtype).eps)

np.set_printoptions(threshold=np.nan)
nv37 = np.zeros((16,16))
print(nv37)

nv38 = np.arange(100)
nv38v = np.random.uniform(0,100)
index = (np.abs(nv38-nv38v)).argmin()
print(nv38[index])
