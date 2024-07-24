# [level 0] 최빈값 구하기 - 120812 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/120812) 

### 성능 요약

메모리: 4.38 MB, 시간: 0.01 ms

### 구분

코딩테스트 연습 > 코딩테스트 입문

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2024년 07월 24일 17:35:19

### 문제 설명

<p style="user-select: auto !important;">최빈값은 주어진 값 중에서 가장 자주 나오는 값을 의미합니다. 정수 배열 <code style="user-select: auto !important;">array</code>가 매개변수로 주어질 때, 최빈값을 return 하도록 solution 함수를 완성해보세요. 최빈값이 여러 개면 -1을 return 합니다.</p>

<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">제한사항</h5>

<ul style="user-select: auto !important;">
<li style="user-select: auto !important;">0 &lt; <code style="user-select: auto !important;">array</code>의 길이 &lt; 100</li>
<li style="user-select: auto !important;">0&nbsp;≤&nbsp;<code style="user-select: auto !important;">array</code>의 원소 &lt; 1000</li>
</ul>

<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">입출력 예</h5>
<table class="table" style="user-select: auto !important;">
        <thead style="user-select: auto !important;"><tr style="user-select: auto !important;">
<th style="user-select: auto !important;">array</th>
<th style="user-select: auto !important;">result</th>
</tr>
</thead>
        <tbody style="user-select: auto !important;"><tr style="user-select: auto !important;">
<td style="user-select: auto !important;">[1, 2, 3, 3, 3, 4]</td>
<td style="user-select: auto !important;">3</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">[1, 1, 2, 2]</td>
<td style="user-select: auto !important;">-1</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">[1]</td>
<td style="user-select: auto !important;">1</td>
</tr>
</tbody>
      </table>
<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">입출력 예 설명</h5>

<p style="user-select: auto !important;">입출력 예 #1</p>

<ul style="user-select: auto !important;">
<li style="user-select: auto !important;">[1, 2, 3, 3, 3, 4]에서 1은 1개 2는 1개 3은 3개 4는 1개로 최빈값은 3입니다.</li>
</ul>

<p style="user-select: auto !important;">입출력 예 #2</p>

<ul style="user-select: auto !important;">
<li style="user-select: auto !important;">[1, 1, 2, 2]에서 1은 2개 2는 2개로 최빈값이 1, 2입니다. 최빈값이 여러 개이므로 -1을 return 합니다.</li>
</ul>

<p style="user-select: auto !important;">입출력 예 #3</p>

<ul style="user-select: auto !important;">
<li style="user-select: auto !important;">[1]에는 1만 있으므로 최빈값은 1입니다.</li>
</ul>

<hr style="user-select: auto !important;">

<p style="user-select: auto !important;">※ 공지 - 2022년 10월 17일 제한 사항 및 테스트케이스가 수정되었습니다.</p>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges