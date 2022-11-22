# HTML

## 网页的相关概念

### 1. 什么是网页？

` 网站:是指在因特网上根据一定的规则，使用HTML等制作的用于展示特定内容相关的网页的集合`

`网页是网站中的一页，通常是HTML格式的文件，他通过浏览器来阅读`

`网页是构成网站的基本元素`，它通常由==图片、链接、文字、声音、视频==等元素组成。通常我们看到的网页，常见的以`.htm 或者 .html 后缀结尾的文件，因此将其称为html文件`

### 2. 什么是HTML？

`HTML指的是超文本标记语言（Hyper Text Markup Language），它是一门用来描述网页的语言`。

HTML不是一种编程语言，而是一种标记语言（markup language）

标记语言是一套标记标签

所谓超文本，有两层含义：

1. 他可以加入图片、声音、动画、多媒体等内容（超越了文本的限制）
2. 它还可以从一个文件跳转到另一个文件，与世界各地主机的文件连接（超级链接文本）  

### 3. 网页是怎么形成的？

`其实网页就是通过 前端人员开发代码---> 浏览器显示代码（解析、渲染） ---> 生成最后的Web网页`

## 常用的浏览器 以及内核

### 1. 常用的浏览器

浏览器就是网页显示，运行的平台。常用的浏览器有五个，IE(Edge)、火狐（Firefox）、==谷歌（Chrome）==、Safari和Opera等 

### 2. 浏览器的内核（了解）

浏览器内核（渲染引擎）：负责读取网页内容，整理讯息，计算网页的显示方式并且显示网页

## Web标准（重点）

Web标准 是W3C组织和其他标准化组织制定的一系列标准的集合。W3C(万维网联盟) 是国际最著名的标准化组织

### 1.为什么需要Web标准呢？

`浏览器不同，它们显示网页或者排版就有些许差异`

![](https://xingqiu-tuchuang-1256524210.cos.ap-shanghai.myqcloud.com/1892/Typora20221116163428.png)

### 2. Web标准的构成

`主要包括 结构（Structure) 表现（Presentation） 行为（Behavior) 三个方面`

![](https://xingqiu-tuchuang-1256524210.cos.ap-shanghai.myqcloud.com/1892/Typora20221116163527.png)

Web标准提出的最佳体验方案：  结构、样式、行为相分离

简单的理解就是 ：`结构写到HTML文件中，表现写到CSS当中、行为写到JavaScript当中`

![](https://xingqiu-tuchuang-1256524210.cos.ap-shanghai.myqcloud.com/1892/Typora20221116164723.png) 

# HTML标签（上）

## HTML语法规范

### 1. 基本语法概述

1. HTML标签是由尖括号包围起来的关键字，例如<html>。
2. HTML标签大部分是成对出现的，例如<html>和</html>，我们称为双标签。标签对中的第一个标签是开始标签，第二个标签是结束标签。
3. 有些特殊的标签必须是单标签（极少的情况下），例如`<br / >` ，我们称为单标签。

### 2. 标签关系

双标签关系可以分为两大类：包含关系和并列关系。

包含关系（其实就是嵌套) 

```html
<head>
    <title> </title>
</head>
```

并列关系

```html
<head> </head>
<title></title>
```

## HTML基本结构标签

### 1. 第一个HTML网页

每个网页都会有一个基本的结构标签（也称为骨架标签），页面内容也是在这些基本标签上书写的。

HTML页面也称为HTML文档

 ```html
<html>
	<head>
    	<title>Title</title>
	</head>
	<body>
        	xxxxxxx
	</body>
</html>
 ```

![](https://xingqiu-tuchuang-1256524210.cos.ap-shanghai.myqcloud.com/1892/Typora20221116172821.png)

### 2. 开发工具

 ![](https://xingqiu-tuchuang-1256524210.cos.ap-shanghai.myqcloud.com/1892/Typora20221116173251.png)

我们以VScode为例

创建一个文件

```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>利用VScode写的第一个HTML</title>
</head>
<body>
    啦啦啦~ 我是爱白露的小宝宝~
</body>
</html>
```

需要掌握：

![](https://xingqiu-tuchuang-1256524210.cos.ap-shanghai.myqcloud.com/1892/Typora20221116195951.png)   

### 3. VScode里面的插件

1. Open in browser  作用就是 右键选择浏览器 打开HTML文件
2. JS-CSS-HTML Formatter 作用就是 每次保存都会自动格式化 HTML  js css 的代码
3. Auto Rename Tag 作用就是重命名配对的HTML/XML 标签
4. CSS Peek  作用就是 追踪至样式

### 4. VScode 工具生成的骨架标签里，自动新增加的代码

#### 1. `<!DOCTYPE>`标签

它叫做文档类型声明，作用就是告诉浏览器使用哪种HTML版本来显示网页

```html
<!DOCTYPE html> 
```

↑这个代码的意思就是：当前页面采取的是HTML5版本来显示网页的.
注意：document

- 这个代码必须写在网页的最前面的位置，处于<html> 标签之前。
- 这个代码不是一个HTML标签，他就是一个文档类型声明标签。

#### 2. lang 语言

lang 用来定义当前文档显示的语言。

- en 就是英语
- zh-CN 定义语言为中文

`简单来说就是，定义为en 就是英文网页，定义为zh-CN就是中文网页`
`其实呢，对于文档来说，定义为en的文档也可以显示中文，定义为zh-CN也可以显示英文`

#### 3. charset字符集

字符集是多个字符的集合，一边计算机能够识别和储存各种文字

`在<head>	标签内，可以通过<meta>标签的charset属性来规定HTML文档应该使用哪种字符编码`

```html
<meta charset = "UTF-8"  >
```

`charset常用的值有：GB2312（简体中文）、BIG5（繁体中文）、GBK（包含简体和繁体 ）和UTF-8，其中UTF-8被称为万国码，基本包含了全世界所有国家需要用到的字符。`

### 5. HTML常用的标签

#### 5.1 标签语义

就是指：这个标签是干啥的 

`根据标签的语义，在合适的地方给一个最为合理的标签，可以让页面结构更加清晰`

![](https://xingqiu-tuchuang-1256524210.cos.ap-shanghai.myqcloud.com/1892/Typora20221117173547.png)

![](https://xingqiu-tuchuang-1256524210.cos.ap-shanghai.myqcloud.com/1892/Typora20221117173618.png)

#### 5.2 标题标签 `<h1> - <h6>`  （非常重要）

```html
<h1> 我是一级标题  </h1>
```

标题标签的语义就是：作为标题使用，并且依据重要性递减

==特点==

1. 加了标题的文字就会变得加粗，字号也会依次变大
2. 一个标题独占一行

```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title>Document</title>
</head>
<body>
    <h1>标题标签</h1>
    <h1>标题一共六级选,</h1>
    <h2>文字加粗一行显。</h2>
    <h3>由大到小依次减，</h3>
    <h4>从重到轻随之变。</h4>
    <h5>语法规范书写后，</h5>
    <h6>具体效果刷新见。</h6>
    　　        ------睿睿

</body>
</html>
```

#### 5.3 段落和换行标签（也是非常重要）

在网页中，要把文字有条理 地显示出来，就需要将这些文字分段显示。在HTML中，`<p>`标签用于`定于段落`，他可以将整个网页分为若干个段落。p 就是 paragraph 的缩写

==特点==

1. 文本在一个段落中会根据浏览器窗口的大小自动换行。
2. 段落和段落之间保有空隙。

---

在HTML中，一个段落中的文字会从左到右依次排列，直到浏览器窗口的右端，然后才自动换行。如果希望某段文本强制换行显示，就需要使用换行标签`<br />`  其实就是单词break 的缩写

`标签的语义：强制换行。`

==特点：==

1. `<br />` 是一个单标签
2. `<br />` 标签只是简单的开始新的一行，跟段落不一样，段落之间会插入一些垂直的间距。

---

---

课堂练习：

![](https://xingqiu-tuchuang-1256524210.cos.ap-shanghai.myqcloud.com/1892/Typora20221117201401.png)

```text
体育新闻水花61分伊戈达拉制胜抢断 西决勇士再胜开拓者总分2-0数据统计：水花兄弟合砍61分库里22投11中，三分14投4中，罚球11罚全中得到37分8篮板8助攻，职业生涯季后赛得分30+次数来到35次，超过哈登排名现役第3位，仅次于詹姆斯和杜兰特。汤普森22投8中，三分8投4中得到24分3篮板2助攻，德拉蒙德-格林得到16分10篮板7助攻5盖帽，凯文-鲁尼得到14分7篮板2助攻，今天勇士有7名替补出场。兄弟对决升级：小库里给哥哥造成压力库里兄弟是NBA历史上第一对在分区决赛相遇的兄弟。在西决第1场中，小库里没有给哥哥造成压力，他出场19分钟，7投1中只得到3分3篮板2助攻，在场期间输掉10分。但在西决第2场中，小库里攻防两端都打出杰出的表现，全场送出4次抢断，包括直接抢断自己的哥哥库里，在防守端给库里造成了极大的困扰。作者: ruirui2022-11-17

```

#### 5.4 文本格式化标签

在网页中，有时需要为文字设置粗体、斜体、下划线等效果，这时就需要用到HTML中的文本格式化标签，使文本以特殊的方式显示。

`标签语义：突出重要性，比普通文字更重要。`

| 语义     | 标签                         | 说明                                       |
| -------- | ---------------------------- | ------------------------------------------ |
| ==加粗== | <strong></strong>或者<b></b> | 更推荐使用<strong>标签加粗，语义更加强烈   |
| ==倾斜== | <em></em>或者<i></i>         | 更推荐使用<em>标签加粗 语义更强烈          |
| 删除线   | <del></del> 或者<s></s>      | 更推荐使用<del> 标签加粗，语义更加抢了强烈 |
| 下划线   | <ins></ins> 或者<u></u>      | 更推荐使用<ins> 标签加粗，语义更加强烈     |
|          |                              |                                            |

#### 5.5 `<div> `和`<span> `标签

<div> 和 <span> 是没有语义的，它们就是一个盒子，用来装内容的。


```html
<div>这是头部</div>
<span>今日价格</span>
```

![](https://xingqiu-tuchuang-1256524210.cos.ap-shanghai.myqcloud.com/1892/Typora20221117203130.png)

==特点：==

1. `<div>` 标签是用来布局的，但是现在一行只能放一个<div> 。 可以想想成一个大盒子、
2. `<span>` 标签用来布局，一行上可以放多个<span>。  可以想象成一个小盒子

#### 5.6 图像标签和路径（非常重要）

	##### 1. 图像标签

在HTML标签中，`<img>`  标签用于定义HTML页面中的图像  单标签。

```html
<img src="图像URL" />
```

`Src` 是`<img>`的必须属性，它用于指定图像文件的路径和文件名。

属性：简单理解就是属于这个图像标签的特性。

![](https://xingqiu-tuchuang-1256524210.cos.ap-shanghai.myqcloud.com/1892/Typora20221117204057.png)

##### 图像标签的注意点：

- 图像标签可以拥有多个属性，必须写在标签名的后面
- 属性之间不区分先后顺序，标签名 与属性、属性与属性之间 必须以空格分开
- 属性采用键值对的格式，即key = "value" 的格式，属性 = "属性值"

==重点掌握：=

1. 请说出 图像标签 哪个属性是必须要写的？
2. 请说出 图像标签 alt 和title属性的区别

##### 2. 路径

1. 目录文件夹和根目录
   1. 目标文件夹：就是普通文件夹，里面只不过存放了我们做网页所需要的相关素材，比如html文件 和 图片等
   2. 根目录：打开目录文件夹的第一层就是根目录

#### 5.7路径(非常重要)

##### 1. 相对路径

相对路径：以引用文件所在位置为参考基础，而建立出的目录路径。

![](https://xingqiu-tuchuang-1256524210.cos.ap-shanghai.myqcloud.com/1892/Typora20221118204618.png)

##### 2. 绝对路径

就是 相对于你计算机的位置 

#### 5.8 超链接标签（重点）

在HTML链接中，`<a>` 标签用于定义超链接，作用就是 从一个页面链接到另一个页面。

```html
<a herf="跳转目标" target="目标弹窗方式"> 文本或者图像</a>
```

![](https://xingqiu-tuchuang-1256524210.cos.ap-shanghai.myqcloud.com/1892/Typora20221118205703.png)

链接的分裂：

1. 外部链接：例如 `<a href="http://www.baidu.com">  百度</a>`
2. 内部链接: 网页内部页面之间的相互链接，直接链接内部网页的名称即可，例如 `<a href="index.html">首页</a>`
3. 空链接：#   例如：`<a href="#">首页</a>`
4. 下载链接：地址链接的是 文件 .exe呀 或者.zip呀，压缩包形式  例如`<a href="下载链接">下载</a>`
5. 网页元素链接：在网页中的各种网页元素，如 文本、图像、表格、音频、视频、等等  都可以添加超链接

![](https://xingqiu-tuchuang-1256524210.cos.ap-shanghai.myqcloud.com/1892/Typora20221118210945.png)

6. 锚点链接：当我们点击链接，可以快速的定位到页面中的某个位置
   1. 在链接文本的herf属性中，设置属性值为#名字的形式，如`<a href="#two"> 第二季 </a>`   
   2. 找到目标位置的标签，里面添加一个id属性 = 刚才定义的名字(two)  如`<h3 id="two"> 第二季介绍 </h3>`

#### 5.9注释标签和特殊字符

##### 1. 注释标签

 如果需要在HTML文档中添加一些便于阅读和理解单又不需要显示在页面中的注释文字，就需要使用注释标签

跟C++的注释一样，

```html
<!-- 注释语句 -->   快捷键就是：ctrl + /
```

##### 2. 特殊字符

![](https://xingqiu-tuchuang-1256524210.cos.ap-shanghai.myqcloud.com/1892/Typora20221121123011.png)

---

---

# 综合案例

主要复习的是：

1. 目标文件夹
2. 所有学过的标签
3. 路径
4. 锚点链接

文本如下：

```text
圣诞节的那些事1.圣诞是怎样由来的 2.圣诞老人的由来 3.圣诞树的由来 圣诞是怎样由来的圣诞节是基督教世界最大的节日。一般认为12月25日作为圣诞节可能开始于公元336年的罗马教会。
4世纪初，1月6日是罗马帝国东部各教会纪念耶稣降生和受洗的双重节日，即上帝通过耶稣向世人显示自己。这一天又是罗马历书的冬至节，意味着万物复苏的开始。可能由于这个原因，罗马教会才选择这一天作为圣诞节。后来，因为各地教会使用的历书不同，具体日期不能统一，于是就把12月24日到第二年的1月6日定为圣诞节节期(Christmas Tide），各地教会可以根据当地具体情况在这段节期之内庆视圣诞节。在欧美许多国家里，人们非常重视这个节日，把它和新年连在一起，而庆祝活动之热闹与隆重大大超过了新年，成为一个全民的节日。12月24日平安夜、12月25日圣诞节的主要纪念活动都与耶稣降生的传说有关。圣诞老人的由来 圣诞节当然少不了圣诞老人，根据圣经记载，书中并没有提起这一号人物。到底他是如何成为圣诞的主角之一.
呢？相传在二千六百多年前，荷兰巴里地方有一个老人：名叫尼古拉斯，他一生最爱帮助宝穷的人家。其中有一次他帮助三个盆穷的少女，送她们三袋金子以逃过被卖的不幸。到了一八三二年，由荷兰传教士把这位伟大慈善家的故事传到美国，装扮圣诞老人渐渐地流行于世界各国。根据调查，以上故事还有下文；当尼古拉斯偷偷把其中一袋金子送给其中一名女子时，他把金子从
其中一个窗户扔进去，恰好掉进晾在壁炉上的一只长袜中。于是，将礼物放在圣诞袜子的送礼方法便传到至今。在平安夜里，孩子总会把一双双色彩缤纷的袜子挂在床头，然后在袜子旁边放杯热牛奶让圣诞老人喝，以让劳苦功高的圣诞老人解渴，并送份大礼給自己。？圣诞树的由来 圣诞一直是庆祝圣诞节不可少的装饰物，如果家中没有圣诞树，就大大减少了过节气氛。关于圣诞树
的来源有多种不同的传说。其中一个是说：大约在十六世纪，圣诞树最先出现在德国，德国人把长青的松柏枝拿到屋中去摆设，将之成为圣诞树。后来，由德国人马丁路德把蜡烛放在树林中的枞树枝，然后点燃蜡烛，使它看起来像是引1导人们到伯利恒去。而近今日，人们己经改用粉色的小灯泡了。另一个传说记载。在很久以前，曾有一位农民，在圣诞节那天遇到一个穷苦小孩，他
热情地接待了这个儿童。儿童临走时折下一根松枝插在地上，松枝立即变成一棵树，上面都挂满礼物，以答谢农民的好意。圣诞树真正出现在圣诞节时，首先见于德国，之后又传入欧洲和美国，并以其优美的姿态，成为圣诞节不可缺少的装饰。圣诞树的种类繁多，有天然松柏圣诞树、也有人造圣诞树及白色圣诞树。每棵圣诞树上都挂满琳琅满目的装饰品，但每棵树的顶端必定有
个特大的星星，象征三博士跟随该星而找到耶稣，而且也只有该家庭的一家之主可以把这棵希望之星挂上。更多内容可以百度一下
```

 ```text
圣诞老人 （西方文化的传说人物）
圣诞老人（Santa Claus）别称Saint Nick、Kris Kringle、Father Christmas或Santa（爱尔兰英语的Santy），一位专门在圣诞节前夜时悄悄赠送礼物给小孩子的神秘人物，是节日主题的代表角色之一。他普遍被认为是基督教的圣人圣·尼古拉斯（Saint Nicholas）的衍生形象。 传说每到12月24日晚上，有个神秘人会乘驾由9只驯鹿拉的雪橇在天上飞翔，挨家挨户地从烟囱进入屋里，然后偷偷把礼物放在好孩子床头的袜子里，或者堆在壁炉旁的圣诞树下。他在一年中的其他时间里，都是忙于制作礼物和监督孩子们的行为。 虽然没有人真的见过神秘人的样子，但是人们会装扮成他的样子来给孩子送上礼物。他通常被描述为一位老人，头戴红色帽子，大大的白色胡子，一身红色棉衣，脚穿红色靴子的样子，拿着装有礼物的大袋子，因为总在圣诞节前夜出现派发礼物，所以习惯地称他为“圣诞老人”。
 ```

Demo.html

```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Document</title>
</head>
<body>
<h1>圣诞节的那些事</h1>
1.圣诞是怎样由来的<br />
<a href="#old">2.圣诞老人的由来</a> <br />
<a href="#tree">3.圣诞树的由来</a> <br />
<h2>圣诞是怎样由来的</h2>
<p>圣诞节是基督教世界最大的节日。一般认为12月25日作为圣诞节可能开始于公元336年的罗马教会。
    4世纪初，1月6日是罗马帝国东部各教会纪念耶稣降生和受洗的双重节日，即上帝通过耶稣向世人显示自己。这一天又是罗马历书的冬至节，意味着万物复苏的开始。可能由于这个原因，罗马教会才选择这一天作为圣诞节。后来，因为各地教会使用的历书不同，具体日期不能统一，于是就把12月24日到第二年的1月6日定为圣诞节节期(Christmas Tide），各地教会可以根据当地具体情况在这段节期之内庆视圣诞节。在欧美许多国家里，人们非常重视这个节日，把它和新年连在一起，而庆祝活动之热闹与隆重大大超过了新年，成为一个全民的节日。12月24日平安夜、12月25日圣诞节的主要纪念活动都与耶稣降生的传说有关。</p>
<img src="images/t1.gif">
<h2 id="old">圣诞老人的由来</h2>
<p>圣诞节当然少不了<a href="oldman.html">圣诞老人</a>，根据圣经记载，书中并没有提起这一号人物。到底他是如何成为圣诞的主角之一呢？</p>

<img src="images/t2.jpg">

<p>相传在二千六百多年前，荷兰巴里地方有一个老人：名叫尼古拉斯，他一生最爱帮助宝穷的人家。其中有一次他帮助三个盆穷的少女，送她们三袋金子以逃过被卖的不幸。</p>
<p>到了一八三二年，由荷兰传教士把这位伟大慈善家的故事传到美国，装扮圣诞老人渐渐地流行于世界各国。根据调查，以上故事还有下文；当尼古拉斯偷偷把其中一袋金子送给其中一名女子时，他把金子从 其中一个窗户扔进去，恰好掉进晾在壁炉上的一只长袜中。于是，将礼物放在圣诞袜子的送礼方法便传到至今。</p>
<p>在平安夜里，孩子总会把一双双色彩缤纷的袜子挂在床头，然后在袜子旁边放杯热牛奶让圣诞老人喝，以让劳苦功高的圣诞老人解渴，并送份大礼給自己。 ？</p>
<h2 id="tree">圣诞树的由来 </h2>
<p>圣诞一直是庆祝圣诞节不可少的装饰物，如果家中没有圣诞树，就大大减少了过节气氛。关于圣诞树的来源有多种不同的传说。</p>
<p>其中一个是说：大约在十六世纪，圣诞树最先出现在德国，德国人把长青的松柏枝拿到屋中去摆设，将之成为圣诞树。后来，由德国人马丁路德把蜡烛放在树林中的枞树枝，然后点燃蜡烛，使它看起来像是引1导人们到伯利恒去。而近今日，人们己经改用粉色的小灯泡了。</p>
<p>另一个传说记载。在很久以前，曾有一位农民，在圣诞节那天遇到一个穷苦小孩，他热情地接待了这个儿童。儿童临走时折下一根松枝插在地上，松枝立即变成一棵树，上面都挂满礼物，以答谢农民的好意。</p>

<p>圣诞树真正出现在圣诞节时，首先见于德国，之后又传入欧洲和美国，并以其优美的姿态，成为圣诞节不可缺少的装饰。圣诞树的种类繁多，有天然松柏圣诞树、也有人造圣诞树及白色圣诞树。</p>

<p>每棵圣诞树上都挂满琳琅满目的装饰品，但每棵树的顶端必定有个特大的星星，象征三博士跟随该星而找到耶稣，而且也只有该家庭的一家之主可以把这棵希望之星挂上。</p>
<img src="images/t3.jpg">

<p>更多内容可以<a href="http://www.baidu.com" target="_blank">百度一下</a> </p>  <!--记得 在新窗口打开-->
</body>
</html>
```

old.html

```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title>Document</title>
</head>
<body>
        <h1>圣诞老人 （西方文化的传说人物）</h1>
       <p> 圣诞老人（Santa Claus）别称Saint Nick、Kris Kringle、Father Christmas或Santa（爱尔兰英语的Santy），一位专门在圣诞节前夜时悄悄赠送礼物给小孩子的神秘人物，是节日主题的代表角色之一。他普遍被认为是基督教的圣人圣·尼古拉斯（Saint Nicholas）的衍生形象。 传说每到12月24日晚上，有个神秘人会乘驾由9只驯鹿拉的雪橇在天上飞翔，挨家挨户地从烟囱进入屋里，然后偷偷把礼物放在好孩子床头的袜子里，或者堆在壁炉旁的圣诞树下。他在一年中的其他时间里，都是忙于制作礼物和监督孩子们的行为。 虽然没有人真的见过神秘人的样子，但是人们会装扮成他的样子来给孩子送上礼物。他通常被描述为一位老人，头戴红色帽子，大大的白色胡子，一身红色棉衣，脚穿红色靴子的样子，拿着装有礼物的大袋子，因为总在圣诞节前夜出现派发礼物，所以习惯地称他为“圣诞老人”。</p>
       <img src="images/oldman.jpg" >
</body>
</html>
```

# HTML标签(下)

## 表格标签

表格标签是在实际开发中 非常常用的标签：

1. 表格的主要作用
2. 表格的基本语法

### 1.1 表格的主要作用

表格主要用于`显示、展示数据`，因为他可以让数据显示的非常的规整，可读性非常好。特别是后台展示数据的时候，能够熟练运用表格就显得很重要了。一个清爽简约的表格能够把繁琐的数据表现得很有条理。

总结一下就是，表格不是用来布局页面的，而是用来展示数据的。

演示：

https://q.stock.sohu.com/

### 1.2 表格的基本语法

```html
<table>
    <tr>
        <td>单元格内的文字</td>
    	...
    </tr>
    ...
</table>
```

1. `<table></table> `是用于定于表格的标签
2. `<tr></tr>`标签用于定义表格中的行，必须嵌套在`<table></table>`标签中.
3. `<td></td>`用于定义表格中的单元格，必须嵌套在`<tr></tr>`标签中.
4. 字母td 指的是表格数据table data ，即数据单元格的内容.

```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title>Document</title>
</head>
<body>
    <table>
        <tr><td>姓名</td>  <td>性别</td> <td> 年龄 </td></tr>
        <tr><td>刘德华</td>  <td>男</td> <td> 56 </td></tr>
        <tr><td>张学友</td>  <td>男</td> <td> 58 </td></tr>
        <tr><td>郭富城</td>  <td>男</td> <td> 51 </td></tr>
        <tr><td>黎明</td>  <td>男</td> <td> 57 </td></tr>
    </table>
</body>
</html>
```



### 1.3 表头单元格标签

 一般表头单元格位于表格的第一行或者第一列，表头单元格里面的文本内容加粗居中显示.

`<th>`标签表示了HTML表格的标头部分(table head 的缩写)

```html
<table>
    <tr>
        <th>姓名</th>
        ...
    </tr>
    ...
</table>
```

修改1.2的代码：

```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title>表头单元格标签</title>
</head>
<body>
    <table>
        <tr><th>姓名</th>  <th>性别</th> <th> 年龄 </th></tr>
        <tr><td>刘德华</td>  <td>男</td> <td> 56 </td></tr>
        <tr><td>张学友</td>  <td>男</td> <td> 58 </td></tr>
        <tr><td>郭富城</td>  <td>男</td> <td> 51 </td></tr>
        <tr><td>黎明</td>  <td>男</td> <td> 57 </td></tr>
    </table>
</body>
</html>
```



### 1.4表格属性(了解)

表格标签这部分属性我们实际开发我们不常用，后面都是通过CSS来设置的

所以在HTML里学这部分内容主要目的有两个:

1. 记住这些英语单词，后悔CSS会使用
2. 直观感受表格的外观形态

![](https://xingqiu-tuchuang-1256524210.cos.ap-shanghai.myqcloud.com/1892/Typora20221121141922.png)

修改1.3的代码：

```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title>表格属性</title>
</head>
<body>
    <!-- 这些属性要写到表格标签table 里面去 -->
    <table align="center" border="1" cellpadding="0" cellspacing="0" width="500" height="249">
        <tr><th>姓名</th>  <th>性别</th> <th> 年龄 </th></tr>
        <tr><td>刘德华</td>  <td>男</td> <td> 56 </td></tr>
        <tr><td>张学友</td>  <td>男</td> <td> 58 </td></tr>
        <tr><td>郭富城</td>  <td>男</td> <td> 51 </td></tr>
        <tr><td>黎明</td>  <td>男</td> <td> 57 </td></tr>
    </table>
</body>
</html>
```

### 1.5 案例：小说排行榜

完成下图的网页：

![](https://xingqiu-tuchuang-1256524210.cos.ap-shanghai.myqcloud.com/1892/Typora20221121142419.png) 

```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title>今日小说排行榜</title>
</head>
<body>
    <table align="center" width="500" height="249" border="1" cellspacing="0">
    <thead>
        <tr>
            <th>排名</th>
            <th>关键词</th>
            <th>趋势</th>
            <th>进入搜索</th>
            <th>最近七日</th>
            <th>相关链接</th>
        </tr>
    </thead>
    <tbody>
        <tr>
            <td>1</td>
            <td>鬼吹灯</td>
            <td><img src="down.jpg"></td>
            <td>456</td>
            <td>123</td>
            <td> <a href="#">贴吧</a> <a href="#">图片</a> <a href="#">百科</a> </td>
        </tr>

        <tr>
                <td>1</td>
                <td>鬼吹灯</td>
                <td><img src="down.jpg"></td>
                <td>456</td>
                <td>123</td>
                <td> <a href="#">贴吧</a> <a href="#">图片</a> <a href="#">百科</a> </td>
        </tr>
        <tr>
                <td>3</td>
                <td>西游记</td>
                <td><img src="up.jpg"></td>
                <td>456</td>
                <td>123</td>
                <td> <a href="#">贴吧</a> <a href="#">图片</a> <a href="#">百科</a> </td>
        </tr>
        <tr>
                <td>1</td>
                <td>鬼吹灯</td>
                <td><img src="down.jpg"></td>
                <td>456</td>
                <td>123</td>
                <td> <a href="#">贴吧</a> <a href="#">图片</a> <a href="#">百科</a> </td>
        </tr>
        <tr>
                <td>1</td>
                <td>鬼吹灯</td>
                <td><img src="down.jpg"></td>
                <td>456</td>
                <td>123</td>
                <td> <a href="#">贴吧</a> <a href="#">图片</a> <a href="#">百科</a> </td>
        </tr>
        <tr>
                <td>1</td>
                <td>鬼吹灯</td>
                <td><img src="down.jpg"></td>
                <td>456</td>
                <td>123</td>
                <td> <a href="#">贴吧</a> <a href="#">图片</a> <a href="#">百科</a> </td>
        </tr>
    </tbody>           
    </table>
</body>
</html>
```

### 1.6 表格结构标签

使用场景：因为表格可能很长，为了更好的表示表格的语义，可以将表格分为表格头部和表格主体两大部分。

`在表格标签中，分别用<thead>标签表示表格的头部区域，用<tbody>标签 表示表格的主题区域` 这样可以更好的分清表格结构。

总结一下：

1. `<thead></thead>：用于定义表格的头部。<thead>内部必须拥有<tr>标签，一般是位于第一行。`
2. `<tbody></tbody>：用于定义表格的主体，主要用于放数据本体。`
3. 以上标签都是放在`<table></table>`标签中的。

### 1.7 合并单元格

特殊情况下，可以把多个单元格合并为一个单元格，这里会最简单的合并单元格即可.

如图：

#### ![](https://xingqiu-tuchuang-1256524210.cos.ap-shanghai.myqcloud.com/1892/Typora20221121143222.png)1.7.1合并单元格的方式

- 跨行合并：rowspan="合并单元格的个数"
- 跨列合并：colspan="合并单元格的个数"

![](https://xingqiu-tuchuang-1256524210.cos.ap-shanghai.myqcloud.com/1892/Typora20221121143543.png)

#### 1.7.2目标单元格（写合并代码）

- 跨行：最上侧单元格为目标单元格，写合并代码
- 跨列：最左侧单元格为目标单元格，写合并代码

#### 1.7.3合并单元格的步骤

1. 确定是跨行还是跨列合并
2. 找到目标单元格，写上合并方式=合并单元格数量。比如：`<td colspan="2"></td>`
3. 删除多余的单元格

```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title>合并单元格</title>
</head>
<body>
    <table width="500" height="249" border="1" cellspacing="0">
        <tr>
            <td></td>
            <td colspan="2"></td>
<!--            <td></td>-->
        </tr>
        <tr>
            <td rowspan="2"></td>
            <td></td>
            <td></td>
        </tr>
        <tr>
<!--        <td></td>-->
            <td></td>
            <td></td>
        </tr>
    
    </table>
</body>
</html>
```

### 1.8 表格总结

表格学习整体可以分为三大部分：

1. 表格的相关标签
2. 表格的相关属性
3. 合并单元格

## 列表标签

### 2.1 列表的主要作用

  表格是用来显示数据的，那么列表就是用来布局的。

列表最大的特点就是整洁、整齐、有序，他作为布局会更加自由和方便

根据使用场景不同，列表可以分为三大类：无序列表、有序列表、和自定义列表

### 2.2 无序列表(重要)

`<ul> 标签表示HTML页面中项目的无序列表，一般会以项目符号呈限列表项，而列表项使用<li>标签定义`

无序列表的基本语法格式如下：

```html
<ul>
    <li>列表项1</li>
    <li>列表项2</li>
    <li>列表项3</li>
    ...
<ul>
```

1. 无序列表的各个列表项之间没有顺序级别之分，是并列的
2. `<ul></ul>中只能嵌套<li></li>，直接在<ul></ul>标签中输入其他标签或者文字的做法是不被允许的。`
3. <li></li>之间相当于一个容器，可以容纳所有的元素。
4. 无序列表会带有自己的样式属性，但在实际使用中，我们会使用CSS来设置。

```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title>无序列表</title>
</head>
<body>
    <h4>您喜欢的食物?</h4>
    <ul>
        <li>榴莲</li>
        <li>臭豆腐</li>
        <li>鲱鱼罐头</li>
        <li>
            <p>123</p>
        </li>
    </ul>
</body>
</html>
```



### 2.3 有序列表（理解）

有序列表即为有排列顺序的列表，其各个列表项会按照一定的顺序排列定义。

在HTML标签中，`<ol>标签用于定义有序列表，列表排序以数字来显示，并且使用<li>标签来定义列表项`

有序列表的基本语法格式如下：

```html
<ol>
    <li>列表项1</li>
    <li>列表项2</li>
    <li>列表项3</li>
    ...
</ol>
```

1. `<ol></ol>中只能嵌套<li></li>，直接在<ol></ol>标签中输入其他标签或者文字的做法是不被允许的。`
2. <li></li>之间相当于一个容器，可以容纳所有的元素。
3. 有序列表会带有自己的样式属性，但在实际使用中，我们会使用CSS来设置。

### 2.4 自定义列表(重点)

自定义列表的使用场景：

自定义列表常用语对术语或者名词进行解释和描述，定义列表的列表项前没有任何项目符号。

在HTML标签中，`<dl>标签用于定义描述列表（或者定义列表），该标签会与<dt>（定义项目/名字）和<dd>(描述每一个项目/名字)一起使用`

其基本语法如下：

```html
<dl>
    <dt>名词1</dt>
    <dd>名词1的解释1</dd>
    <dd>名词1的解释2</dd>
    <dd>名词1的解释3</dd>
	...
</dl>
```

```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title>自定义列表(重点)</title>
</head>
<body>
    <dl>
        <dt>关注我们</dt>
        <dd>新浪微博</dd>
        <dd>官方微信</dd>
        <dd>联系我们</dd>
        <dt>关注我们</dt>
        <dd>新浪微博</dd>
        <dd>官方微信</dd>
        <dd>联系我们</dd>
    </dl>
</body>
</html>
```

1. `<dl></dl>里面只能包含<dt>和<dd>`
2. `<dt>和<dd>个数没有限制，经常是1个<dt>对应多个<dd>`

类似于：

![](https://xingqiu-tuchuang-1256524210.cos.ap-shanghai.myqcloud.com/1892/Typora20221121193936.png)

### 2.5 列表总结

 ![](https://xingqiu-tuchuang-1256524210.cos.ap-shanghai.myqcloud.com/1892/Typora20221121194205.png)

## 表单标签

### 3.1 为什么需要表单？

浏览一下表单：

https://reg.jiayuan.com/signup/fillbasic.php?

使用表单的目的就是==收集用户的信息==

### 3.2 表单的组成

在HTML中，一个完整的表单通常由`表单域、表单控件（表单元素）和提示信息3个部分构成.`

![](https://xingqiu-tuchuang-1256524210.cos.ap-shanghai.myqcloud.com/1892/Typora20221121195505.png)

### 3.3 表单域

表单域是一个包含表单元素的区域

在HTML标签中，<form>标签用于定义表单域，以实现用户信息的采集和传递。

<form>会把他范围内的表单元素信息提交给服务器 


它的语法规范如下：

```html
<form action="url地址" method="提交方式" name="表单域名称">
    各种表单元素控件
</form>
```

![](https://xingqiu-tuchuang-1256524210.cos.ap-shanghai.myqcloud.com/1892/Typora20221121200037.png)

### 3.4 表单控件（表单元素）

在表单域中可以定义各种表单元素，这些表单元素就是允许用户在表单中输入或者选择的内容控件。

#### 3.4.1 <input> 表单元素

在英文单词中，input 就是输入的意思，而在表单元素中<input>标签用于收集用户的信息

 在<input>标签中，包含一个type属性，根据不同的type属性值，输入字段拥有很多形式（可以是文本字段、复选框、掩码后的文本控件，单选按钮、按钮等）

其语法格式为：

```html
<input type="属性值" />
```

- <input /> 标签为单标签
- type属性设置不同的属性值用来指定不同的控件类型

![](https://xingqiu-tuchuang-1256524210.cos.ap-shanghai.myqcloud.com/1892/Typora20221121201312.png)

![](https://xingqiu-tuchuang-1256524210.cos.ap-shanghai.myqcloud.com/1892/Typora20221121201953.png)

1. Name 和value 是每个表单元素都有的属性值，主要给后台人员使用
2. name 表单元素的名字，要求 单选按钮和复选框要有相同的name值
3. checked属性主要是针对单选按钮和复选框，主要作用一打开页面，就要可以默认选中某个表单元素
4. maxlength 是用户可以在表单元素输入的最大字符数，一般较少使用

```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title>input 表单元素</title>
</head>
<body>
    <form action="xxx.php" method="get">
         <!-- text 文本框 用户可以里面输入任何文字 -->
        用户名: <input type="text" name="username" value="请输入用户名" maxlength="6">   <br> 
        <!-- password 密码框 用户看不见输入的密码 -->
        密码: <input type="password" name="pwd" >  <br> 
        <!-- radio 单选按钮  可以实现多选一 -->
        <!-- name 是表单元素名字 这里性别单选按钮必须有相同的名字name 才可以实现多选1 -->
        <!-- 单选按钮和复选框可以设置checked 属性, 当页面打开的时候就可以默认选中这个按钮 -->
        性别: 男 <input type="radio" name="sex" value="男"> 女  <input type="radio" name="sex" value="女" checked="checked"> 人妖   <input type="radio" name="sex" value="人妖">   <br> 
        <!-- checkbox 复选框  可以实现多选 -->
        爱好: 吃饭 <input type="checkbox" name="hobby" value="吃饭"> 睡觉 <input type="checkbox" name="hobby">  打豆豆 <input type="checkbox" name="hobby" checked="checked"> 
        <br> 
        <!-- 点击了提交按钮,可以把 表单域 form 里面的表单元素 里面的值 提交给后台服务器 -->
        <input type="submit" value="免费注册">
        <!-- 重置按钮可以还原表单元素初始的默认状态 -->
        <input type="reset" value="重新填写">
        <!-- 普通按钮 button  后期结合js 搭配使用-->
        <input type="button" value="获取短信验证码"> <br>
        <!-- 文件域 使用场景 上传文件使用的 -->
        上传头像:  <input type="file" >
    </form>
</body>
</html>
```

