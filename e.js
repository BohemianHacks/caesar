function e(t,n){for(var r="",i=0;i<t.length;i++){var a=t.charCodeAt(i);a>=65&&a<=90?(a=a+n-65)%26+65:a>=97&&a<=122?(a=a+n-97)%26+97:a=a;r+=String.fromCharCode(a)}return r}
