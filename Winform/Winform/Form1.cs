using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Winform
{
    public partial class Form1 : Form
    {
        [DllImport("qtdialog.dll", CallingConvention = CallingConvention.Cdecl)]
         public static extern bool showDialog(IntPtr parent); //注意调用时参数类型转换

         [DllImport("qtdialog.dll", CallingConvention = CallingConvention.Cdecl)]
         public static extern bool sizeChange(IntPtr parent, double width, double height); //注意调用时参数类型转换
        public Form1()
        {
            InitializeComponent();
            
        }

        private void panel1_SizeChanged(object sender, EventArgs e)
        {
            Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Right | System.Windows.Forms.AnchorStyles.Bottom | System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left)));
            double width = panel1.Size.Width;
            double height = panel1.Size.Height;
            sizeChange(this.panel1.Handle, width, height);
        }

        private void Form1_Resize(object sender, EventArgs e)
        {
            
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            
        }

        private void panel1_Paint(object sender, PaintEventArgs e)
        {
            double width = panel1.Size.Width;
            double height = panel1.Size.Height;
            sizeChange(this.panel1.Handle, width, height);
        }
    }
}
