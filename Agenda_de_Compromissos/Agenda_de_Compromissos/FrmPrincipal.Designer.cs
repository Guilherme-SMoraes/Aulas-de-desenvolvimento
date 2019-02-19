namespace Agenda_de_Compromissos
{
    partial class FrmPrincipal
    {
        /// <summary>
        /// Variável de designer necessária.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Limpar os recursos que estão sendo usados.
        /// </summary>
        /// <param name="disposing">true se for necessário descartar os recursos gerenciados; caso contrário, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Código gerado pelo Windows Form Designer

        /// <summary>
        /// Método necessário para suporte ao Designer - não modifique 
        /// o conteúdo deste método com o editor de código.
        /// </summary>
        private void InitializeComponent()
        {
            this.components = new System.ComponentModel.Container();
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(FrmPrincipal));
            this.pnlAba = new System.Windows.Forms.Panel();
            this.LblMin = new System.Windows.Forms.Label();
            this.LblFechar = new System.Windows.Forms.Label();
            this.dgvCompromissos = new System.Windows.Forms.DataGridView();
            this.lblPesquisar = new System.Windows.Forms.Label();
            this.lblAlterar = new System.Windows.Forms.Label();
            this.lblAdd = new System.Windows.Forms.Label();
            this.picRefresh = new System.Windows.Forms.PictureBox();
            this.lblExcluir = new System.Windows.Forms.Label();
            this.pnlPesquisar = new System.Windows.Forms.Panel();
            this.picFechaPesquisa = new System.Windows.Forms.PictureBox();
            this.picPesquisar = new System.Windows.Forms.PictureBox();
            this.grpPesquisar = new System.Windows.Forms.GroupBox();
            this.txtPesquisa = new System.Windows.Forms.TextBox();
            this.grpTipoPesquisa = new System.Windows.Forms.GroupBox();
            this.rdbNome = new System.Windows.Forms.RadioButton();
            this.rdbData = new System.Windows.Forms.RadioButton();
            this.tmrAbrirPesquisar = new System.Windows.Forms.Timer(this.components);
            this.tmrFecharPesquisar = new System.Windows.Forms.Timer(this.components);
            this.pnlAddAlt = new System.Windows.Forms.Panel();
            this.lblAddAltCompromisso = new System.Windows.Forms.Label();
            this.label9 = new System.Windows.Forms.Label();
            this.txtLugar = new System.Windows.Forms.TextBox();
            this.mskHora = new System.Windows.Forms.MaskedTextBox();
            this.mskData = new System.Windows.Forms.MaskedTextBox();
            this.picFechaAddAlt = new System.Windows.Forms.PictureBox();
            this.label6 = new System.Windows.Forms.Label();
            this.label5 = new System.Windows.Forms.Label();
            this.label1 = new System.Windows.Forms.Label();
            this.txtTitulo = new System.Windows.Forms.TextBox();
            this.tmrAbrirAddAlt = new System.Windows.Forms.Timer(this.components);
            this.tmrFecharAddAlt = new System.Windows.Forms.Timer(this.components);
            this.pnlAba.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.dgvCompromissos)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.picRefresh)).BeginInit();
            this.pnlPesquisar.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.picFechaPesquisa)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.picPesquisar)).BeginInit();
            this.grpPesquisar.SuspendLayout();
            this.grpTipoPesquisa.SuspendLayout();
            this.pnlAddAlt.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.picFechaAddAlt)).BeginInit();
            this.SuspendLayout();
            // 
            // pnlAba
            // 
            this.pnlAba.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(70)))), ((int)(((byte)(70)))), ((int)(((byte)(70)))));
            this.pnlAba.Controls.Add(this.LblMin);
            this.pnlAba.Controls.Add(this.LblFechar);
            this.pnlAba.Location = new System.Drawing.Point(0, 0);
            this.pnlAba.Name = "pnlAba";
            this.pnlAba.Size = new System.Drawing.Size(647, 32);
            this.pnlAba.TabIndex = 100;
            this.pnlAba.MouseDown += new System.Windows.Forms.MouseEventHandler(this.pnlAba_MouseDown);
            this.pnlAba.MouseMove += new System.Windows.Forms.MouseEventHandler(this.pnlAba_MouseMove);
            // 
            // LblMin
            // 
            this.LblMin.AutoSize = true;
            this.LblMin.Font = new System.Drawing.Font("Arial", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.LblMin.ForeColor = System.Drawing.Color.White;
            this.LblMin.Location = new System.Drawing.Point(594, 6);
            this.LblMin.Name = "LblMin";
            this.LblMin.Size = new System.Drawing.Size(18, 19);
            this.LblMin.TabIndex = 1;
            this.LblMin.Text = "_";
            this.LblMin.Click += new System.EventHandler(this.LblMin_Click);
            // 
            // LblFechar
            // 
            this.LblFechar.AutoSize = true;
            this.LblFechar.Font = new System.Drawing.Font("Arial", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.LblFechar.ForeColor = System.Drawing.Color.White;
            this.LblFechar.Location = new System.Drawing.Point(619, 8);
            this.LblFechar.Name = "LblFechar";
            this.LblFechar.Size = new System.Drawing.Size(20, 19);
            this.LblFechar.TabIndex = 0;
            this.LblFechar.Text = "X";
            this.LblFechar.Click += new System.EventHandler(this.LblFechar_Click);
            // 
            // dgvCompromissos
            // 
            this.dgvCompromissos.BackgroundColor = System.Drawing.Color.FromArgb(((int)(((byte)(54)))), ((int)(((byte)(54)))), ((int)(((byte)(54)))));
            this.dgvCompromissos.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.dgvCompromissos.Location = new System.Drawing.Point(101, 81);
            this.dgvCompromissos.Name = "dgvCompromissos";
            this.dgvCompromissos.Size = new System.Drawing.Size(546, 286);
            this.dgvCompromissos.TabIndex = 1;
            // 
            // lblPesquisar
            // 
            this.lblPesquisar.AutoSize = true;
            this.lblPesquisar.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(49)))), ((int)(((byte)(37)))), ((int)(((byte)(129)))));
            this.lblPesquisar.Font = new System.Drawing.Font("Arial Rounded MT Bold", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lblPesquisar.ForeColor = System.Drawing.Color.White;
            this.lblPesquisar.Location = new System.Drawing.Point(0, 79);
            this.lblPesquisar.Name = "lblPesquisar";
            this.lblPesquisar.Padding = new System.Windows.Forms.Padding(7, 27, 7, 27);
            this.lblPesquisar.Size = new System.Drawing.Size(102, 72);
            this.lblPesquisar.TabIndex = 2;
            this.lblPesquisar.Text = "Pesquisar";
            this.lblPesquisar.Click += new System.EventHandler(this.lblPesquisar_Click);
            // 
            // lblAlterar
            // 
            this.lblAlterar.AutoSize = true;
            this.lblAlterar.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(51)))), ((int)(((byte)(81)))), ((int)(((byte)(144)))));
            this.lblAlterar.Font = new System.Drawing.Font("Arial Rounded MT Bold", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lblAlterar.ForeColor = System.Drawing.Color.White;
            this.lblAlterar.Location = new System.Drawing.Point(0, 223);
            this.lblAlterar.Name = "lblAlterar";
            this.lblAlterar.Padding = new System.Windows.Forms.Padding(20, 27, 18, 27);
            this.lblAlterar.Size = new System.Drawing.Size(102, 72);
            this.lblAlterar.TabIndex = 3;
            this.lblAlterar.Text = "Alterar";
            this.lblAlterar.Click += new System.EventHandler(this.lblAlterar_Click);
            // 
            // lblAdd
            // 
            this.lblAdd.AutoSize = true;
            this.lblAdd.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(55)))), ((int)(((byte)(56)))), ((int)(((byte)(122)))));
            this.lblAdd.Font = new System.Drawing.Font("Arial Rounded MT Bold", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lblAdd.ForeColor = System.Drawing.Color.White;
            this.lblAdd.Location = new System.Drawing.Point(0, 151);
            this.lblAdd.Name = "lblAdd";
            this.lblAdd.Padding = new System.Windows.Forms.Padding(9, 27, 9, 27);
            this.lblAdd.Size = new System.Drawing.Size(103, 72);
            this.lblAdd.TabIndex = 4;
            this.lblAdd.Text = "Adicionar";
            this.lblAdd.Click += new System.EventHandler(this.lblAdd_Click);
            // 
            // picRefresh
            // 
            this.picRefresh.Image = ((System.Drawing.Image)(resources.GetObject("picRefresh.Image")));
            this.picRefresh.Location = new System.Drawing.Point(599, 33);
            this.picRefresh.Name = "picRefresh";
            this.picRefresh.Size = new System.Drawing.Size(45, 45);
            this.picRefresh.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
            this.picRefresh.TabIndex = 5;
            this.picRefresh.TabStop = false;
            this.picRefresh.Click += new System.EventHandler(this.picRefresh_Click);
            // 
            // lblExcluir
            // 
            this.lblExcluir.AutoSize = true;
            this.lblExcluir.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(34)))), ((int)(((byte)(81)))), ((int)(((byte)(163)))));
            this.lblExcluir.Font = new System.Drawing.Font("Arial Rounded MT Bold", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lblExcluir.ForeColor = System.Drawing.Color.White;
            this.lblExcluir.Location = new System.Drawing.Point(0, 295);
            this.lblExcluir.Name = "lblExcluir";
            this.lblExcluir.Padding = new System.Windows.Forms.Padding(20, 27, 20, 27);
            this.lblExcluir.Size = new System.Drawing.Size(102, 72);
            this.lblExcluir.TabIndex = 6;
            this.lblExcluir.Text = "Excluir";
            this.lblExcluir.Click += new System.EventHandler(this.lblExcluir_Click);
            // 
            // pnlPesquisar
            // 
            this.pnlPesquisar.BackColor = System.Drawing.Color.White;
            this.pnlPesquisar.Controls.Add(this.picFechaPesquisa);
            this.pnlPesquisar.Controls.Add(this.picPesquisar);
            this.pnlPesquisar.Controls.Add(this.grpPesquisar);
            this.pnlPesquisar.Controls.Add(this.grpTipoPesquisa);
            this.pnlPesquisar.Font = new System.Drawing.Font("Arial Rounded MT Bold", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.pnlPesquisar.Location = new System.Drawing.Point(102, -169);
            this.pnlPesquisar.Name = "pnlPesquisar";
            this.pnlPesquisar.Size = new System.Drawing.Size(544, 199);
            this.pnlPesquisar.TabIndex = 0;
            // 
            // picFechaPesquisa
            // 
            this.picFechaPesquisa.Image = ((System.Drawing.Image)(resources.GetObject("picFechaPesquisa.Image")));
            this.picFechaPesquisa.Location = new System.Drawing.Point(96, 141);
            this.picFechaPesquisa.Name = "picFechaPesquisa";
            this.picFechaPesquisa.Size = new System.Drawing.Size(42, 42);
            this.picFechaPesquisa.TabIndex = 5;
            this.picFechaPesquisa.TabStop = false;
            this.picFechaPesquisa.Click += new System.EventHandler(this.picFechaPesquisa_Click);
            // 
            // picPesquisar
            // 
            this.picPesquisar.Image = ((System.Drawing.Image)(resources.GetObject("picPesquisar.Image")));
            this.picPesquisar.Location = new System.Drawing.Point(410, 142);
            this.picPesquisar.Name = "picPesquisar";
            this.picPesquisar.Size = new System.Drawing.Size(42, 42);
            this.picPesquisar.TabIndex = 4;
            this.picPesquisar.TabStop = false;
            this.picPesquisar.Click += new System.EventHandler(this.picPesquisar_Click);
            // 
            // grpPesquisar
            // 
            this.grpPesquisar.Controls.Add(this.txtPesquisa);
            this.grpPesquisar.Location = new System.Drawing.Point(143, 17);
            this.grpPesquisar.Name = "grpPesquisar";
            this.grpPesquisar.Size = new System.Drawing.Size(256, 53);
            this.grpPesquisar.TabIndex = 3;
            this.grpPesquisar.TabStop = false;
            this.grpPesquisar.Text = "Pesquisar";
            // 
            // txtPesquisa
            // 
            this.txtPesquisa.Location = new System.Drawing.Point(6, 19);
            this.txtPesquisa.Name = "txtPesquisa";
            this.txtPesquisa.Size = new System.Drawing.Size(244, 23);
            this.txtPesquisa.TabIndex = 0;
            // 
            // grpTipoPesquisa
            // 
            this.grpTipoPesquisa.Controls.Add(this.rdbNome);
            this.grpTipoPesquisa.Controls.Add(this.rdbData);
            this.grpTipoPesquisa.Location = new System.Drawing.Point(128, 81);
            this.grpTipoPesquisa.Name = "grpTipoPesquisa";
            this.grpTipoPesquisa.Size = new System.Drawing.Size(287, 51);
            this.grpTipoPesquisa.TabIndex = 2;
            this.grpTipoPesquisa.TabStop = false;
            this.grpTipoPesquisa.Text = "Tipo de Pesquisa";
            // 
            // rdbNome
            // 
            this.rdbNome.AutoSize = true;
            this.rdbNome.Location = new System.Drawing.Point(106, 20);
            this.rdbNome.Name = "rdbNome";
            this.rdbNome.Size = new System.Drawing.Size(175, 19);
            this.rdbNome.TabIndex = 1;
            this.rdbNome.Text = "Nome do Compromisso";
            this.rdbNome.UseVisualStyleBackColor = true;
            // 
            // rdbData
            // 
            this.rdbData.AutoSize = true;
            this.rdbData.Checked = true;
            this.rdbData.Location = new System.Drawing.Point(20, 20);
            this.rdbData.Name = "rdbData";
            this.rdbData.Size = new System.Drawing.Size(56, 19);
            this.rdbData.TabIndex = 0;
            this.rdbData.TabStop = true;
            this.rdbData.Text = "Data";
            this.rdbData.UseVisualStyleBackColor = true;
            // 
            // tmrAbrirPesquisar
            // 
            this.tmrAbrirPesquisar.Interval = 10;
            this.tmrAbrirPesquisar.Tick += new System.EventHandler(this.tmrAbrirPesquisar_Tick);
            // 
            // tmrFecharPesquisar
            // 
            this.tmrFecharPesquisar.Interval = 10;
            this.tmrFecharPesquisar.Tick += new System.EventHandler(this.tmrFecharPesquisar_Tick);
            // 
            // pnlAddAlt
            // 
            this.pnlAddAlt.BackColor = System.Drawing.Color.White;
            this.pnlAddAlt.Controls.Add(this.lblAddAltCompromisso);
            this.pnlAddAlt.Controls.Add(this.label9);
            this.pnlAddAlt.Controls.Add(this.txtLugar);
            this.pnlAddAlt.Controls.Add(this.mskHora);
            this.pnlAddAlt.Controls.Add(this.mskData);
            this.pnlAddAlt.Controls.Add(this.picFechaAddAlt);
            this.pnlAddAlt.Controls.Add(this.label6);
            this.pnlAddAlt.Controls.Add(this.label5);
            this.pnlAddAlt.Controls.Add(this.label1);
            this.pnlAddAlt.Controls.Add(this.txtTitulo);
            this.pnlAddAlt.Font = new System.Drawing.Font("Arial Rounded MT Bold", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.pnlAddAlt.Location = new System.Drawing.Point(645, 29);
            this.pnlAddAlt.Name = "pnlAddAlt";
            this.pnlAddAlt.Size = new System.Drawing.Size(278, 341);
            this.pnlAddAlt.TabIndex = 101;
            // 
            // lblAddAltCompromisso
            // 
            this.lblAddAltCompromisso.AutoSize = true;
            this.lblAddAltCompromisso.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
            this.lblAddAltCompromisso.Location = new System.Drawing.Point(128, 283);
            this.lblAddAltCompromisso.Name = "lblAddAltCompromisso";
            this.lblAddAltCompromisso.Padding = new System.Windows.Forms.Padding(20, 11, 20, 12);
            this.lblAddAltCompromisso.Size = new System.Drawing.Size(127, 43);
            this.lblAddAltCompromisso.TabIndex = 11;
            this.lblAddAltCompromisso.Text = "Adicionar";
            this.lblAddAltCompromisso.Click += new System.EventHandler(this.lblAddAltCompromisso_Click);
            // 
            // label9
            // 
            this.label9.AutoSize = true;
            this.label9.Location = new System.Drawing.Point(17, 203);
            this.label9.Name = "label9";
            this.label9.Size = new System.Drawing.Size(55, 18);
            this.label9.TabIndex = 10;
            this.label9.Text = "Lugar";
            // 
            // txtLugar
            // 
            this.txtLugar.Font = new System.Drawing.Font("Arial", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.txtLugar.Location = new System.Drawing.Point(19, 225);
            this.txtLugar.Name = "txtLugar";
            this.txtLugar.Size = new System.Drawing.Size(236, 26);
            this.txtLugar.TabIndex = 9;
            // 
            // mskHora
            // 
            this.mskHora.Location = new System.Drawing.Point(19, 161);
            this.mskHora.Mask = "90:00";
            this.mskHora.Name = "mskHora";
            this.mskHora.Size = new System.Drawing.Size(236, 26);
            this.mskHora.TabIndex = 8;
            this.mskHora.ValidatingType = typeof(System.DateTime);
            // 
            // mskData
            // 
            this.mskData.Location = new System.Drawing.Point(19, 96);
            this.mskData.Mask = "00/00/0000";
            this.mskData.Name = "mskData";
            this.mskData.Size = new System.Drawing.Size(236, 26);
            this.mskData.TabIndex = 7;
            this.mskData.ValidatingType = typeof(System.DateTime);
            // 
            // picFechaAddAlt
            // 
            this.picFechaAddAlt.Image = ((System.Drawing.Image)(resources.GetObject("picFechaAddAlt.Image")));
            this.picFechaAddAlt.Location = new System.Drawing.Point(19, 284);
            this.picFechaAddAlt.Name = "picFechaAddAlt";
            this.picFechaAddAlt.Size = new System.Drawing.Size(42, 42);
            this.picFechaAddAlt.TabIndex = 6;
            this.picFechaAddAlt.TabStop = false;
            this.picFechaAddAlt.Click += new System.EventHandler(this.picFechaAddAlt_Click);
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.Location = new System.Drawing.Point(17, 140);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(68, 18);
            this.label6.TabIndex = 3;
            this.label6.Text = "Horário";
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Location = new System.Drawing.Point(17, 75);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(46, 18);
            this.label5.TabIndex = 2;
            this.label5.Text = "Data";
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(17, 11);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(52, 18);
            this.label1.TabIndex = 1;
            this.label1.Text = "Título";
            // 
            // txtTitulo
            // 
            this.txtTitulo.Font = new System.Drawing.Font("Arial", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.txtTitulo.Location = new System.Drawing.Point(19, 33);
            this.txtTitulo.Name = "txtTitulo";
            this.txtTitulo.Size = new System.Drawing.Size(236, 26);
            this.txtTitulo.TabIndex = 0;
            // 
            // tmrAbrirAddAlt
            // 
            this.tmrAbrirAddAlt.Interval = 10;
            this.tmrAbrirAddAlt.Tick += new System.EventHandler(this.tmrAbrirAddAlt_Tick);
            // 
            // tmrFecharAddAlt
            // 
            this.tmrFecharAddAlt.Interval = 10;
            this.tmrFecharAddAlt.Tick += new System.EventHandler(this.tmrFecharAddAlt_Tick);
            // 
            // FrmPrincipal
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(54)))), ((int)(((byte)(54)))), ((int)(((byte)(54)))));
            this.ClientSize = new System.Drawing.Size(645, 367);
            this.Controls.Add(this.pnlAba);
            this.Controls.Add(this.pnlAddAlt);
            this.Controls.Add(this.pnlPesquisar);
            this.Controls.Add(this.dgvCompromissos);
            this.Controls.Add(this.lblExcluir);
            this.Controls.Add(this.picRefresh);
            this.Controls.Add(this.lblAdd);
            this.Controls.Add(this.lblAlterar);
            this.Controls.Add(this.lblPesquisar);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.None;
            this.Name = "FrmPrincipal";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Form1";
            this.pnlAba.ResumeLayout(false);
            this.pnlAba.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.dgvCompromissos)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.picRefresh)).EndInit();
            this.pnlPesquisar.ResumeLayout(false);
            ((System.ComponentModel.ISupportInitialize)(this.picFechaPesquisa)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.picPesquisar)).EndInit();
            this.grpPesquisar.ResumeLayout(false);
            this.grpPesquisar.PerformLayout();
            this.grpTipoPesquisa.ResumeLayout(false);
            this.grpTipoPesquisa.PerformLayout();
            this.pnlAddAlt.ResumeLayout(false);
            this.pnlAddAlt.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.picFechaAddAlt)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Panel pnlAba;
        private System.Windows.Forms.Label LblFechar;
        private System.Windows.Forms.Label LblMin;
        private System.Windows.Forms.DataGridView dgvCompromissos;
        private System.Windows.Forms.Label lblPesquisar;
        private System.Windows.Forms.Label lblAlterar;
        private System.Windows.Forms.Label lblAdd;
        private System.Windows.Forms.PictureBox picRefresh;
        private System.Windows.Forms.Label lblExcluir;
        private System.Windows.Forms.Panel pnlPesquisar;
        private System.Windows.Forms.GroupBox grpPesquisar;
        private System.Windows.Forms.TextBox txtPesquisa;
        private System.Windows.Forms.GroupBox grpTipoPesquisa;
        private System.Windows.Forms.RadioButton rdbNome;
        private System.Windows.Forms.RadioButton rdbData;
        private System.Windows.Forms.Timer tmrAbrirPesquisar;
        private System.Windows.Forms.Timer tmrFecharPesquisar;
        private System.Windows.Forms.PictureBox picFechaPesquisa;
        private System.Windows.Forms.PictureBox picPesquisar;
        private System.Windows.Forms.Panel pnlAddAlt;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.TextBox txtTitulo;
        private System.Windows.Forms.PictureBox picFechaAddAlt;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.Timer tmrAbrirAddAlt;
        private System.Windows.Forms.Timer tmrFecharAddAlt;
        private System.Windows.Forms.Label label9;
        private System.Windows.Forms.TextBox txtLugar;
        private System.Windows.Forms.MaskedTextBox mskHora;
        private System.Windows.Forms.MaskedTextBox mskData;
        private System.Windows.Forms.Label lblAddAltCompromisso;
    }
}

