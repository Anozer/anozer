using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _15labalaba
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {
            int number;
            number = Int32.Parse(textBox1.Text);
            Convert.ToString(number);
        }

        private void textBox2_TextChanged(object sender, EventArgs e)
        {
            int number;
            number = Int32.Parse(textBox2.Text);
            Convert.ToString(number);
        }

        private void button1_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Complate!");
            decimal a = Convert.ToDecimal(textBox1.Text) * Convert.ToDecimal(textBox1.Text);
            textBox2.Text = a.ToString();
        } 
    }
}
