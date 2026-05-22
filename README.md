# AtCoder 用 C++ テンプレート

## 📁 ディレクトリ構成

```
AtCoder/
├── code.cpp              # メインのソースファイル（問題の実装用）
├── template.cpp          # テンプレートの基本形式（全ファイルの元）
├── update.cpp            # template.cpp の内容を全ファイルに一括反映するツール
├── ABC/                  # ABC（AtCoder Beginner Contest）の問題ファイル
│   └── A.cpp ~ I.cpp     # 各問題対応
├── atcoder/              # AtCoder Library
└── README.md             # このファイル
```

## 🚀 使用方法

### 1. テンプレートの管理

```
template.cpp（共通テンプレート）
    ↓
update.cpp を実行
    ↓
code.cpp と ABC/*.cpp に反映
```

### 2. update.cpp の実行

```bash
g++ -std=c++23 update.cpp -o update
./update
```

**効果:** `template.cpp` の内容が `code.cpp` と `ABC/A.cpp` ～ `ABC/I.cpp` にコピーされます。

### 3. コンパイルと実行

```bash
g++ -std=c++23 -I. -Wall -Wextra code.cpp -o a.out　-DLOCAL
```

**重要:** `-I.` で `atcoder/` ライブラリのパスを指定する必要があります。

## 🛠️ コンパイルオプション

| オプション | 説明 |
|-----------|------|
| `-std=c++23` | C++23 標準を使用 |
| `-I.` | カレントディレクトリを include パスに追加（AtCoder Library 検索用） |
| `-Wall -Wextra` | 全警告を表示 |
| `-g` | デバッグ情報を含める |
| `-DLOCAL` | debug機能を有効化 |