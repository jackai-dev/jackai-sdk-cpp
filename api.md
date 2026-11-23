# JackAI Platform OS Hub API (public subset) C++ API

<!-- omniwrap-api-reference eyJjb250cmFjdF9maW5nZXJwcmludCI6ImM3Y2E1ZTVlYmI0YzA5MjkxMGVjNzJiMzcxZTE4ODMwMzM1OGM1ZTM0ZDI5MDhjMGE4OGY3ODJhMjQxMTYyY2YiLCJvcGVyYXRpb25fY291bnQiOjgsInJlbmRlcmVyIjoiY3BwIiwidmVyc2lvbiI6IjEuNS4wIn0 -->

This generated index is tied to Semantic IR `1.14.0` and contract fingerprint `c7ca5e5ebb4c092910ec72b371e188303358c5e34d2908c0a88f782a241162cf`. Every operation below is rendered from the same semantic contract and artifact-attested public member allocation as the SDK.

SDK maturity: **experimental**  
Artifact evidence: [`omniwrap-artifact.json`](omniwrap-artifact.json) binds this file by SHA-256 and is revalidated by the package gate.

## Resource `health`

<!-- omniwrap-api-operation eyJleGFtcGxlX3JlYXNvbiI6Imxhbmd1YWdlLWV4YW1wbGUtbm90LWdlbmVyYXRlZCIsImV4YW1wbGVfc3RhdHVzIjoidW5zdXBwb3J0ZWQiLCJtZW1iZXIiOiJnZXRfaGVhbHRoIiwibWV0aG9kIjoiR0VUIiwib3BlcmF0aW9uX2lkIjoiZ2V0SGVhbHRoIiwicGF0aCI6Ii9oZWFsdGgiLCJyZXNvdXJjZSI6ImhlYWx0aCIsInNlY3Rpb25fc2hhMjU2IjoiZWZmYTU0NWM3NTk5NWNkYmFmNDJjMDBmNzhjZWYzZjIyYTY5ZTA0Njg4YTZmYzM1ZjU3Y2FlYWQxYTk3MjQ4YSIsInNpZ25hdHVyZV9zaGEyNTYiOiI1ZGY2ODczNTY2ZWUxMTAyMGFiYTJjNWE1NjFlNzUzMTcyY2VlNWQyMWY5MDk2Njc3MDBiODVjMGU2MDkyZjVlIn0 -->
### `client.get_health`

Operation ID: `getHealth`  
Route: `GET` `/health`  

#### Signature

```cpp
ApiResponse get_health() const
```

#### Parameters

| Name | In | Required | Contract type | Description |
| --- | --- | --- | --- | --- |
| _none_ | | | | |

#### Responses

| Status | Description | Content |
| --- | --- | --- |
| `200` | Hub liveness status | none |

#### Canonical required-input example

```json
{
  "parameters": []
}
```

#### SDK call example

Example status: `unsupported`  
Unsupported reason: `language-example-not-generated`

<!-- omniwrap-api-operation-end eyJvcGVyYXRpb25faWQiOiJnZXRIZWFsdGgifQ -->

## Resource `kernel`

<!-- omniwrap-api-operation eyJleGFtcGxlX3JlYXNvbiI6Imxhbmd1YWdlLWV4YW1wbGUtbm90LWdlbmVyYXRlZCIsImV4YW1wbGVfc3RhdHVzIjoidW5zdXBwb3J0ZWQiLCJtZW1iZXIiOiJmYWlsX3VzYWdlX3F1b3RhIiwibWV0aG9kIjoiUE9TVCIsIm9wZXJhdGlvbl9pZCI6ImZhaWxVc2FnZVF1b3RhIiwicGF0aCI6Ii92MS9rZXJuZWwvdXNhZ2UvZmFpbCIsInJlc291cmNlIjoia2VybmVsIiwic2VjdGlvbl9zaGEyNTYiOiI0MGNhNmMwZTBjNDQ5MDE2MTNjYjlkNjlmOWNiYjY0ODYwMTQ0ODE1NTYwNGRkYWIzOGQwZDBmZGZkMjRlNmFiIiwic2lnbmF0dXJlX3NoYTI1NiI6IjMxNWM5NGQ2YmMyYzQwYTZkODY1MWY4MmQxNzBmYWVhNjFmMzI5MzM2YWJjOWE2OWFjNGZjOGIxNjFmNTJhMmYifQ -->
### `client.fail_usage_quota`

Operation ID: `failUsageQuota`  
Route: `POST` `/v1/kernel/usage/fail`  

#### Signature

```cpp
ApiResponse fail_usage_quota() const
```

#### Parameters

| Name | In | Required | Contract type | Description |
| --- | --- | --- | --- | --- |
| _none_ | | | | |

#### Responses

| Status | Description | Content |
| --- | --- | --- |
| `200` | Reservation released | none |

#### Canonical required-input example

```json
{
  "parameters": []
}
```

#### SDK call example

Example status: `unsupported`  
Unsupported reason: `language-example-not-generated`

<!-- omniwrap-api-operation-end eyJvcGVyYXRpb25faWQiOiJmYWlsVXNhZ2VRdW90YSJ9 -->

<!-- omniwrap-api-operation eyJleGFtcGxlX3JlYXNvbiI6Imxhbmd1YWdlLWV4YW1wbGUtbm90LWdlbmVyYXRlZCIsImV4YW1wbGVfc3RhdHVzIjoidW5zdXBwb3J0ZWQiLCJtZW1iZXIiOiJmaW5hbGl6ZV91c2FnZV9xdW90YSIsIm1ldGhvZCI6IlBPU1QiLCJvcGVyYXRpb25faWQiOiJmaW5hbGl6ZVVzYWdlUXVvdGEiLCJwYXRoIjoiL3YxL2tlcm5lbC91c2FnZS9maW5hbGl6ZSIsInJlc291cmNlIjoia2VybmVsIiwic2VjdGlvbl9zaGEyNTYiOiIwNGM4Yzg2YTJhOGE2Y2JmMzM0NmVmMjc0NGIwMWVlZjEyY2Y0YzQ4Njg4NzZkYzZjZTQyNjIzYWM2NDg5M2ZjIiwic2lnbmF0dXJlX3NoYTI1NiI6ImNlZmEzNzhhZjNhZWJjODE3ZWZjMzY3ZmZiYjc5OGE2YzhiNTg4ODA4ZmIyNTgzMjlmN2E4MTY0MDFjNmYzZWUifQ -->
### `client.finalize_usage_quota`

Operation ID: `finalizeUsageQuota`  
Route: `POST` `/v1/kernel/usage/finalize`  

#### Signature

```cpp
ApiResponse finalize_usage_quota() const
```

#### Parameters

| Name | In | Required | Contract type | Description |
| --- | --- | --- | --- | --- |
| _none_ | | | | |

#### Responses

| Status | Description | Content |
| --- | --- | --- |
| `200` | Reservation finalized | none |

#### Canonical required-input example

```json
{
  "parameters": []
}
```

#### SDK call example

Example status: `unsupported`  
Unsupported reason: `language-example-not-generated`

<!-- omniwrap-api-operation-end eyJvcGVyYXRpb25faWQiOiJmaW5hbGl6ZVVzYWdlUXVvdGEifQ -->

<!-- omniwrap-api-operation eyJleGFtcGxlX3JlYXNvbiI6Imxhbmd1YWdlLWV4YW1wbGUtbm90LWdlbmVyYXRlZCIsImV4YW1wbGVfc3RhdHVzIjoidW5zdXBwb3J0ZWQiLCJtZW1iZXIiOiJyZXNlcnZlX3VzYWdlX3F1b3RhIiwibWV0aG9kIjoiUE9TVCIsIm9wZXJhdGlvbl9pZCI6InJlc2VydmVVc2FnZVF1b3RhIiwicGF0aCI6Ii92MS9rZXJuZWwvdXNhZ2UvcmVzZXJ2ZSIsInJlc291cmNlIjoia2VybmVsIiwic2VjdGlvbl9zaGEyNTYiOiJlZTlhZTlkYzc3YjdhZGRiMmRlYTM5YjVhYmYzNDRhYTc2YzRlMTIyMzg3N2ZmYjEzOWMwNDU1NWIwNzViOTgxIiwic2lnbmF0dXJlX3NoYTI1NiI6Ijk2YjQwZWIzODRhNDgxN2RmZmFjOWJlMWI5YWU5ZmJlYWIxZDgyNzU1NmU1ODkwMjQ4ZDI5MGExZjg4Mjk5YjAifQ -->
### `client.reserve_usage_quota`

Operation ID: `reserveUsageQuota`  
Route: `POST` `/v1/kernel/usage/reserve`  

#### Signature

```cpp
ApiResponse reserve_usage_quota() const
```

#### Parameters

| Name | In | Required | Contract type | Description |
| --- | --- | --- | --- | --- |
| _none_ | | | | |

#### Responses

| Status | Description | Content |
| --- | --- | --- |
| `200` | Reservation lease created | none |

#### Canonical required-input example

```json
{
  "parameters": []
}
```

#### SDK call example

Example status: `unsupported`  
Unsupported reason: `language-example-not-generated`

<!-- omniwrap-api-operation-end eyJvcGVyYXRpb25faWQiOiJyZXNlcnZlVXNhZ2VRdW90YSJ9 -->

## Resource `user`

<!-- omniwrap-api-operation eyJleGFtcGxlX3JlYXNvbiI6Imxhbmd1YWdlLWV4YW1wbGUtbm90LWdlbmVyYXRlZCIsImV4YW1wbGVfc3RhdHVzIjoidW5zdXBwb3J0ZWQiLCJtZW1iZXIiOiJnZXRfY3VycmVudF91c2VyIiwibWV0aG9kIjoiR0VUIiwib3BlcmF0aW9uX2lkIjoiZ2V0Q3VycmVudFVzZXIiLCJwYXRoIjoiL3VzZXIvbWUiLCJyZXNvdXJjZSI6InVzZXIiLCJzZWN0aW9uX3NoYTI1NiI6ImJmMjZiMjUyZjg1ZDBlODEwYjEwZjYzMDQ3MjIyOTA3ZTRlY2FmNGZmYjY3MDY3Y2MxMzUyNWFjZjY0NGVlNzkiLCJzaWduYXR1cmVfc2hhMjU2IjoiN2Y3Y2IzY2VlM2IzNWY2Yjc1MjQ5YWVkOWI0MDcwZDdmYzVjMjA0NWZlMTUzNjcwZGY1MzQ4YWNiNGRlOTlhOCJ9 -->
### `client.get_current_user`

Operation ID: `getCurrentUser`  
Route: `GET` `/user/me`  

#### Signature

```cpp
ApiResponse get_current_user() const
```

#### Parameters

| Name | In | Required | Contract type | Description |
| --- | --- | --- | --- | --- |
| _none_ | | | | |

#### Responses

| Status | Description | Content |
| --- | --- | --- |
| `200` | Current user context | none |

#### Canonical required-input example

```json
{
  "parameters": []
}
```

#### SDK call example

Example status: `unsupported`  
Unsupported reason: `language-example-not-generated`

<!-- omniwrap-api-operation-end eyJvcGVyYXRpb25faWQiOiJnZXRDdXJyZW50VXNlciJ9 -->

<!-- omniwrap-api-operation eyJleGFtcGxlX3JlYXNvbiI6Imxhbmd1YWdlLWV4YW1wbGUtbm90LWdlbmVyYXRlZCIsImV4YW1wbGVfc3RhdHVzIjoidW5zdXBwb3J0ZWQiLCJtZW1iZXIiOiJnZXRfc2lnbnVwX3BvbGljeSIsIm1ldGhvZCI6IkdFVCIsIm9wZXJhdGlvbl9pZCI6ImdldFNpZ251cFBvbGljeSIsInBhdGgiOiIvdXNlci9hdXRoL3NpZ251cC1wb2xpY3kiLCJyZXNvdXJjZSI6InVzZXIiLCJzZWN0aW9uX3NoYTI1NiI6ImU0NDI2ZTJjNTQ1ODg0YmEzOTI5ZGJjYTMzMjgxYmNhMjhlMTBjZTViNjdlYTFlZDNmNWM2NGI2N2E5ZWEzNjgiLCJzaWduYXR1cmVfc2hhMjU2IjoiMDFhOWQ4NGY1OTQ3YTUxZDIzNmU1NGY5YWVlYmNmZDNmMTlmODkwNTNhNWExNDBmMWFiNWYxMjIxNjc5M2Q4MiJ9 -->
### `client.get_signup_policy`

Operation ID: `getSignupPolicy`  
Route: `GET` `/user/auth/signup-policy`  

#### Signature

```cpp
ApiResponse get_signup_policy() const
```

#### Parameters

| Name | In | Required | Contract type | Description |
| --- | --- | --- | --- | --- |
| _none_ | | | | |

#### Responses

| Status | Description | Content |
| --- | --- | --- |
| `200` | Current signup policy | none |

#### Canonical required-input example

```json
{
  "parameters": []
}
```

#### SDK call example

Example status: `unsupported`  
Unsupported reason: `language-example-not-generated`

<!-- omniwrap-api-operation-end eyJvcGVyYXRpb25faWQiOiJnZXRTaWdudXBQb2xpY3kifQ -->

<!-- omniwrap-api-operation eyJleGFtcGxlX3JlYXNvbiI6Imxhbmd1YWdlLWV4YW1wbGUtbm90LWdlbmVyYXRlZCIsImV4YW1wbGVfc3RhdHVzIjoidW5zdXBwb3J0ZWQiLCJtZW1iZXIiOiJsb2dpbl91c2VyIiwibWV0aG9kIjoiUE9TVCIsIm9wZXJhdGlvbl9pZCI6ImxvZ2luVXNlciIsInBhdGgiOiIvdXNlci9hdXRoL2xvZ2luIiwicmVzb3VyY2UiOiJ1c2VyIiwic2VjdGlvbl9zaGEyNTYiOiIwMDVhYzg5OWVlNGViYjNjNjJiNzAwZDdiMzkzZGNhNjIxOTQ0YjEyZmQ5OTFhMjMzYTliMDE4NDlmMGE0MzY0Iiwic2lnbmF0dXJlX3NoYTI1NiI6IjIzYjY3M2FiMWYxZmE3MDFkNzJlNjNhMzg1NmI5MDFlMmI2MzMxMzhkMTkwNTExNjY2MGYzNWUwN2ZiNjZkYmQifQ -->
### `client.login_user`

Operation ID: `loginUser`  
Route: `POST` `/user/auth/login`  

#### Signature

```cpp
ApiResponse login_user() const
```

#### Parameters

| Name | In | Required | Contract type | Description |
| --- | --- | --- | --- | --- |
| _none_ | | | | |

#### Responses

| Status | Description | Content |
| --- | --- | --- |
| `200` | Authenticated session or MFA challenge | none |

#### Canonical required-input example

```json
{
  "parameters": []
}
```

#### SDK call example

Example status: `unsupported`  
Unsupported reason: `language-example-not-generated`

<!-- omniwrap-api-operation-end eyJvcGVyYXRpb25faWQiOiJsb2dpblVzZXIifQ -->

<!-- omniwrap-api-operation eyJleGFtcGxlX3JlYXNvbiI6Imxhbmd1YWdlLWV4YW1wbGUtbm90LWdlbmVyYXRlZCIsImV4YW1wbGVfc3RhdHVzIjoidW5zdXBwb3J0ZWQiLCJtZW1iZXIiOiJzdWJtaXRfd2FpdGxpc3RfcmVxdWVzdCIsIm1ldGhvZCI6IlBPU1QiLCJvcGVyYXRpb25faWQiOiJzdWJtaXRXYWl0bGlzdFJlcXVlc3QiLCJwYXRoIjoiL3VzZXIvYXV0aC93YWl0bGlzdCIsInJlc291cmNlIjoidXNlciIsInNlY3Rpb25fc2hhMjU2IjoiYzRhNmRhN2VhZWQyY2Y4OWY3ZGU0NGM3MWM1Y2ZkZTI4NWM1ZWUzYzQxOWM1OWFkZmZmOTFiM2Y2Mjk1ZGZmZiIsInNpZ25hdHVyZV9zaGEyNTYiOiIwNzVjNDYyOGQ2MDQzNzE4MjI2ZjQ4NzNiNzU2MTY3Y2VmMTM4NzQ2NDc0OGRiNGVhNGZiMmQwOTY2ZjQ2NmExIn0 -->
### `client.submit_waitlist_request`

Operation ID: `submitWaitlistRequest`  
Route: `POST` `/user/auth/waitlist`  

#### Signature

```cpp
ApiResponse submit_waitlist_request() const
```

#### Parameters

| Name | In | Required | Contract type | Description |
| --- | --- | --- | --- | --- |
| _none_ | | | | |

#### Responses

| Status | Description | Content |
| --- | --- | --- |
| `202` | Waitlist request recorded with an opaque WL- reference | none |

#### Canonical required-input example

```json
{
  "parameters": []
}
```

#### SDK call example

Example status: `unsupported`  
Unsupported reason: `language-example-not-generated`

<!-- omniwrap-api-operation-end eyJvcGVyYXRpb25faWQiOiJzdWJtaXRXYWl0bGlzdFJlcXVlc3QifQ -->

