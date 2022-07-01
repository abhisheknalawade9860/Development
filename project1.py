from tkinter import *
from tkinter.messagebox import *
from sqlite3 import *

root=Tk()
root.title("Success Stories")
root.geometry("700x400+100+100")

f=("Arial",24,"bold")
lab_name=Label(root,text="enter name",font=f)
ent_name=Entry(root,font=f)
lab_name.pack()
ent_name.pack()

lab_cname=Label(root,text="enter company name",font=f)
ent_cname=Entry(root,font=f)
lab_cname.pack()
ent_cname.pack()

lab_pkg=Label(root,text="enter package",font=f)
ent_pkg=Entry(root,font=f)
lab_pkg.pack()
ent_pkg.pack()

def save():
	con=None
	try:
		con=connect("ss.db")
		print("db created and opened")

		sql="insert into student values('%s','%s','%f')"
		cursor=con.cursor()
		name=ent_name.get()
		cname=ent_cname.get()
		pkg=float(ent_pkg.get())
		cursor.execute(sql % (name,cname,pkg))
		con.commit()
		showinfo("Succes","thuk u")	

	except Exception as e:
		con.rollback()
		showerror("issue",e)
	finally:
		if con is not None:
			con.close()


btn_submit=Button(root,text="Submit",font=f,command=save)
btn_submit.pack(pady=30)

root.mainloop()