# Author : ysh
# 2024/08/28 Wed 23:50:22
from core.general import *

for i in [i for i in ls() if i.endswith('.md')]:
    info(f'Writing Statement for problem {i}')
    write_to_file(i,read_from_file(i).replace('\\%','\\\\%'))

quit()