{\rtf1\ansi\ansicpg1252\cocoartf2820
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fnil\fcharset0 Menlo-Regular;}
{\colortbl;\red255\green255\blue255;\red70\green137\blue204;\red202\green202\blue202;\red67\green192\blue160;
\red212\green214\blue154;\red167\green197\blue152;}
{\*\expandedcolortbl;;\cssrgb\c33725\c61176\c83922;\cssrgb\c83137\c83137\c83137;\cssrgb\c30588\c78824\c69020;
\cssrgb\c86275\c86275\c66667;\cssrgb\c70980\c80784\c65882;}
\margl1440\margr1440\vieww28600\viewh18000\viewkind0
\deftab720
\pard\pardeftab720\partightenfactor0

\f0\fs26 \cf2 \expnd0\expndtw0\kerning0
\outl0\strokewidth0 \strokec2 class\cf3 \strokec3  \cf4 \strokec4 Solution\cf3 \strokec3  \{\
\cf2 \strokec2 public\cf3 \strokec3 :\
    vector<\cf2 \strokec2 int\cf3 \strokec3 > \cf5 \strokec5 twoSum\cf3 \strokec3 (vector<\cf2 \strokec2 int\cf3 \strokec3 >& nums, \cf2 \strokec2 int\cf3 \strokec3  target) \{\
        unordered_map<\cf2 \strokec2 int\cf3 \strokec3 , \cf2 \strokec2 int\cf3 \strokec3 > valAndIdx;\
        \
        \cf2 \strokec2 for\cf3 \strokec3 (\cf2 \strokec2 int\cf3 \strokec3  i = \cf6 \strokec6 0\cf3 \strokec3 ; i < nums.\cf5 \strokec5 size\cf3 \strokec3 (); i++)\
        \{\
            \cf2 \strokec2 int\cf3 \strokec3  diff = target - nums[i];\
            \cf2 \strokec2 if\cf3 \strokec3  (valAndIdx.\cf5 \strokec5 find\cf3 \strokec3 (diff) != valAndIdx.\cf5 \strokec5 end\cf3 \strokec3 ())\
            \{\
                \cf2 \strokec2 return\cf3 \strokec3  \{i, valAndIdx[diff]\};\
            \}\
            \
            valAndIdx[nums[i]] = i;\
        \}\
        \
        \cf2 \strokec2 return\cf3 \strokec3  \{\cf6 \strokec6 0\cf3 \strokec3 ,\cf6 \strokec6 0\cf3 \strokec3 \};\
    \}\
\};\
}