version: "4"
services:
  talia:
    build: .
    environment:
      SESSION_NAME: $SESSION_NAME
      API_ID: $API_ID
      API_HASH: $API_HASH
      BOT_TOKEN: $BOT_TOKEN
      BOT_NAME: $BOT_NAME
      BOT_USARNAME: $BOT_USARNAME
      DURATION_LIMIT: $DURATION_LIMIT
      SUDO_USERS: $SUDO_USERS

