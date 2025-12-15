# 제출용 README 템플릿 <- 제목은 변경

> 작성 요령: 아래 템플릿을 자신의 저장소 README.md에 그대로 사용하세요. <- 작성 완료 후 삭제

---

# 🛠️ Mini CLI Tool Project

> 작성 요령: 간단한 CLI 프로그램을 제작하고, Linux 실행 및 Docker 패키징, GitHub 버전관리 실습을 수행한 프로젝트입니다. <- 작성 완료 후 삭제

---

## 📁 프로젝트 구조

> 작성 요령: 프로젝트 구조 작성(아래는 권장 구조) <- 작성 완료 후 삭제

```
mini-cli/
 ├─ src/
 │   └─ mini.c 또는 mini.sh
 ├─ Dockerfile
 ├─ README.md
 ├─ LICENSE
 └─ docs/
     └─ images/
```

---

## 🚀 1. Mini 프로그램


### ✔ 코드
> 작성 요령: 소스 코드 작성  <- 작성 완료 후 삭제

```c
// mini.c 또는 mini.sh 내용을 여기에 작성하세요.
```

---

## 🧪 2. Linux 실행 결과

> 작성 요령: 개발 환경 설치 과정 및 실행 과정 작성 <- 작성 완료 후 삭제

### ✔ 실행 명령어
```bash
# 프로그램 소스 코드
gcc src/mini.c -o mini
./mini
```


### 실행 화면 캡처  
(예: `docs/images/linux-run.png`)

---

## 3. Dockerfile 및 실행 결과

> 작성 요령: Dockerfile 내용 작성 <- 작성 완료 후 삭제

### ✔ Dockerfile
```Dockerfile
# 작성한 Dockerfile 내용
```

> 작성 요령: 이미지 빌드 과정 및 이미지 실행 과정 작성(화면 캡쳐) <- 작성 완료 후 삭제

### ✔ Docker 이미지 빌드
```bash
docker build -t mini-cli .
```

### ✔ Docker 실행
```bash
docker run --rm mini-cli
```

### ✔ 실행 화면 캡처  
(예: `docs/images/docker-run.png`)

---

## 4. GitHub 버전관리 내역

> 작성 요령: 의미 있는 커밋 메시지 및 브랜치 사용 <- 작성 완료 후 삭제

### 체크리스트
- [ ] Commit 5회 이상  
- [ ] Branch 생성  
- [ ] Branch → main Merge  
- [ ] 의미 있는 Commit 메시지  

### 설명
예)
```
feature/output-update 브랜치를 생성해 기능을 수정하고 main으로 merge함.
```

### 캡처
(예: `docs/images/git-log.png`)

---

## 5. LICENSE 파일  
선택한 라이선스: MIT / Apache-2.0 / Unlicense 등

```
본 프로젝트는 {설정한 라이센트 작성} License를 적용합니다.
```

---

## 6. 고찰

> 작성 요령: 아래의 내용을 자유롭게 작성 <- 작성 완료 후 삭제

- 배운 점:  
- 어려웠던 점:  
- 흥미로웠던 부분:  
- 개선하고 싶은 점:  

---

## 7. 참고 자료

> 작성 요령: 과젱에 참고한 레퍼런스가 있다면 작성(아래는 예시) <- 작성 완료 후 삭제

- https://docs.docker.com/  
- https://gcc.gnu.org/  
- https://choosealicense.com/  