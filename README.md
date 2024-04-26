# About
Pretty simple emebeds generator with dynamic fields (fields are dynamically allocated) in json format for discord webhooks.

# Implementation
The code is small and super easy to implement into other projects.
There's a hardcoded usage example so it gives you a starting point. Or you can use this as a standalone program.

# Screenshot
![alt text](https://i.imgur.com/d1vYTNT.png)

# Misc
Output format:
```json
{
  "embeds": [
    {
      "title": "Weblogger",
      "color": 2815,
      "fields": [
        {
          "name": "Site",
          "value": "https://example.com"
        },
        {
          "name": "User",
          "value": "Test_user"
        },
        {
          "name": "Role",
          "value": "Designer"
        }
      ]
    }
  ]
}
```
