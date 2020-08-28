#!/usr/bin/env python3
# Sifer Aseph

import os
import img2pdf

directory = "" # Put your directory to the images here.

files = [image for image in os.listdir(directory)]
gallery = []

for item in files:
    gallery.append(directory+item)

gallery = sorted(gallery)

with open("output.pdf", "wb") as f:
    f.write(img2pdf.convert(gallery))
