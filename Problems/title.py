# Author : ysh
# 2024/08/29 Thu 00:19:26
from core.general import *

for i in [i for i in ls() if i.endswith('.md')]:
    if i == 'Problems.md' or i == 'Rule.md': continue;
    # info(f'Parsing title for problem {i.replace(".md","")}')
    now = read_from_file(i)
    title, now = now.split('\n',1)
    debug(title)
    left, real_title = title.split('> ',1)
    real_title, right = real_title.split(' </',1)
    debug(real_title.lower().replace(' ','-'))
    assert(i.replace('-',' ').replace('.md','') == real_title.title())
    ans = f'{left}> {real_title.title()} </{right}'
    # write_to_file(i,f'{ans}\n{now}')

quit()