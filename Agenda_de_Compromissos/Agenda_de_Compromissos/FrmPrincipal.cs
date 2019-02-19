using System;
using System.Windows.Forms;

namespace Agenda_de_Compromissos
{
    public partial class FrmPrincipal : Form
    {
        Agenda_de_CompromissosDataSet.COMPROMISSODataTable DTCompromissos = new Agenda_de_CompromissosDataSet.COMPROMISSODataTable();
        Agenda_de_CompromissosDataSetTableAdapters.COMPROMISSOTableAdapter TACompromissos = new Agenda_de_CompromissosDataSetTableAdapters.COMPROMISSOTableAdapter();

        int X = 0;
        int Y = 0;
        int IdAtual;
        Boolean TemAbaAberta = false;

        //Programa feito por:
        //Guilherme Devechi - 13
        //Guilherme dos Santos - 14
        //Guilherme Quaiati - 15
        //Rodrigo Simonet - 28

        public FrmPrincipal()
        {
            InitializeComponent();
        }

        //Funções da Aba Superior
        private void LblFechar_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Programa feito por:\n" +
                "Guilherme dos Santos Moraes - 14\n" +
                "Guilherme Devechi - 14\n" +
                "Guilherme Quaiati - 15\n" +
                "Rodrigo Simonet - 28\n", "Créditos",MessageBoxButtons.OK,MessageBoxIcon.Information);
            Close();
        }
        private void LblMin_Click(object sender, EventArgs e)
        {
            this.WindowState = FormWindowState.Minimized;
        }
        private void pnlAba_MouseMove(object sender, MouseEventArgs e)
        {
            if (e.Button != MouseButtons.Left) return;
            this.Left = X + MousePosition.X;
            this.Top = Y + MousePosition.Y;
        }
        private void pnlAba_MouseDown(object sender, MouseEventArgs e)
        {
            if (e.Button != MouseButtons.Left) return;
            X = this.Left - MousePosition.X;
            Y = this.Top - MousePosition.Y;
        }

        //Timers de Animação
        private void tmrFecharPesquisar_Tick(object sender, EventArgs e)
        {
            pnlPesquisar.Top += -6;
            if (pnlPesquisar.Top <= -170) tmrFecharPesquisar.Stop();
        }
        private void tmrAbrirPesquisar_Tick(object sender, EventArgs e)
        {
            pnlPesquisar.Top += 6;
            if (pnlPesquisar.Top >= 30) tmrAbrirPesquisar.Stop();

        }
        private void tmrAbrirAddAlt_Tick(object sender, EventArgs e)
        {
            pnlAddAlt.Left += -5;
            if (pnlAddAlt.Left <= 370) tmrAbrirAddAlt.Stop();
        }
        private void tmrFecharAddAlt_Tick(object sender, EventArgs e)
        {
            pnlAddAlt.Left += 5;
            if (pnlAddAlt.Left >= 645) tmrFecharAddAlt.Stop();
        }

        //Funções OnClick
        private void picFechaPesquisa_Click(object sender, EventArgs e)
        {
            tmrFecharPesquisar.Start();
            TemAbaAberta = false;
        }
        private void picFechaAddAlt_Click(object sender, EventArgs e)
        {
            tmrFecharAddAlt.Start();
            TemAbaAberta = false;
        }
        private void picRefresh_Click(object sender, EventArgs e)
        {
            MostrarCompromissos();
        }
        private void picPesquisar_Click(object sender, EventArgs e)
        {
            if (!PesquisarCompromissos()) return;
            TemAbaAberta = false;
            tmrFecharPesquisar.Start();
        }

        private void lblExcluir_Click(object sender, EventArgs e)
        {
            if (MessageBox.Show("Você tem certeza que deseja excluir esse compromisso?", "Confirmação", MessageBoxButtons.YesNo, MessageBoxIcon.Question) == DialogResult.Yes)
            {
                try
                {
                    SelecionarIndex("Excluir");
                    TACompromissos.DELETAR_COMPROMISSO(IdAtual);
                    MessageBox.Show("Compromisso excluido com sucesso", "Sucesso", MessageBoxButtons.OK, MessageBoxIcon.Information);
                    MostrarCompromissos();
                }
                catch (Exception ex)
                {
                    MessageBox.Show("Erro ao Excluir Compromisso", "Erro", MessageBoxButtons.OK, MessageBoxIcon.Error);
                }
            }
        }
        private void lblAlterar_Click(object sender, EventArgs e)
        {
            if (TemAbaAberta) return;
            if (!SelecionarIndex("Alterar")) return;
            lblAddAltCompromisso.Text = "Alterar";
            TemAbaAberta = true;
            tmrAbrirAddAlt.Start();
        }
        private void lblPesquisar_Click(object sender, EventArgs e)
        {
            if (TemAbaAberta) return;
            tmrAbrirPesquisar.Start();
            TemAbaAberta = true;
        }
        private void lblAdd_Click(object sender, EventArgs e)
        {
            if (TemAbaAberta) return;
            lblAddAltCompromisso.Text = "Adicionar";
            tmrAbrirAddAlt.Start();
            TemAbaAberta = true;
        }
        private void lblAddAltCompromisso_Click(object sender, EventArgs e)
        {
            string titulo = txtTitulo.Text;
            string dia = mskData.Text;
            string hora = mskHora.Text;
            string lugar = txtLugar.Text;

            if (TemCampoNull(titulo, dia, hora, lugar)) return;

            if (lblAddAltCompromisso.Text == "Adicionar")
            {
                if (CadastrarCompromisso(titulo, dia, hora, lugar))
                {
                    TemAbaAberta = false;
                    txtTitulo.Clear();
                    mskData.Clear();
                    mskHora.Clear();
                    txtLugar.Clear();
                    tmrFecharAddAlt.Start();
                }
            }
            if(lblAddAltCompromisso.Text == "Alterar")
            {
                if (AlterarCompromisso(titulo, dia, hora, lugar))
                {
                    TemAbaAberta = false;
                    txtTitulo.Clear();
                    mskData.Clear();
                    mskHora.Clear();
                    txtLugar.Clear();
                    tmrFecharAddAlt.Start();
                }
            }
            MostrarCompromissos();
        }

        //Testes e Funções
        private Boolean CadastrarCompromisso(string titulo, string dia, string hora, string lugar)
        {
            try
            {
                TACompromissos.INSERIR_COMPROMISSO(titulo, dia, hora, lugar);
                MessageBox.Show("Compromisso Cadastrado com Sucesso", "Sucesso", MessageBoxButtons.OK, MessageBoxIcon.Information);
                return true;
            }
            catch (Exception ex)
            {
                MessageBox.Show("Erro ao Cadastrar compromisso" + ex.Message, "Erro", MessageBoxButtons.OK, MessageBoxIcon.Error);
                return false;
            }
        }
        private Boolean TemCampoNull(params string[] campos)
        {
            for(int cont = 0; cont < campos.Length; cont++)
            {
                if(campos[cont].Replace(" ", "").Replace("/","").Replace(":","") == "")
                {
                    MessageBox.Show("Há campos Vazios");
                    return true;
                }
            }
            return false;
        }
        private Boolean PesquisarCompromissos()
        {
            string Pesquisa=txtPesquisa.Text;

            if (TemCampoNull(Pesquisa)) return false;

            try
            {
                if (rdbData.Checked)
                    TACompromissos.FillByBUSCA_COMPROMISSO_DATA(DTCompromissos, Pesquisa);
                else
                    TACompromissos.FillByBUSCA_COMPROMISSO_NOME(DTCompromissos, Pesquisa);
                dgvCompromissos.DataSource = DTCompromissos;
                return true;
            }
            catch(Exception ex)
            {
                MessageBox.Show("Ocorreu um erro durante a pesquisa de compromissos\n"+ex.Message,"Erro",MessageBoxButtons.OK,MessageBoxIcon.Error);
                return false;
            }
        }
        private Boolean SelecionarIndex(string alt)
        {
            try
            {
                DataGridViewRow tupla = dgvCompromissos.CurrentRow;
                IdAtual = (int)tupla.Cells["Cod"].Value;
                if (alt == "Alterar")
                {
                    txtTitulo.Text = tupla.Cells["Titulo"].Value.ToString();
                    mskData.Text = tupla.Cells["Data"].Value.ToString();
                    mskHora.Text = tupla.Cells["Horário"].Value.ToString();
                    txtLugar.Text = tupla.Cells["Lugar"].Value.ToString();
                }
                return true;
            }
            catch (Exception ex)
            {
                MessageBox.Show("Selecione um compromisso\n" + ex.Message, "Erro", MessageBoxButtons.OK, MessageBoxIcon.Error);
                return false;
            }
        }
        private Boolean AlterarCompromisso(string titulo,string data,string hora, string local)
        {
            try
            {
                TACompromissos.ALTERAR_COMPROMISSO(IdAtual, titulo, data, hora, local);
                MessageBox.Show("Compromisso Alterado com sucesso", "Sucesso", MessageBoxButtons.OK, MessageBoxIcon.Information);
                return true;
            }
            catch (Exception ex)
            {
                MessageBox.Show("Erro ao alterar o compromisso" + ex.Message, "Erro", MessageBoxButtons.OK, MessageBoxIcon.Error);
                return false;
            }
        }
        private void MostrarCompromissos()
        {
            try
            {
                TACompromissos.Fill(DTCompromissos);
                dgvCompromissos.DataSource = DTCompromissos;
            }
            catch (Exception ex)
            {
                MessageBox.Show("Erro ao pesquisar Compromissos\n" + ex.Message, "Erro", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
        }

        
    }
}
