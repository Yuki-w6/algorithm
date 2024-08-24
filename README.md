# algorithm

## コンパイル

Ctrl+Shift+B で開いたファイルのコンパイルを行う。

## 初期設定

- acc, oj のログイン  
   acc, oj で AtCoder のユーザー名とパスワードを入力してログインする

  ```bash
  # ダウンロードの確認
  acc check-oj
  # accのログイン
  acc login
  # ojのログイン
  oj login https://beta.atcoder.jp
  ```

- acc の設定の変更
  デフォルトで全部の問題がダウンロードされるようにしておく
  ```bash
  acc config default-task-choice all
  ```

## 問題のダウンロード

vscode のタスク abc_dl, arc_dl を実行すると，abc, arc 問題のダウンロードができる

- abc 問題のダウンロード -> src/atcoder/abc/にダウンロードされる
- arc 問題のダウンロード -> src/atcoder/arc/にダウンロードされる

## テストの実行

解答用の cpp ファイルを開いて，vscode のタスク test を実行すると，例題でのテストが開始される

## 解答の提出

解答用の cpp ファイルを開いて，vscode のタスク submit を実行すると，自動で提出できる
