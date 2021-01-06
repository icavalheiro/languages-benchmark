FROM mcr.microsoft.com/dotnet/sdk:5.0-alpine as BUILD

WORKDIR /srv/app

COPY ./csharp.csproj /srv/app/csharp.csproj

RUN dotnet restore

COPY ./ /srv/app/

RUN dotnet publish -c Release

FROM mcr.microsoft.com/dotnet/runtime:5.0-alpine

COPY --from=BUILD /srv/app/bin/Release/net5.0 /srv/app/

WORKDIR /srv/app/

CMD time dotnet csharp.dll 800000