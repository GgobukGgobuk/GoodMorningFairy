# Team: SystemError

## CaughtYouBastard

### Problem Definition

```
음주운전 등 도주 시 추가 피해 우려가 있는 차량의 운행을 차단하여 피해를 최소화 한다.
```

### Use Case

```
1. 서버를 통해 도주차량의 정보 입력.
2. 컨트롤러가 입력된 정보를 바탕으로 카메라를 이용하여 용의차량의 번호판과 차량번호 식별.
3. 용의차량 접근시 차단장치 작동.
4. 차단 시간,위치,이미지 등 로그 데이터 서버로 전송.
5. 검거
```

### High Level Design

![./media/CaughtYouBastard.png](./media/CaughtYouBastard.png)

### UML

![./media/UML.png](./media/UML.png)

### Work Breakdown Sheet

| Date  | Settings | AI  |   ROS  | APP | H/W | Ass'y |
| ----- | -------- | --- | ------ | --- | --- | ----- |
| 09.11 | ○        | ○   | ○      | ○   | ○   |       |
| 09.12 | ○        | ○   | ○      | ○   | ○   |       |
| 09.13 |          | ○   | ○      | ○   | ○   |       |
| 09.14 |          | ○   | ○      | ○   | ○   |       |
| 09.15 |          | ○   | ○      | ○   | ○   |       |
| 09.18 |          | ○   | ○      | ○   | ○   |       |
| 09.19 |          | ○   | ○      | ○   | ○   |       |
| 09.20 |          | ○   | ○      | ○   | ○   |       |
| 09.21 |          | ○   | ○      | ○   | ○   |       |
| 09.22 |          | ○   | ○      | ○   | ○   |       |
| 09.25 |          | ○   | ○      | ○   | ○   |       |
| 09.26 |          | ○   | ○      | ○   | ○   |       |
| 09.27 |          | ○   | ○      | ○   | ○   |       |
| 10.04 |          |     |        |     |     | ○     |
| 10.05 |          |     |        |     |     | ○     |
| 10.06 |          |     |        |     |     | ○     |

### Members

| Name      | Role        |
| --------- | ----------- |
| 김동성(C) | ROS, SLAM   |
| 김지원    | ROS, SLAM   |
| 김준호    | H/W, APP    |
| 장영주    | AI          |
| 조윤재    | H/W, APP    |

### Repository

https://github.com/goolat/CaughtYouBastard
