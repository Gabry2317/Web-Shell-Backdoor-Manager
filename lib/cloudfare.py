import subprocess
import re

processo = subprocess.Popen(
    ["cloudflared", "tunnel", "--url", "http://localhost:8080"],
    stderr=subprocess.PIPE,
    text=True
)
link_tunnel = None

for riga in processo.stderr:
    if "trycloudflare.com" in riga:
        trovato = re.search(r"https://[a-z0-9-]+\.trycloudflare\.com", riga)
        if trovato:
            link_tunnel = trovato.group(0)
            break 

print("Il link del tunnel è:", link_tunnel)