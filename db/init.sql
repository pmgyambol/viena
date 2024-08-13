DROP TABLE IF EXISTS users;

CREATE TABLE users (
  username TEXT PRIMARY KEY NOT NULL,
  fullname TEXT,
  email    TEXT UNIQUE NOT NULL);

