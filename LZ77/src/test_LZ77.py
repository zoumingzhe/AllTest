import os
from LZ77 import LZ77Compressor

def filewrite(path, datas):
   "写入二进制文件"
   filehandle = open(path, "wb+")
   filehandle.write(datas)
   filehandle.close()

def check(path1, path2):
   "检查源文件和解压文件内容"
   handle1 = open(path1, "rb")
   handle2 = open(path2, "rb")
   result = (handle1.read() == handle2.read())
   handle1.close()
   handle2.close()
   return result

def info(path1, path2):
    size1 = os.path.getsize(path1)
    size2 = os.path.getsize(path2)
    dict = {'bytes1': size1, 'bytes2': size2}
    return dict

window_size = 100
filename = "input"
filetype = ".txt"
filepath1 = "..\\examples\\" + filename + filetype
filepath2 = "..\\examples\\compressed\\" + filename + "_window_" + str(window_size) + filetype
filepath3 = "..\\examples\\decompressed\\" + filename + filetype
compressor = LZ77Compressor(window_size) # window_size is optional

filewrite(filepath2, compressor.compress(filepath1, verbose=False).tobytes())
filewrite(filepath3, compressor.decompress(filepath2).tobytes())

result = info(filepath1, filepath2)
print(check(filepath1, filepath3), window_size, result['bytes1'], result['bytes2'],
      result['bytes2'] / result['bytes1'] * 100)

input("按回车（Enter）继续")