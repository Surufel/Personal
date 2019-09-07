filename = "replay-#.hlt"
data = zstd.decompress(open(filename,"rb").read())
data = json.loads(data.decode())
