FROM nginx
WORKDIR /home/
COPY ./nginx.conf /etc/nginx/nginx.conf
COPY ./run.sh /home/run.sh
COPY ./server.c /home/server.c
RUN apt-get update && apt-get install -y gcc spawn-fcgi libfcgi-dev; \
    chmod 777 run.sh ; \
    chown 755 /bin/su; \
    chown 755 /usr/bin/chfn; \
    chown 755 /usr/bin/chage; \
    chown 755 /sbin/unix_chkpwd; \
    chown 755 /bin/umount; \
    chown 755 /usr/bin/gpasswd; \
    chown 755 /usr/bin/wall; \
    chown 755 /usr/bin/expiry; \
    chown 755 /usr/bin/newgrp; \
    chown 755 /usr/bin/passwd; \
    chown 755 /bin/mount; \
    chown 755 /usr/bin/chsh; \
    touch /var/run/nginx.pid ; \
    chown -R nginx:nginx /var/run/nginx.pid ; \
    chown -R nginx:nginx /var/log/nginx ; \
    chown -R nginx:nginx /var/cache/nginx; \
    rm -rf /var/lib/apt/lists
ENTRYPOINT ["sh", "./run.sh"]
HEALTHCHECK NONE