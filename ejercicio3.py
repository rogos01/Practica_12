import turtle
import argparse

def recorrido_recursivo(tortuga, espacio, huella):
    if huella > 0:
        tortuga.stamp()
        espacio = espacio+3
        tortuga.forward(espacio)
        tortuga.right(24)
        recorrido_recursivo(tortuga, espacio, huella-1)

"""                             desde linea de comandos
ap = argparse.ArgumentParser()
ap.add_argument("--huella", required=True, help = "numero de huellas")
args = vars(ap.parse_args())
huellas = int(args["huellas"])
"""

wn = turtle.Screen()
wn.bgcolor("lightgreen")
wn.title("Tortuga")
tess = turtle.Turtle()
tess.shape("turtle")
tess.color("blue")

tess.penup()
size = 20
for i in range(30):
    tess.stamp()
    size= size+3
    tess.forward(size)
    tess.right(24)

wn.mainloop()