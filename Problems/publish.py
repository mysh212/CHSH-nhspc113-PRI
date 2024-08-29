# Author : ysh
# 2024/08/29 Thu 00:05:38
from core.general import *

header = '''# 彰化高中 113學年度 資訊學科能力競賽 校內複賽

'''

template = '''

<div class='page' />

'''

ans = [header + read_from_file('Rule.md')]

for i in sorted([i for i in ls() if i.endswith('.md')])[::-1]:
    if i == 'Problems.md' or i == 'Rule.md': continue;
    info(f'Reading statement for problem {i.replace(".md","")}')
    ans.append(read_from_file(i))

info('Writing Problem Statement')
write_to_file('Problems.md',template.join(ans))
quit()