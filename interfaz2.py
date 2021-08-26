from tkinter import Tk,Frame,StringVar,Entry,Button,Label,Spinbox
#from tkinter import ttk
from tkinter.constants import COMMAND
import serial.tools.list_ports
import time

class SerialMonitor(Frame):
    def __init__(self,master=None):
        super().__init__(master)                  
        self.master.title("Generador de caracteres")
        self.master.resizable(0,0)
        self.frameG=Frame(self.master,pady=10,padx=10,bg="#4c4d49",borderwidth=3,relief="solid")#,width=400,height=300
        self.frameG.grid(row=0,column=0,sticky="ewns")
        self.frame0=Frame(self.frameG,padx=10,pady=10,bg="#70706c",borderwidth=3,relief="solid")
        self.frame0.columnconfigure(0,weight=1)
        self.frame0.columnconfigure(1,weight=3)
        self.frame0.columnconfigure(2,weight=1)
        self.frame0.grid(row=0,column=0,sticky="ewns")
        self.frame1=Frame(self.frameG,pady=10,padx=10,bg="#4a3937",borderwidth=3,relief="solid",)
        self.frame1.columnconfigure(0,weight=1)
        self.frame1.columnconfigure(1,weight=1)
        self.frame1.columnconfigure(2,weight=1)
        self.frame1.grid(row=1,column=0,sticky="nsew")
        self.texto=StringVar()
        self.comport=StringVar()      
        self.initEntry()
        self.initLabel()
        self.initButton()
        self.initSpinBox()   

        #Organizacion de la cuadricula
        

    def initEntry(self):
        self.textEnt=Entry(self.frame0,textvariable=self.texto)
        self.textEnt.grid(row=0,column=1,padx=5,pady=5)
    def initLabel(self):
        self.textlabel=Label(self.frame0,text="Texto a enviar:",bg="#70706c")
        self.textlabel.grid(row=0,column=0,padx=5,pady=5)
    def initButton(self):
        self.envBut=Button(self.frame0,text="Enviar",command=self.enviar)
        self.envBut.grid(row=0,column=2,padx=5,pady=5)

        self.env2But=Button(self.frame1,text="Texto 1",command=self.enviar1)
        self.env2But.grid(row=0,column=0,padx=5,pady=5)

        self.env3But=Button(self.frame1,text="Texto 2",command=self.enviar2)
        self.env3But.grid(row=0,column=1,padx=5,pady=5)

        self.env4But=Button(self.frame1,text="Texto 3",command=self.enviar3)
        self.env4But.grid(row=0,column=2,padx=5,pady=5)

    def initSpinBox(self):
        comports=[comport.device for comport in serial.tools.list_ports.comports()]
        if(len(comports)==0):
            self.comportSpinbox=Spinbox(self.frame1,textvariable=self.comport,values=[""], state="readonly")
        else:
            self.comportSpinbox=Spinbox(self.frame1,textvariable=self.comport,values=comports, state="readonly")
        self.comportSpinbox.grid(row=1,column=1,padx=5,pady=5)
        self.frame1.after(1000,self.initSpinBox)

    def enviar(self):
        
        self.sendSerial(self.texto.get())
        self.texto.set("")

    def enviar1(self):
        self.sendSerial("MasterChief")
    def enviar2(self):
        self.sendSerial("bt7274")
    def enviar3(self):
        self.sendSerial("Sekiro")

    def sendSerial(self,texto):
        recibido=None
        print(texto+" GUI")
        try:
            with serial.Serial(self.comport.get(),9600,timeout=1)as port:
                #time.sleep(0.01)
                port.write(bytes(texto,'utf-8'))
            with serial.Serial(self.comport.get(),9600,timeout=1)as port:
                #time.sleep(0.01)
                recibido=port.readline()
                print(len(str(recibido,'utf-8')))
            print(str(recibido,'utf-8')+" Tivac") 
           
        except Exception as exc:
            print(exc) 
  

frame=Tk()
ventana=SerialMonitor(frame)
ventana.mainloop()


