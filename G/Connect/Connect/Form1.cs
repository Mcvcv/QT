using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Runtime.InteropServices;


namespace Connect
{
    public partial class Form1 : Form
    {
       
        
        [DllImport("qtdialog.dll", CallingConvention = CallingConvention.Cdecl)]
        public static extern bool showText( string str); 
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            string a = textBox1.Text;
            showText(a);
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {
            
        }
       
    }
}
