import os
import ztools
from LZ77 import LZ77Compressor

def ensure(path, name, type):
   "确保文件夹存在"
   file = ztools.File()
   file.ensure(path + "\\compressed", isCreate = True)
   file.ensure(path + "\\decompressed", isCreate = True)
   path1 = path + "\\" + name + type
   path2 = path + "\\compressed\\" + name + "_window_" + str(window_size) + type
   path3 = path + "\\decompressed\\" + name + type
   return [path1,path2,path3]

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
path1,path2,path3 = ensure("..\\examples", "input", ".txt")

compressor = LZ77Compressor(window_size) # window_size is optional
filewrite(path2, compressor.compress(path1, verbose=False).tobytes())
filewrite(path3, compressor.decompress(path2).tobytes())

result = info(path1, path2)
print(check(path1, path3), window_size,
      result['bytes1'], result['bytes2'],
      result['bytes2'] / result['bytes1'] * 100)

input("按回车（Enter）继续")