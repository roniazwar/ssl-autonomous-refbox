#include <QObject>
namespace Ui { class GuiControls; }
namespace Ui { class GuiPropertiesDlgClass; }

class GuiActions : public QObject
{
Q_OBJECT
Ui::GuiControls* m_gui;
Ui::GuiPropertiesDlgClass* prop_gui;
public:
    GuiActions(Ui::GuiControls*, QObject* = 0);
    ~GuiActions();
    void connectActions();

signals:
    void goto_frame(int);

public slots:
    void fullscreen(bool);
    void initializeSlider(int, int, int, int, int);
    void resizeSlider(int);
    void change_record_button(QString);
    void change_play_button(QString);
    void change_ball_status(QString);
    void change_ball_last_touched(QString);
    void update_frame(int);
    void slider_action(int);
    void change_show_rules(QString);
    void showPropertiesDlg();
private:
};
