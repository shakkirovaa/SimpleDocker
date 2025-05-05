FROM nginx 

WORKDIR /home/

COPY ./nginx.conf /etc/nginx/nginx.conf
COPY ./server.c .
COPY ./run.sh .

RUN apt-get update && apt install -y gcc spawn-fcgi libfcgi-dev \
    && rm -rf /var/lib/apt/lists \
    && gcc server.c -o server -lfcgi

ENTRYPOINT ["sh", "run.sh"]

USER nginx_x

HEALTHCHECK --interval=30s --timeout=3s CMD curl -f http://localhost:80/ || exit 1
