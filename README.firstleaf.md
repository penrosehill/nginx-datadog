1. Update `BASE_IMAGE` and `NGINX_VERSION` on the `nginx-version-info` file with the desired AL2 version
You can check the current version [here](https://docs.aws.amazon.com/elasticbeanstalk/latest/platforms/platform-history-docker.html)
2. Run `./bin/docker_build.sh`
3. Run `make build-in-docker`
4. Once finished, run the following commands
```
cd .docker-build/
sudo mv libngx_http_datadog_module.so ngx_http_datadog_module.so
sudo tar cvzf amazonlinux_2.0.<release-version>-ngx_http_datadog_module.so.tgz ngx_http_datadog_module.so
gh release upload v1.0.0 amazonlinux_2.0.<release-version>-ngx_http_datadog_module.so.tgz
```
Make sure you upload to the right release, in the example above we are uploading to the v1.0.0 release on the repo, which was the latest one comming from the original repo.
