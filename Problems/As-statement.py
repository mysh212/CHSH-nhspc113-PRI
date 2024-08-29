# Author : ysh
# 2024/08/29 Thu 00:38:15
from core.general import *

for i in [i for i in ls() if i.endswith('.md') and i != 'Problems.md']:
    debug(i)
    info(read_from_file(i).strip().split('\n')[::-1][0])