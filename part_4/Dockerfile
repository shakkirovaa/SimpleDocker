FROM nginx 

WORKDIR /home/

COPY ./nginx.conf /etc/nginx/nginx.conf
COPY ./server.c .
COPY ./run.sh .

RUN apt-get update && apt install -y gcc spawn-fcgi libfcgi-dev \
    && gcc server.c -o server -lfcgi

ENTRYPOINT ["sh", "run.sh"]