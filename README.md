# viena

## set the database

cd db
sqlite3 viena.db < init.sql
cd ..

## compile

qmake && make

## run

./viena

