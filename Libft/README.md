*This project has been created as part of the 42 curriculum by ujchoi.*

# Libft

## 설명 (Description)

Libft는 C라이브러리의 표준 합수들을 프로토 타입으로 구현하고,
나만의 함수 라이브러리를 만드는 것이 목표입니다.

구현한 함수:

-	ft_atoi.c # 문자 -> 숫자 변환
	ft_bzero.c # 문자열 복사후 0으로 채우기
	ft_calloc.c # 배열 동적할당
	ft_isalnum.c # 알파벳과 숫자인지 확인
	ft_isalpha.c # 알파벳인지 확인
	ft_isascii.c # 아스키코드 안의 값인지 확인
	ft_isdigit.c # 숫자인지 확인
	ft_isprint.c # 출력가능 문자인지 확인
	ft_memchr.c # 문자와 같은 부분의 위치 확인
	ft_memcmp.c # 문자끼리 n만큼 서로 비교
	ft_memcpy.c # 문자 복사
	ft_memmove.c # 문자를 n만큼 복사
	ft_memset.c # 특정 문자로 n만큼 채우기
	ft_strchr.c # 문자열에서 특정 문자 찾기
	ft_strdup.c # 문자열 동적할당 복사
	ft_strjoin.c # 두 문자열 이어붙이기
	ft_strlcat.c # 두 문자열을 size만큼 이어붙이고, 두 문자열 길이의 합을 알려줌
	ft_strlcpy.c # size만큼 문자열 복사
	ft_strlen.c # 문자열 길이 확인
	ft_strncmp.c # 문자열끼리 서로 비교
	ft_strnstr.c # 큰 문자열 안에 작은 문자열이 존재하는지 확인
	ft_strrchr.c # 문자열 안에 같은 문자가 존재하는지 확인
	ft_substr.c # 특정 인덱스부터 문자열 복사
	ft_tolower.c # 대문자 -> 소문자
	ft_toupper.c # 소문자 -> 대문자
	ft_strtrim.c # 문자열의 양쪽 부분이 다른 문자열과 같지 않은 부분을 복사
	ft_split.c # 문자열을 특정 구분자로 구분
	ft_itoa.c # 숫자를 문자로 변환
	ft_strmapi.c # 문자열 복사 후 f함수 적용
	ft_striteri.c # 문자열의 각 부분에 f함수 적용
	ft_putchar_fd.c # 문자 하나를 fd로 출력
	ft_putstr_fd.c # 문자열을 fd로 출력
	ft_putendl_fd.c # 문자열 출력 후 \n까지 출력
	ft_putnbr_fd.c # 숫자를 문자로 fd에 출력
	ft_lstnew.c # 노드 생성
	ft_lstadd_front.c # 노드 앞쪽에 추가
	ft_lstsize.c # 연결된 노드 길이 반환
	ft_lstlast.c # 마지막 노드 반환
	ft_lstadd_back.c # 마지막 노드 뒤에 추가
	ft_lstdelone.c # 노드 내용 삭제
	ft_lstclear.c # 연결되어 있는 모든 노드 제거
	ft_lstiter.c # 연결된 노드의 내용에 f함수 적용
	ft_lstmap.c # 노드 내용에 f함수 적용 후 새 노드로 추가

## 사용법 (Instructions)

라이브러리 빌드 (`cc` 필요, 플래그: `-Wall -Wextra -Werror`):

    make          # libft.a 생성
    make clean    # 오브젝트 파일 삭제
    make fclean   # 오브젝트 파일과 libft.a 삭제
    make re       # 처음부터 다시 빌드

## 참고 자료 (Resources)

- 각 함수의 `man 3 <함수명>` 매뉴얼
- 42 Libft subject
- AI 사용: AI 어시스턴트(Claude)를 이용해 일부 함수의 동작(예: `memmove`의
  메모리 겹침 처리, `strlcpy` / `strlcat`의 반환값)을 설명받았습니다. 모든 코드는 직접 작성했고, 내용을 이해하고 있습니다.