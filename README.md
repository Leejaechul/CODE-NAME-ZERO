# CODE NAME ZERO
21학년도 2학기 vs cpp 과제 제출용입니다.

1주차~15주차 과제가 하위 폴더에 위치해 있습니다.
 
감사합니다.

Tracked 상태인 파일을 수정하면 not staged for commit 인 상태가 되는가?

=> staged 상태이며 동시에 unstaged 인 상태가 된다.

이는 staged 상태인 readme.md 파일은 수정하기전 tracked 상태인 파일이 commit된 버전 파일이고
unstaged 상태인 readme.md 파일은 마지막으로 commit된 버전 파일이 수정되었기 때문에 not satged for commit 상태 즉, unstaged 상태이며 또한 modified인 수정된 상태이다.

따라서 최종적으로 수정된 상태가 되면 마지막으로 commit 상태로 해주는 git add readme.md 명령어를 실행하여 최신버전을 staged 상태로 만들어 주면 된다.
