import codecs
import re
import matplotlib.pyplot as plt
import jieba
import wordcloud
from imageio import imread


# 数据处理
f = codecs.open('/Users/yjhmit/Documents/best.txt','r',encoding='utf-8')   # 改成自己的聊天记录文件
fl = f.read('/Users/yjhmit/Documents/best.txt')
del fl[:8]
fl = fl[1::3]
strf = ' '.join(fl)
list1 = re.findall(r'/.{2,3}', strf)
list2 = re.findall(r'\[.+?\]', strf)
set1 = set(list1)
set2 = set(list2)
strf = strf.replace('请使用最新版本手机QQ查看', '')
strf = strf.replace('请使用最新版手机QQ体验新功能', '')
for item in set1:
    strf = strf.replace(item, '')
for item in set2:
    strf = strf.replace(item, '')

# 制作词云
word_list = jieba.cut(strf, cut_all=True)
word = ' '.join(word_list)
pic = imread('/Users/yjhmit/Pictures/love.jpg')
wc = wordcloud.WordCloud(mask=pic, font_path='/Library/Fonts/Songti.ttc', width=1000, height=500, background_color='white').generate(word)

plt.imshow(wc)
plt.axis('off')
plt.show()
