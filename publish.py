# Author : ysh
# 2024/04/24 Wed 02:23:42
bk = '''
<div class='page' />
'''

def getcolor(x: str) -> str:
    return x[::-1][4:][::-1]

template = ''
with open('template.md','r') as ff:
    template = ''.join(ff.readlines())

ans = ''
pre = ['name','team','username','password','color']
with open('result.log','r') as ff:
    for i in ff:
        now = i.replace('\n','').split('\t')
        now.append(getcolor(now[3]))
        if len(now) != len(pre): continue;
        # name, team, username, password = now
        aans = template
        for i in range(len(pre)):
            aans = aans.replace(f'<{pre[i]}>',now[i])
        ans = ans + aans + f'\n{bk}\n'

with open('result.md','w') as ff:
    ff.write(ans)

quit()