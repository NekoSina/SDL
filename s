issue#1": crashing with error **program has exited with code 0 (0x00000000).**
Neko: "hey
    i am currently trying to install SDL_Image but i have been running into a problem like this:
    https://stackoverflow.com/questions/51774904/sdl-image-library-crashes-programs-or-makes-them-misbehave
    so i have linked SDL_image like any other library. 
    there is no problem until i include it. my program crashes after i include SDl_image.h .
    the thread above recommends me to add libpng16-16.dll and zlib1.dll to my distributed folder. 
    i have tried to link them like any other library and nothing happens.
    i also added them to my bin folder in my compiler path but still no luck.
    what is this error and how can i solve it?"
answers: "
    1)use ldd- 
    2)use SDL_Image 2.0.4 instead of 2.0.5
    "
answere that worked: 2
the issue is with **sdl_rwclose could not be located** which is supposed to be known bug for SDL_image 2.0.5
issue#2": invalid renderer
answer: "this usually happens when the window is null or nullptr. in my case it happened because that the
star class is a child of window. and i get 2 windows when even a default constructor runs. i made the window 
renderer static so there will be only one instance of them."
issue#3:"static member undefined refernce"
issue#4:"image flicker when try to render multiple things in different places."
鑓塵幗膂蓿f寥寢膃暠瘉甅甃槊槎f碣綮瘋聟碯颱亦尓㍍i:i:i;;:;:: : :
澣幗嶌塹傴嫩榛畝皋i袍耘蚌紕欒儼巓襴踟篁f罵f亦尓㍍i:i:i;;:;:: : :
漲蔭甃縟諛f麭窶膩I嶮薤篝爰曷樔黎㌢´　　｀ⅷ踟亦尓㍍i:i:i;;:;:: : :
蔕漓滿f蕓蟇踴f歙艇艀裲f睚鳫巓襴骸　　　　  贒憊亦尓㍍i:i:i;;:;:: : :
榊甃齊爰f懈橈燗殪幢緻I翰儂樔黎夢'”　 　 ,ｨ傾篩縒亦尓㍍i:i:i;;:;:: : :
箋聚蜚壊劑薯i暹盥皋袍i耘蚌紕偸′　　　 雫寬I爰曷f亦尓㍍i:i:i;;:;:: : :
銕颱麼寰篝螂徑悗f篝嚠篩i縒縡齢　　 　 　 Ⅷ辨f篝I鋗f亦尓㍍i:i:i;;:; : : .
碯聟f綴麼辨螢f璟輯駲f迯瓲i軌帶′　　　　　`守I厖孩f奎亦尓㍍i:i:i;;:;:: : : .
綮誣撒f曷磔瑩德f幢儂儼巓襴緲′　 　 　 　 　 `守枢i磬廛i亦尓㍍i:i:i;;:;:: : : .
慫寫廠徑悗緞f篝嚠篩I縒縡夢'´　　　 　 　 　 　 　 `守峽f徑悗f亦尓㍍i:i:i;;:;:: : : .
廛僵I數畝篥I熾龍蚌紕襴緲′　　　　　　　　　　　　　‘守畝皋弊i劍亦尓㍍i:i:i;;:;:: : : .
瘧i槲瑩f枢篝磬曷f瓲軌揄′　　　　　　　　　　　　　,gf毯綴徑悗嚠迩忙亦尓㍍i:i:i;;:;::
襴罩硼f艇艀裲睚襴鑿緲'　　　　　　　　　　 　     　 奪寔f厦傀揵猯i爾迩忙亦尓㍍i:i:
椈棘斐犀耋絎絲絨緲′　　　　　　 　 　 　 　 　 　 　 ”'罨悳萪f蒂渹幇f廏迩忙i亦尓㍍
潁樗I瘧德幢i儂巓緲′　　　　　　 　 　 　 　 　 　 r㎡℡〟”'罨椁裂滅楔滄愼愰迩忙亦
翦i磅艘溲I搦儼巓登漲蔭甃縟諛f麭　 　 緲 g　 　 甯體i爺ゎ｡, ”'罨琥焜毳徭i嵬塰慍絲
枢篝磬f曷迯i瓲軌f襴暹 甯幗緲 ,fi'　　 緲',纜｡　　贒i綟碕碚爺ゎ｡ ”'罨皴發傲亂I黹靱
緞愾慊嵬嵯欒儼巓襴驫 霤I緲 ,緲　　 ＂,纜穐　　甯絛跨飩i髢馳爺ゎ｡`'等誄I筴碌I畷
罩硼I蒻筵硺艇艀i裲睚亀 篳'’,緲　　g亀 Ⅶil齢　　贒罩硼i艇艀裲睚鳫爺靠飭蛸I裘裔
椈f棘跫跪I衙絎絲絨i爺頬i鞏褂 　 ,緲i亀 Ⅶ靈,　　甯傅喩I揵揚惹屡絎痙棏敞裔筴敢
頬i鞏褂f跫詹雋髢i曷迯瓲軌霤 　 ,緲蔭穐 Ⅶ穐 　 讎椈i棘貅f斐犀耋f絎絲觚f覃黹黍
襴蔽戮貲艀舅I肅肄肆槿f蝓肄 　 緲$慚I穐,疊穐　 甯萪碾f鋗輜靠f誹臧鋩f褂跫詹i雋
鋐篆f瘧蜑筴裔罩罧緜孵蓼筴　 i鷆嫩槞i歉皸鱚　 冑縡諛諺彙溘嵳勠尠錣綴麼辨螢