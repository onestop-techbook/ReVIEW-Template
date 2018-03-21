#@# -*- coding: utf-8 -*-

={ReviewWin7} Re:VIEWのインストール（Windows 7編）

この章では、Windows 7ユーザーに向けて比較的簡単なRe:VIEWのインストール方法を紹介します。（Text：暗黙の型宣言）

Re:VIEWのインストール方法などを調べると、Dockerを使うのが簡単だと書いてあったりします。
Techboosterさんの書籍@<fn>{TECHBOOK_WITH_REVIEW}やQiitaを調べても、それ以外の方法はあまり出てきません。
かろうじてCygwinを使う方法が出てくるぐらいでしょうか。
WindowsだとそもそもDockerを使えるようにすること自体が大変です。
Cygwinのインストールにも非常に長い時間がかかります。
Windows 10であれば、Windows Subsystem for Linuxを使う方法もありますが、Windows 7ユーザーは
これらの情報からRe:VIEW環境を構築することは一仕事です。

Windowsユーザー（特にWindows 8より前のWindowsユーザー）は、PCにプログラムをインストールする時、インストーラーをインターネットからダウンロードして、
それらを実行してインストーラーの指示に沿って作業していくことに慣れていると思います。
この章で紹介するのは、たった二つのインストーラーをダウンロードしてインストールするという
Windowsユーザーが慣れているやり方です。
第７章で説明していますが、Re:VIEWはRubyと呼ばれるブログラムを介して原稿を処理します。
そして、PDFを出力する際にTeXと呼ばれる組版ソフトを使っています。
つまり、TeXとRubyとRe:VIEWをインストールする必要があるわけです。
最初にTeX、次にRubyをインストールして、最後にRubyを使ってRe:VIEWをインストールしていきます。
TeXとRubyのどちらを先にインストールしても問題ありませんが、Re:VIEWのインストールにはRubyが必要です。

//footnote[TECHBOOK_WITH_REVIEW][Techbooster編著、技術書を書こう～初めてのRe:VIEW～、2015]

=={ReviewWin7-Tex} TeXのインストール

TeXと呼ばれるソフトには、実は色々なバリエーションがあります。
オリジナルのTeXに色々な拡張が加えられているからです。
Windowsで使えるTeXとしては、W32TeXやTeXLiveがあります。
ここでは、W32TeXを使った手順を紹介します。
なぜかって？それはこの章の著者が元々W32TeXを使っていたからです:-)。

==={ReviewWin7-TeXDownload} インストーラーのダウンロード

あべのりさんのページ@<fn>{TEX3}から、TeXインストーラ3をダウンロードしましょう。
ページ下部に、執筆時点での最新版（0.85r3）へのリンクが張られているので、
リンクをクリックしてzipファイルをダウンロードしましょう。

昔話になりますが、昔はWindowsにTeXをインストールするのは一仕事でした。
このインストーラーが公開されてから、インストールがとても楽になりました。

//footnote[TEX3][@<href>{http://www.math.sci.hokudai.ac.jp/~abenori/soft/abtexinst.html}]

==={ReviewWin7-TeXInst} インストールの実行

ダウンロードしたらzipファイルを解凍しましょう。
解凍されたabtexinstフォルダの中にあるabtexinst.exeがインストーラーの本体です。
abtexinst.exeをダブルクリックするとインストーラーが起動して@<img>{ReviewWin7_texinst_1_start}に示す画面が現れるので、順を追ってインストールしていきましょう。
//image[ReviewWin7_texinst_extract][W32TeXインストーラーの解凍][scale=0.6]{
//}
//image[ReviewWin7_texinst_exe][W32TeXインストーラーの実行ファイル][scale=0.6]{
//}
//image[ReviewWin7_texinst_1_start][W32TeXインストーラーの実行画面][scale=0.45]{
//}

[次へ（N）>]ボタンを押すと、TeXをインストールするフォルダや、TeXをダウンロードするサイトを設定する画面が現れます（@<img>{ReviewWin7_texinst_2_1_path_org}）。
インストール作業をしているPCでインターネットが見られるのであれば、基本的には何も変更する必要はありません。
もしインストール作業中にファイルがダウンロードできないというエラーが出た場合は、
ここのURLを別のURLに変更してみてください。
//image[ReviewWin7_texinst_2_1_path_org][インストール先とインストール用ファイルのURLの設定][scale=0.45]{
//}
この章の著者の一人は、インストールするフォルダの名前をw32texからTeXに変更しています。
C:\TeX\と書かれている箇所が登場したら、ここを皆さんの設定したフォルダの名前に置き換えながら読んでください。
Windows 7のユーザー設定によっては、Cドライブ直下にフォルダを作れないことがあります。
その場合はインストールするフォルダを変更してください。
//image[ReviewWin7_texinst_2_2_path_changed][著者の設定][scale=0.45]{
//}

[次へ（N）>]ボタンを押すと、dviout, Ghostscript, GSviewのインストール設定の画面が現れます（@<img>{ReviewWin7_texinst_3_url}）。
ここも特に何も変更しなくてもかまいません。
もしインストール作業中にファイルがダウンロードできないというエラーが出た場合は、
これらのURLを別のURLに変更してみてください。
dvioutはTeXを直接使って原稿を編集したときに仕上がりを確認するためのソフトです。
GhostscriptやGSviewは図を埋め込むためにTeXから使われるだけです。
Re:VIEWで原稿を書くのであれば、これらのソフトを立ち上げることはありません。
//image[ReviewWin7_texinst_3_url][dviout, Ghostscript, GSviewのダウンロードURLの設定][scale=0.45]{
//}

[次へ（N）>]ボタンを押すと、TeXWorksの設定をする画面（@<img>{ReviewWin7_texinst_4_texwork}）が現れますが、
TeXWorksはインストールしませんので、このまま[次へ（N）>]を押してください。
//image[ReviewWin7_texinst_4_texwork][その他のソフトのインストール設定][scale=0.45]{
//}

ダウンロードするファイルを選択する画面（@<img>{ReviewWin7_texinst_5_confirm}）に進みます。
これも変更する必要はありません。インストーラーが必要なファイルを見繕ってくれています。
//image[ReviewWin7_texinst_5_confirm][インストールするファイルの一覧][scale=0.45]{
//}

[次へ（N）>]ボタンで先に進むと、TeX以外にインストールするソフトウェアを選択する画面（@<img>{ReviewWin7_texinst_6_others}）に遷移します。
TeXWorksはインストールしないので、チェックを外して次へ進みましょう。
//image[ReviewWin7_texinst_6_others][その他のソフトのインストール][scale=0.45]{
//}

ファイルのダウンロードが始まります。
回線が速いと5分くらいで全てダウンロードできますが、遅い場合にはしばらくかかる可能性があります。
ダウンロードを待っている間に、この本を読み進めて予習をしておくとよいかもしれません。
全てのファイルが無事ダウンロードされると、TeXのインストールが始まります。
ここまでくると失敗することはないと思います。
//image[ReviewWin7_texinst_7_download][インストール用ファイルのダウンロード][scale=0.4]{
//}
//image[ReviewWin7_texinst_8_progress][インストール進行中][scale=0.4]{
//}

==={ReviewWin7-TexOthers} Ghostscritp, GSview, dvioutのインストール

TeXのインストールが終わるとGhostscriptのインストールが始まります（@<img>{ReviewWin7_gsinst_1_start}）。
[Next>]を押してライセンス条項（@<img>{ReviewWin7_gsinst_2_license}）を読み、同意できるなら[I Agree]を押し、
インストールするフォルダを確認して[Install]を押す（@<img>{ReviewWin7_gsinst_3_path}）とインストール完了画面が表示されます（@<img>{ReviewWin7_gsinst_4_finish}）。
Show Readmeのチェックを外して[Finish]ボタンを押すとGhostscriptのインストールが完了します。
//image[ReviewWin7_gsinst_1_start][インストーラーの起動（Ghostscript）][scale=0.45]{
//}
//image[ReviewWin7_gsinst_2_license][ライセンスの確認（Ghostscript）][scale=0.45]{
//}
//image[ReviewWin7_gsinst_3_path][インストール先の設定（Ghostscript）][scale=0.45]{
//}
//image[ReviewWin7_gsinst_4_finish][インストール完了（Ghostscript）][scale=0.45]{
//}

つづいてGSviewのインストールが始まります（@<img>{ReviewWin7_gsviewinst_1_start}）。
[Setup]ボタンを押すと言語の選択画面（@<img>{ReviewWin7_gsviewinst_2_lang}）になりますが、日本語はないので[English]を選びます。
以降は特に変更する必要はないので、ひたすら[Next]ボタンを押していきます（@<img>{ReviewWin7_gsviewinst_3_check}-@<img>{ReviewWin7_gsviewinst_7_startmenu}）。
最後に現れる画面（@<img>{ReviewWin7_gsviewinst_8_finish}）で[Finish]を押すとインストールが進み、Instrall successfulとだけ表示された画面が現れたら、
[Exit]ボタン押してインストールを終了します。
//image[ReviewWin7_gsviewinst_1_start][インストーラーの起動（GSView）][scale=0.45]{
//}
//image[ReviewWin7_gsviewinst_2_lang][インストールする言語の選択（GSView）][scale=0.45]{
//}
//image[ReviewWin7_gsviewinst_3_check][確認画面（GSView）][scale=0.45]{
//}
//image[ReviewWin7_gsviewinst_4_license][ライセンスの確認（GSView）][scale=0.45]{
//}
//image[ReviewWin7_gsviewinst_5_pref][ファイル拡張子の関連付け（GSView）][scale=0.45]{
//}
//image[ReviewWin7_gsviewinst_6_path][インストール先の設定（GSView）][scale=0.45]{
//}
//image[ReviewWin7_gsviewinst_7_startmenu][スタートメニューへのフォルダの登録（GSView）][scale=0.45]{
//}
//image[ReviewWin7_gsviewinst_8_finish][インストール完了（GSView）][scale=0.45]{
//}

最後にdvioutのインストールをしますが、これは現れた画面でインストールするフォルダを指定して[OK]を押すだけです（@<img>{ReviewWin7_dvioutinst}）。
通常は表示されているフォルダから変更する必要はありません。
//image[ReviewWin7_dvioutinst][インストーラーの起動（dviout）][scale=0.45]{
//}

全てのインストールが完了すると、TeXのインストーラーの画面（@<img>{ReviewWin7_texinst_9_finish}）に戻ってきます。
完了ボタンを押すと@<img>{ReviewWin7_texinst_10_reboot}のダイアログが現れて再起動するか問われるので、再起動しましょう。
プログラムをインストールしてPCを再起動している間、
次にPCが起動するとプログラムが使えるようになっているんだと思うとワクワクしませんか？
この時間がWindowsを使う醍醐味だと思うのです。
//image[ReviewWin7_texinst_9_finish][インストール完了画面][scale=0.45]{
//}
//image[ReviewWin7_texinst_10_reboot][Windowsの再起動][scale=0.4]{
//}

==={ReviewWin7-TeXConfirm} 動作確認

PCが起動したら、TeXが使えるようになっているか確認しましょう。
TeXをインストールしたフォルダ（C:\TeX、皆さんがフォルダを変更していればそのフォルダ）を開き、
@<img>{ReviewWin7_texinst_11_cmd}に示すようにアドレスバーにcmdと入力してエンターキーを押すと、コマンドプロンプトが起動します。
//image[ReviewWin7_texinst_11_cmd][コマンドプロンプトの起動][scale=0.5]{
//}
//noindent
起動したコマンドプロンプト内でplatexと打ってエンターを押してみましょう。
//cmd{
> platex
//}
//noindent
次のようなメッセージが表示されればインストール成功です。
//cmd{
This is e-pTeX, Version 3.14159265-p3.7.1-161114-2.6 (sjis) (TeX Live 2016/W32TeX) (preloaded format=platex)
 restricted \write18 enabled.
**
//}
//noindent
@<tt>{Ctrl+C}を入力して@<tt>{platex}を終了し、右上の[×]ボタンでコマンドプロンプトを終了してください。
実際の画面は@<img>{ReviewWin7_texinst_12_confirm}のような感じです。
//image[ReviewWin7_texinst_12_confirm][platexの動作確認][scale=0.75]{
//}

あまり想像したくありませんが、もし、「@<tt>{'platex'}は、内部コマンドまたは外部コマンド、操作可能なプログラムまたはバッチ ファイルとして認識されていません。」
と表示されたときは、何かがうまくいっていません。
インストール中にエラーが出なければ、Pathの設定だと考えられます。
原因について検討が付かない場合はインストールをやり直すか、パソコンの詳しい人に酒でもおごってみてもらいましょう。

=={ReviewWin7-Ruby} Rubyのインストール

==={ReviewWin7-RubyDownload} インストーラーのダウンロード

無事にTeXがインストールできたら、次にRubyをインストールします。
WindowsにRubyをインストールするには、RubyInstaller for Windowsが手軽です。
RubyInstallerのサイト@<fn>{RUBYFORWIN}にアクセスして、ページ上部にあるDownloadというリンクをクリックし、
一覧で表示されているインストーラーから一つ選んでダウンロードします。
この記事を書いているときは、最新版である@<tt>{Ruby 2.4.2-2 (x64)}をダウンロードして利用しました。
//image[ReviewWin7_rubyinst_exe][Rubyのインストーラー][scale=0.6]{
//}
//footnote[RUBYFORWIN][@<href>{https://rubyinstaller.org}]

==={ReviewWin7-RubyInst} インストール

ダウンロードしたインストーラーは実行形式（.exeファイル）なので、
ダブルクリックするとインストールが始まります（@<img>{ReviewWin7_rubyinst_1_license}）。
ライセンス条項を読んで同意するなら I accept the Licenseを選択して[Next]ボタンを押し、
次の画面でインストールするフォルダの設定を行います（@<img>{ReviewWin7_rubyinst_2_path}）。
//image[ReviewWin7_rubyinst_1_license][ライセンスの確認（Ruby）][scale=0.45]{
//}
//image[ReviewWin7_rubyinst_2_path][インストール先の設定（Ruby）][scale=0.45]{
//}
ここでは何も変更せず、[Install]ボタンを押してインストールしました。
インストールの進行に応じてプログレスバーが伸びていきます（@<img>{ReviewWin7_rubyinst_3_progress}）。
//image[ReviewWin7_rubyinst_3_progress][インストールの進行（Ruby）][scale=0.45]{
//}
インストールが終わると（@<img>{ReviewWin7_rubyinst_4_finish}）のような画面に切り替わりますが、
Run 'risk install' ~と書いてあるチェックを外して[Finish]ボタンを押します。
これでRubyのインストールは完了です。
//image[ReviewWin7_rubyinst_4_finish][インストール完了（Ruby）][scale=0.45]{
//}

==={ReviewWin7-RubyConfirm} 動作確認

Rubyはコマンドプロンプトから呼び出します。
@<img>{ReviewWin7_rubyinst_5_startmenu}のようにスタートメニューからすべてのプログラムを展開し、Ruby 2.4.2 ~と書いてあるフォルダを開き、
Start Command Prompt with Rubyを実行します（@<img>{ReviewWin7_rubyinst_6_prompt}）。
//image[ReviewWin7_rubyinst_5_startmenu][スタートメニューからRubyを起動][scale=0.45]{
//}
//image[ReviewWin7_rubyinst_6_prompt][Rubyが有効なコマンドプロンプト][scale=0.75]{
//}
//noindent
起動したコマンドプロンプトで、次のコマンドを実行してRubyのバージョンを表示してみましょう。
//cmd{
> ruby -v
//}
//noindent
次のようにRubyのバージョンが表示@<fn>{RUBYVER}されれば、インストール成功です。
//cmd{
ruby 2.4.2p198 (2017-09-14 revision 59899) [x64-mingw32]
//}
//noindent
実際の画面は@<img>{ReviewWin7_rubyinst_7_confirm}のような感じです。ただし、作業フォルダを@<tt>{D:\Workspace}に移動しました。
//image[ReviewWin7_rubyinst_7_confirm][Rubyのバージョンの確認][scale=0.75]{
//}

このままの勢いでRe:VIEWもインストールしてしまいましょう。
//footnote[RUBYVER][インストールしたバージョンによって表示は変わります。]

=={ReviewWin7-ReView} Re:VIEWのインストール

Re:VIEWは、Rubyを使ってコマンドからインストールします。
Start Command Prompt with Rubyを開いた状態で次のコマンドを実行します。
//cmd{
> gem install review
//}
//noindent
@<img>{ReviewWin7_reviewinst}のような画面が表示されて、Re:VIEWがインストールされます。
これだけでインストールは終わりです。
簡単だったでしょ？
//image[ReviewWin7_reviewinst][Re:VIEWのインストール][scale=0.75]{
//}

Re:VIEWの動作確認をしながら、PDFを出力するための手順を説明します。
Re:VIEWの原稿を作成するためには、@<tt>{review-init}を実行します。
//cmd{
> review-init reviewSample
//}
//noindent
ここでは、reviewSampleという名前の原稿を作成しています。
実行して何も表示されなければ、reviewSampleというフォルダと共に、その中に原稿のサンプルが作られます。
@<img>{ReviewWin7_pdfmake_1_init}は原稿サンプルを構成するファイル群です。
//image[ReviewWin7_pdfmake_1_init][Re:VIEWによって作られた原稿のひな型][scale=0.5]{
//}

この原稿からPDFを作りましょう。
PDFを作るには、先ほどのreviewSampleに移動して
//cmd{
> review-pdfmaker config.yml
//}
//noindent
を実行します。
コマンドプロンプト内でフォルダの移動ができないという方は、
reviewSampleというフォルダを開き、
アドレスバーにcmdと入力してコマンドプロンプトを開き、
起動したコマンドプロンプトで次のコマンドを実行してください。
//cmd{
> C:\Ruby24-x64\bin\setrbvars.cmd
//}
//noindent
@<tt>{Ruby24-x64}はRubyをインストールしたフォルダなので、適宜読み替えてください。
コマンドプロンプトはファイル名を補完してくれるので、C:\Ruまで入力してTabキーを押すと、C:\Ruby24-x64が候補として表示されます。
そのまま\bを入力してTabキー、\sを入力してTabキーと順次入力していくことで、最小のキー入力でコマンドを実行できます。
後は前の説明に沿って@<tt>{review-pdfmaker}を実行してください。
途中までは順調に進んでいきます（@<img>{ReviewWin7_pdfmake_2_progress}）が、book.dvi->book.pdfとなっている直後に終了し、PDFが作られません（@<img>{ReviewWin7_pdfmake_3_error}）@<fn>{FONTERROR}。
//image[ReviewWin7_pdfmake_2_progress][review-pdfmakerによる処理の実行画面][scale=0.75]{
//}
//image[ReviewWin7_pdfmake_3_error][PDF作成時のエラーメッセージ][scale=0.75]{
//}

これは、Re:VIEWの原稿がTeX形式に変換されてdviファイルが作られ、それがPDFに変換されるという一連の作業の中で、
dviファイルからPDFファイルに変換する途中で問題が発生していることを示しています。
ヒラギノフォントを使おうとして、ヒラギノフォントが存在しないので
エラーが発生しているという状況です。

ヒラギノフォントを買えば解決するかもしれませんが、試していないのでわかりません。
ヒラギノフォントを使わずに、Windowsに最初から用意されているMSゴシックやMS明朝を使うように設定をします。
具体的には、dviをPDFに変換するプログラムのオプションをconfig.ymlに記述します。
config.ymlを開いてdvioptionsを検索してください。
コメントアウトされたTeX関連のオプションの最後にdvioptionsが見つかるはずです。
//list[list_config_yml][config.ymlの設定]{
# LaTeX用のコマンドを指定する
# texcommand: "uplatex"
#
# LaTeXのコマンドに渡すオプションを指定する
# texoptions: null
#
# LaTeX用のdvi変換コマンドを指定する(dvipdfmx)
# dvicommand: "dvipdfmx"
#
# LaTeX用のdvi変換コマンドのオプションを指定する
# dvioptions: "-d 5"
//}
//noindent
この行をアンコメントして、オプションに
@<tt>{-f msmingoth.map}
を追加します。
//list[list_configW32TeX_yml][dvioptionsの追加]{
# LaTeX用のコマンドを指定する
# texcommand: "uplatex"
#
# LaTeXのコマンドに渡すオプションを指定する
# texoptions: null
#
# LaTeX用のdvi変換コマンドを指定する(dvipdfmx)
# dvicommand: "dvipdfmx"
#
# LaTeX用のdvi変換コマンドのオプションを指定する
dvioptions: "-f msmingoth.map -d 5"
//}
//noindent
ファイルを上書き保存するのはちょっと待ってください。
これを読んでいるあなたは、同人誌を個人で執筆しますか？
複数人で共同で執筆しますか？
個人で執筆しているのなら、上書き保存をして、もう一度@<tt>{review-pdfmaker}を実行してください。
複数人で共同編執筆している場合、全員Windowsを使っていますか？MacやLinuxを使っている共同執筆者はいませんか？
もしWindows以外のOSを使っている人がいると、このオプションが悪さをする可能性があるので、
上書き保存はせずに名前を付けて新しく保存してください。
この章の著者は@<tt>{config_W32TeX.yml}という名前を使っています@<fn>{NOTATION_GIT}。

これでもう一度コマンドプロンプトから@<tt>{review-pdfmaker}を実行しましょう。
新しく名前を付けて@<tt>{config.yml}を保存した人は、そのymlファイルを使ってください。たとえば次のようにして実行します。
//cmd{
> review-pdfmaker config_W32TeX.yml
//}
//noindent
warningは出ますが順調に変換が進んでいきます。
@<img>{ReviewWin7_pdfmake_4_result}から、reviewSampleのフォルダにbook.pdfが作られていることが確認できました。
これで無事にWindows 7でRe:VIEWを使い、PDFファイルを作成できるようになりました@<fn>{SAMPLE_PDFMAKER_RESULT}。
//image[ReviewWin7_pdfmake_4_result][作成されたPDFファイル][scale=0.5]{
//}

まとめると、Windows 7でRe:VIEW環境を構築する手順は次のとおりです。

　１．TeXをインストール

　２．Rubyをインストール

　３．RubyからRe:VIEWをインストール

　４．@<tt>{config.yml}の@<tt>{dvioptions}に@<tt>{-f msmingoth.map}を追加
//noindent
手順4は読者の環境によっては必要ない可能性もあります。
もし手順4が必要な場合、各ソフトウェアのインストールは一度だけでよいのですが、@<ttb>{config.yml}@<b>{にオプションを追記するのは原稿毎に行う必要があることに注意してください。}

//footnote[FONTERROR][もし何事もなくPDFファイルが作られていたら、以降の説明は読み飛ばして次の節に進んでも問題ありません。]
//footnote[NOTATION_GIT][Github等で管理しながら共同執筆する際の@<tt>{config_W32TeX.yml}の取り扱いを、@<hd>{ReviewWin7-gitignore}に書いているので目を通しておいてください。]
//footnote[SAMPLE_PDFMAKER_RESULT][著作権がよく分からないので、ファイルが作られたことだけを示しています。]

== Visual Studio CodeのRe:VIEW用拡張機能と編集作業

Re:VIEWが使えるようになったので、次は快適な執筆環境を整えましょう。
執筆に使うエディタには、Microsoft社が公開しているVisual Studio Code（以降、VSCode）がよいと思います。
多機能なわりに動作が軽く、しかも無料です。
Re:VIEW用の拡張機能をインストールすると、Re:VIEWの命令をハイライトしてくれたり、VSCode内ででき上がりを見れたりします。
ここでは、VSCodeにRe:VIEW用の拡張機能を導入する方法と、VSCode内からPDFを作る方法を説明します。

==={ReviewWin7-VSCodeExt} Re:VIEW用拡張機能のインストール

拡張機能のインストールは、VSCodeの拡張機能のメニューから行います。
VSCodeのウィンドウ左側を、縦に並んでいるアイコンのうち、四角に切れ込みが入ったような図柄のアイコンが拡張機能です。
（どのようなアイコン化は図を参照してください）
このアイコンをクリックすると、現在インストールされている拡張機能と、拡張機能を検索するためのテキストボックスが表示されます。
メニューバーの表示→拡張機能を選択することでも表示することができます。
検索用のテキストボックスに「review」と入力すると、いくつか候補が表示されます。
そのうちatsushieoさんのRe:VIEW（Re:VIEW language support for Visual Studio Code）をインストールします。
インストールは簡単で、緑色で塗りつぶされているインストールボタンをクリックするだけです。
//image[ReviewWin7_vscode_1_extension][Visual Studio CodeへのRe:VIEW用拡張機能の追加][scale=0.4]{
//}

==={ReviewWin7-VSCodeEdit} VSCodeによる編集作業

Re:VIEW用の拡張機能をインストールできたら、具体的な編集作業の流れを見ていきましょう。
編集するファイル（config.ymlやcatalog.yml, *.re等）を一つずつVSCodeに読み込ませてもよいのですが、
原稿はフォルダにまとまって置かれているので、フォルダをまるごとVSCodeで開き、VSCodeから編集するファイルを開くことにします。
この方が開くファイルを間違えたりしないので便利です。
ここでは、先ほどRe:VIEWの動作確認に使ったreviewSampleを使い、
編集作業からPDFの出力までを説明します。

ファイル→フォルダを開くクリックし（@<img>{ReviewWin7_vscode_2_openfolder}）、開きたいフォルダ（reviewSample）を選択します（@<img>{ReviewWin7_vscode_3_selectfolder}）。
//image[ReviewWin7_vscode_2_openfolder][Visual Studio Codeにフォルダを追加するメニュー][scale=0.6]{
//}
//image[ReviewWin7_vscode_3_selectfolder][フォルダの選択][scale=0.7]{
//}
//noindent
すると、@<img>{ReviewWin7_vscode_4_workspace}のようにVSCodeのエクスプローラー（ウィンドウ左、縦に並んでいるアイコンの一つ目）にフォルダが表示され、
中に置かれているファイルやフォルダが一覧で表示されます。
ここに見えているファイル名をシングルクリックすると、そのファイルがVSCodeに読み込まれ、編集できるようになります。
//image[ReviewWin7_vscode_4_workspace][Visual Studio Codeに読み込まれたフォルダとファイル][scale=0.6]{
//}

reviewSample.reをクリックして開き、ファイル編集します。
@<img>{ReviewWin7_vscode_5_edit}が小さくてみにくいでしょうが、テストという名前の章を一つ設けてみました。
//image[ReviewWin7_vscode_5_edit][Visual Studio Codeでのファイル編集画面][scale=0.9]{
//}
//noindent
そして、ここからがVSCodeの便利なところで、
ウィンドウ右上にあるShow previewをクリックするとウィンドウが分割され、右に仕上がりが表示されるのです（@<img>{ReviewWin7_vscode_6_preview}）。
もしRe:VIEWの命令に何か間違いがあると、仕上がりが表示されなくなり、
原稿の間違っている箇所を赤の下線で指摘してくれます。
//image[ReviewWin7_vscode_6_preview][ファイルのプレビュー][scale=0.9]{
//}

@<img>{ReviewWin7_vscode_6_preview}を見る限り間違いもないようなので、review-pdfmakerを使ってPDFを出力しましょう。
いちいちスタートメニューからコマンドプロンプトを立ち上げなくても、
表示→統合ターミナルをクリックするとウィンドウ下部にコマンドプロンプトが表示されます（@<img>{ReviewWin7_vscode_7_runterminal}、@<img>{ReviewWin7_vscode_8_terminal}）。
VSCodeで開いたフォルダがカレントディレクトリになっていますので、いちいちフォルダを移動する手間が省けます。
//image[ReviewWin7_vscode_7_runterminal][ターミナルの起動][scale=0.6]{
//}
//image[ReviewWin7_vscode_8_terminal][起動したターミナル][scale=0.6]{
//}

先ほどの説明と同じように、Rubyを使えるようにコマンドを実行します。
//cmd{
> C:\Ruby24-x64\bin\setrbvars.cmd
//}
//noindent
その後、review-pdfmakerを実行してPDFファイルを作ります。
コマンドは次のように実行するのでしたね。
//cmd{
> review-pdfmaker config.yml
//}
//image[ReviewWin7_vscode_10_pdfmaker][Re:VIEWによるpdfファイルの作成][scale=0.7]{
//}

エラーが発生しなければbook.pdfが作られます。
これもコマンドプロンプトから開くことができて、ファイル名を入力するとそのファイルが開かれます。
//cmd{
> book.pdf
//}

この章の著者の環境では、AdobeのAcrobatが起動し、book.pdfが表示されます。
PDFファイルを表示したままにしておくと、次にRe:VIEWでPDFファイルを作成するときに
PDFファイルを上書きできなくなるので、編集作業に戻る、あるいはPDFファイルを作成するタイミングで開かれているPDFファイルを閉じるようにしましょう。
残念ながら、VSCodeでPDFファイルを開こうとすると、サポートされていないというメッセージが表示されます。

//footnote[VSCODEREVIEW][先ほどはconfig_W32TeX.ymlを使っていましたが、より一般的な説明のためにconfig.ymlを使っています。先の説明に沿ってdvioptionsが追記されています。]

=={ReviewWin7-Notation} Githubを使って原稿を共同執筆するの際の注意

ここまででRe:VIEWの執筆環境を整えてきましたが、最後に2点だけ注意を述べておきます。
種類の異なる注意点ですが、両者ともGithub（だけでなくBitBucket等の分散バージョン管理システム）に関係しているのでここにまとめておきます。

==={ReviewWin7-gitignore} Windows以外のOS利用者と共同執筆する場合

Windowsを使っている場合、Re:VIEWでPDFファイルを出力する際に@<tt>{config.yml}を編集してオプションを追加する必要があることを@<hd>{ReviewWin7-ReView}で説明しました。
そして、複数人で共同執筆する場合でかつ共同執筆者にWindows以外のOSを使っている人がいると、このオプションが悪さをする可能性があること、それを回避するために名前を付けて（例えば@<tt>{config_W32TeX.yml}等）新しく保存することも説明しました。

このような状況で共同執筆の原稿を管理するためにGithubを使っていると、新しく名前を付けて保存した@<tt>{config_W32TeX.yml}がGitのリポジトリに登録され、Githubを経由して共同執筆者全員にコピーされる事になります。
@<tt>{config_W32TeX.yml}が必要なのは、

　・Windowsを使用している

　・フォントにMSゴシックとMS明朝を使う

//noindent
という条件を満たす人なので、共同執筆者全員で共有する必要はありません。
@<tt>{config_W32TeX.yml}がGitのリポジトリに登録されないように、@<tt>{.gitignore}に@<tt>{config_W32TeX.yml}を追加しておきましょう。

==={ReviewWin7-Sty} styファイルが見つからないというエラーが出る場合

これは、共同執筆環境が既に整えられているところに著者として合流すると、お目にかかる可能性のあるエラーです。
本書の共同執筆環境でも発生します。
この章を読んでRe:VIEWの執筆環境を整えることができたので、試しに本書のリポジトリをforkしてPDFファイルを作ってみようとすると、100％遭遇します@<fn>{join_project}。
その状況を想定して、どのようなエラーが出るか、どうやって対処するかを説明します。

とりあえず、本書のリポジトリをforkしてローカルにダウンロードし、PDFファイルを作るために@<tt>{review-pdfmaker}を実行してみます。
途中までは順調に進んでいき、これはうまくいきそうだという期待を持たせてくれるのですが、
次のようなエラーがでて止まってしまいます。
//cmd{
! LaTeX Error: File `seqsplit.sty' not found.

Type X to quit or <RETURN> to proceed,
or enter new name. (Default extension: sty)

Enter file name:
//}
//noindent
@<tt>{seqsplit.sty}というファイルが見つからないというエラーです。
これはWindowsやRe:VIEWに問題があるのではなく、TeXで処理をするときに使うファイルが存在しない事が原因で発生します。
そして、（Re:VIEWの対象と思われる）TeXにあまり明るくない人にはかなりわかりにくいエラーです。
ファイルがなければインターネットで探してダウンロードすればよいのですが、そこにもう一つ罠が隠れているのがこのエラーの厄介なところです。
Googleなどで@<tt>{seqsplit.sty}を検索すると、簡単にダウンロードページが見つかります@<fn>{seqsplit_url}。
ところが、そのダウンロードページからダウンロードできるファイルの一覧に、@<tt>{seqsplit.sty}は存在していません。
もったい付けても仕方ないので答えをいうと、必要なのは拡張子が@<tt>{ins}と@<tt>{dtx}のファイルです。
それらから@<tt>{seqsplit.sty}を作ります。

@<tt>{seqsplit.ins}と@<tt>{seqsplit.dtx}をダウンロードし、TeXのstyファイルが置いてあるフォルダにコピーします。
場所はTeXをインストールしたフォルダ（本章ではC:\TeX、皆さんがフォルダを変更していればそのフォルダ）以下の\share\texmf-dist\tex\latexです。
そこにseqsplitというフォルダを作り、ダウンロードした@<tt>{seqsplit.ins}と@<tt>{seqsplit.dtx}を移動してください。
フォルダ名は任意ですが、styファイルの名前と同じフォルダ名になっていることが多いので、それに倣います。
//image[ReviewWin7_sty_1][seqsplit.insとseqsplit.dtxの保存][scale=0.5]{
//}

アドレスバーにcmdと入力してコマンドプロンプトを起動し、次のコマンドを実行します。
//cmd{
> platex seqsplit.ins
//}
色々と表示されますが、フォルダに@<tt>{seqsplit.sty}が作られていることを確認できます。
//image[ReviewWin7_sty_2][platexによって作成されたseqsplit.sty][scale=0.5]{
//}

これで@<tt>{seqsplit.sty}のインストールは完了です。
もう一度、@<tt>{review-pdfmaker}を実行してみてください。
今度はエラーが出ずにPDFファイルの作成までいくはずです。

なお、他のstyファイルが存在しない場合も、ここに書いた方法と同じ手順でstyファイルをインストールすることができます。

//footnote[seqsplit_url][seqsplit.styは@<href>{https://ctan.org/tex-archive/macros/latex/contrib/seqsplit}にアーカイブされています。]
//footnote[join_project][それ以外に戸惑うこととしては、原稿管理の方針、特にディレクトリ構造が上げられます。リポジトリをforkしてローカルにダウンロードしたはよいけれども、ディレクトリ直下に原稿やconfig.ymlが見当たらない･･･なんてことも十分あり得ます。合流する際は、原稿管理の方針（特に原稿本体である.reファイルと画像ファイルの置き場所、場合によってはサンプルコードの置き場）をよく確認しましょう。ちなみに本書では、リポジトリのルート直下にあるarticlesというフォルダで原稿を管理しています．]

=={ReviewWin7_summary} この章のまとめ

この章では、Windows 7でRe:VIEW環境を構築して、Visual Studio Codeで編集してPDFを出力するところまで説明しました。
事前に情報を集めてややこしいなぁと思っていた方は、意外に簡単で拍子抜けしたのではないかと思います。
締切（とストレージ）の都合上、TeXLiveを試せなかったのは残念ですが、問題なく使えるのではないかと予想しています。
もし、本書をお読みになった方で知見をお持ちの方は、ぜひ公開してください。
これで次の技術書典のネタが一つ見つかりましたね。

====[column] Windows 7にRe:VIEW環境を構築するたった四つの方法

Windows 7にRe:VIEW環境を構築する方法は他にもあり、この手順を見つけるまでには紆余曲折がありました@<fn>{WIN10ENV}。
私が試したのは次の４通りです。


　１．インターネット上の説明に沿ってDocker for Windowsを使う方法。この方法は、仮想化環境を動かすためのVirtualBoxがVMWareと相性が悪いので使えませんでした。

　２．VMWareにLinuxをインストールしてそこにRe:VIEW環境を構築する方法。この方法は簡単に成功しましたが、執筆作業がWindowsとLinuxにまたがってしまうのでやり取りが億劫でした。また、仮想OSのために30GBほど消費しますし、ノートPCではバッテリーの消費が多くなり、出先で執筆ができません。

　３．CygwinにRe:VIEWをインストールする方法。この方法では、Cygwin自体がかなり容量を消費しますし、ファイルパスの設定が非常にややこしいことになります。

　４．Windows版のTeXとRubyをインストールしてターミナルから使う方法。この方法は情報がありませんでしたが、やってみるとうまくいきました。

Windows版のTeXとRubyだけを使う方法は情報が見つからなかったので、何か根本的な問題があるのかと考えていましたが、
RubyInstaller for WindowsでRubyをインストールして、gemでRe:VIEWがインストールできた段階で現実味を帯びてきました。
途中、ヒラギノフォントを読みにいくエラーを回避できなくて詰まりましたが、dvioptionsを見つけてエラーを回避できました。
やってみるものですね。

このような試行錯誤を楽しむことができるなら別ですが、技術書を書くためにRe:VIEWを使おうとする人全員にそのような試行錯誤を要求するのは酷というものでしょう。
そのために本書があるわけですから、本書を読んだ方（この章では特にWindows 7ユーザー）が環境構築に詰まることなく、
技術書執筆に集中できるようになれば、それに勝る喜びはありません。
//footnote[WIN10ENV][Windows 10の場合はWindows Subsystem for Linuxが利用できるので、Dockerを簡単に利用できます。]

====[/column]

====[column] Re:view on Windowsを早々に諦めた話

私は、様々な記事等でWindows上でRe:view環境構築が大変である記述をみて早々に諦め、本書の担当範囲をテキストエディタ（Terapad）で書くことにしました。werckerによりオンラインコンパイルができるため、（多少待ち時間があったり、バージョン断片が増える問題はありますが）ローカル環境を作る必要がないためです。そして、バージョン管理がしっかりできるGit上で共同執筆したからこそ本書およびテキストエディタ1本での執筆ができたと言っても過言ではないのです。（Text：親方）

====[/column]
