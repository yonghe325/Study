# 本地仓库放入远程仓库

## git remote add origin 
### 远程仓库地址
 
## git branch -M main 
### 指定分支的名称为main

## git remote -v
### 查看远程仓库

## git push -u origin main : main
### -u :把远程仓库的main分支与本地仓库的main分支关联
### main:mian:本地仓库的main分支推送到远程仓库的main分支
### 如果本地分支与远程仓库分支名相同,可简写为main

## git pull <远程仓库名称> <远程分支名称>:<本地分支名>
### 从远程拉取并进行合并
### 有冲突无法合并




# 其他code托管平台
## gitee 国内

## gitlab 私有化部署,更安全


# 分支 branch
## git branch 
### 查看当前所有分支
## git branch <分支名>
### 创建新的分支
## git checkout <分支名>/<文件名>
### 默认切换到该分支,
### 恢复文件

## git switch <分支名>
### 专用切换分支

## git merge <需要合并的分支名>
### 将目标分支合并到当前分支
### 合并后默认提交

## git log --graph --oneline --all --decorate
### --graph 以ASCII艺术形式显示分支和合并的树状图。
### --oneline：将每个提交显示在一行上，使输出更加紧凑。
### --all：显示所有分支的提交，包括远程分支。
### --decorate：显示分支和标签的名称。


