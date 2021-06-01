 //---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TKreatorPostaci *KreatorPostaci;
//---------------------------------------------------------------------------
__fastcall TKreatorPostaci::TKreatorPostaci(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------



void __fastcall TKreatorPostaci::Button12Click(TObject *Sender)
{
Panel5->Visible=true;
Button13->Visible=true;
Button14->Visible=true;
Panel7->Visible=true;

        randomize();

        if(RadioGroup1->ItemIndex==5||RadioGroup2->ItemIndex==5)
        {
                sila = random(15) +2;
        }
        else
        {
                sila = random(15) +3;
        }
        if(RadioGroup1->ItemIndex==5 || RadioGroup1->ItemIndex==1||RadioGroup2->ItemIndex==5 || RadioGroup2->ItemIndex==1)
        {
                zrecznosc = random(10) +10;
        }
        else if(RadioGroup1->ItemIndex==3||RadioGroup2->ItemIndex==3)
        {
        zrecznosc = random(10) +8;
        }
        else
        {
        zrecznosc = random(10) +9;
        }
        if(RadioGroup1->ItemIndex==1||RadioGroup2->ItemIndex==1)
        {
        kondycja = random(11) +5;
        }
        else if (RadioGroup1->ItemIndex==3||RadioGroup2->ItemIndex==3)
        {
        kondycja = random(11) +6;
        }
        else
        {
        kondycja = random(11) +6;
        }
        if(RadioGroup1->ItemIndex==4||RadioGroup2->ItemIndex==4)
        {
        inteligencja = random(10) +9;
        }
        else
        {
        inteligencja = random(10) +8;
        }
        if(RadioGroup1->ItemIndex==4||RadioGroup2->ItemIndex==4)
        {
        madrosc   = random(15) +2;
        }
        else
        {
        madrosc   = random(15) +3;
        }
        if(RadioGroup1->ItemIndex==3||RadioGroup2->ItemIndex==3)
        {
        charyzma = random(10) +6;
        }
        else
        {
        charyzma = random(10) +8;
        }
        crzut = sila+zrecznosc+kondycja+inteligencja+madrosc+charyzma;
        rzut = 0;

        Label5->Caption= sila;
        Label7->Caption= zrecznosc;
        Label9->Caption= kondycja;
        Label11->Caption= inteligencja;
        Label13->Caption= madrosc;
        Label17->Caption= charyzma;
        Label16->Caption=crzut;
        Label18->Caption = rzut;


}
//---------------------------------------------------------------------------




void __fastcall TKreatorPostaci::Button15Click(TObject *Sender)
{
 Close();
}
//---------------------------------------------------------------------------



void __fastcall TKreatorPostaci::Button3Click(TObject *Sender)
{
         if (sila<18 && rzut>0)
         {
                sila= sila+1;
                rzut = rzut -1;
                Label5->Caption = sila;
                Label18->Caption = rzut;
         }
}
//---------------------------------------------------------------------------

void __fastcall TKreatorPostaci::Button16Click(TObject *Sender)
{
       if (sila>3)
        {
                sila= sila-1;
                rzut = rzut +1;
                Label5->Caption = sila;
                Label18->Caption = rzut;
        }

}
//---------------------------------------------------------------------------

void __fastcall TKreatorPostaci::Button13Click(TObject *Sender)
{
        zsila=sila;
        zzrecznosc=zrecznosc;
        zkondycja=kondycja;
        zinteligencja=inteligencja;
        zmadrosc=madrosc;
        zcharyzma=charyzma;
        nrzut=crzut;
}
//---------------------------------------------------------------------------

void __fastcall TKreatorPostaci::Button14Click(TObject *Sender)
{
        Label5->Caption= zsila;
        Label7->Caption= zzrecznosc;
        Label9->Caption= zkondycja;
        Label11->Caption= zinteligencja;
        Label13->Caption= zmadrosc;
        Label17->Caption= zcharyzma;
        Label16->Caption= nrzut;


}
//---------------------------------------------------------------------------

void __fastcall TKreatorPostaci::Button2Click(TObject *Sender)
{
        if (zrecznosc>9)
                {
                zrecznosc= zrecznosc-1;
                rzut = rzut +1;
                Label7->Caption = zrecznosc;
                Label18->Caption = rzut;
        }
}
//---------------------------------------------------------------------------


void __fastcall TKreatorPostaci::Button4Click(TObject *Sender)
{
        if (kondycja<17 && rzut>0)
        {
                kondycja= kondycja+1;
                rzut = rzut -1;
                Label9->Caption = kondycja;
                Label18->Caption = rzut;
        }
}
//---------------------------------------------------------------------------

void __fastcall TKreatorPostaci::Button10Click(TObject *Sender)
{
        if(charyzma < 18 && rzut>0)
        {
                charyzma=charyzma +1;
                rzut = rzut -1;
                Label17->Caption= charyzma ;
                Label18->Caption=rzut;
        }

}
//---------------------------------------------------------------------------

void __fastcall TKreatorPostaci::Button1Click(TObject *Sender)
{
        if(zrecznosc < 19 && rzut>0)
        {
                zrecznosc=zrecznosc +1;
                rzut = rzut -1;
                Label7->Caption= zrecznosc ;
                Label18->Caption=rzut;
        }
}
//---------------------------------------------------------------------------

void __fastcall TKreatorPostaci::Button5Click(TObject *Sender)
{
        if (kondycja>6)
                {
                kondycja= kondycja-1;
                rzut = rzut +1;
                Label9->Caption = kondycja;
                Label18->Caption = rzut;
                }
}
//---------------------------------------------------------------------------

void __fastcall TKreatorPostaci::Button6Click(TObject *Sender)
{
        if(inteligencja < 18 && rzut>0)
        {
                inteligencja=inteligencja +1;
                rzut = rzut -1;
                Label11->Caption= inteligencja ;
                Label18->Caption=rzut;
        }
}
//---------------------------------------------------------------------------

void __fastcall TKreatorPostaci::Button7Click(TObject *Sender)
{
        if(inteligencja >8)
        {
                inteligencja=inteligencja -1;
                rzut = rzut +1;
                Label11->Caption= inteligencja ;
                Label18->Caption=rzut;
        }

}
//---------------------------------------------------------------------------

void __fastcall TKreatorPostaci::Button8Click(TObject *Sender)
{
        if(madrosc < 18 && rzut>0)
        {
                madrosc=madrosc +1;
                rzut = rzut -1;
                Label13->Caption= madrosc ;
                Label18->Caption=rzut;
        }

}
//---------------------------------------------------------------------------

void __fastcall TKreatorPostaci::Button9Click(TObject *Sender)
{
        if(madrosc >3)
        {
                madrosc=madrosc -1;
                rzut = rzut +1;
                Label13->Caption= madrosc ;
                Label18->Caption=rzut;
        }

}
//---------------------------------------------------------------------------

void __fastcall TKreatorPostaci::Button11Click(TObject *Sender)
{
        if(charyzma >8)
        {
                charyzma=charyzma -1;
                rzut = rzut +1;
                Label17->Caption= charyzma ;
                Label18->Caption=rzut;
        }

}
//---------------------------------------------------------------------------




void __fastcall TKreatorPostaci::PlecClick(TObject *Sender)
{
        Memo1->Lines->Text=Memo1->Lines->Text.Insert("To wybor natury estetyczniej i nie wplynie w zaden sposob na cechy bohatera.Moze miec jednak wplyw na to, czy jakis bohater niezalezny zainteresuje sie twoja postacia pod wzglêdem uczuciowym",Memo1->SelStart+1);
}
//---------------------------------------------------------------------------

void __fastcall TKreatorPostaci::FormCreate(TObject *Sender)
{
Memo1->Lines->Clear();
Memo1->Lines->Text=Memo1->Lines->Text.Insert("Nacisnij przycisk z napisem Plec aby rozpoczac tworzenie postaci",Memo1->SelStart+1);
Memo2->Lines->Clear();
Memo2->Lines->Text=Memo2->Lines->Text.Insert("Aby zakoñczyc proces tworzenia postaci, nacisnij przycisk 'Zapisz postac'.",Memo1->SelStart+1);
Image1->Picture->Bitmap->LoadFromFile("Images/0.bmp" );
}
//---------------------------------------------------------------------------


void __fastcall TKreatorPostaci::PlecContextPopup(TObject *Sender, TPoint &MousePos,
      bool &Handled)
{
Memo1->Lines->Text=Memo1->Lines->Text.Insert("To wybor natury estetyczniej i nie wplynie w zaden sposob na cechy bohatera.Moze miec jednak wplyw na to, czy jakis bohater niezalezny zainteresuje sie twoja postacia pod wzglêdem uczuciowym",Memo1->SelStart+1);
}
//---------------------------------------------------------------------------


void __fastcall TKreatorPostaci::RadioGroup3Click(TObject *Sender)
{
        Panel1->Visible= !RadioGroup3->ItemIndex ==1;
        Panel2->Visible= !RadioGroup3->ItemIndex ==0;


        if(RadioGroup3->ItemIndex==0)
        {
                        Memo1->Lines->Clear();
                Memo1->Lines->Text=Memo1->Lines->Text.Insert("Mê¿czyŸni ¿yj¹cy w Krainach mog¹ awansowac w dowolnej klasie. któr¹ wybior¹. Mog¹ by magami. Z³odziejamy czy znawcami sztuki wojennej.",Memo1->SelStart+1);
                plec = 1;
        }
        else
        {
                         Memo1->Lines->Clear();
                Memo1->Lines->Text=Memo1->Lines->Text.Insert("Kobiety ¿yj¹ce w Krainach mog¹ awansowac w dowolnej klasie, z ³atwosci¹ dorównuj¹c swym mêskim odpowiednikom pod wzglêdem wszystkich umiejêtnosci.",Memo1->SelStart+1);
        }

}
//---------------------------------------------------------------------------

void __fastcall TKreatorPostaci::RadioGroup1Click(TObject *Sender)
{
        Panel3->Visible= !RadioGroup3->ItemIndex !=-1;


        if(RadioGroup1->ItemIndex==0)
        {
        Image1->Picture->Bitmap->LoadFromFile("Images/1.bmp" );
        Memo1->Lines->Clear();
        Memo1->Lines->Text=Memo1->Lines->Text.Insert("LUDZIE: Ludzie s¹ dominuj¹ca ras¹ Faerunu. Przewodz¹ naznaczniejszym imperiom i królestwom Zapomnianych Krain. S¹ chyba najbardziej tolerancyjn¹ i towarzyska ze wszystkich rasd, z wyj¹tkiem mo¿e nizio³ków. ",Memo1->SelStart+1);


        }
        else if(RadioGroup1->ItemIndex==1)
        {
        Image1->Picture->Bitmap->LoadFromFile("Images/3.bmp" );
        Memo1->Lines->Clear();
        Memo1->Lines->Text=Memo1->Lines->Text.Insert("ELFY: Elfy s¹ nieco ni¿sze i szczuplejsze od ludzi. Twarze maj¹ piêkne i delikatne, a jêzyk melodyjny. Czêsto uwa¿a siê je za lekkomyœlne i oddalone od innych ras. Elfy interesuje piêkno natury, taniec, zabawa, œpiewy i inne tym podobne rzeczy. Maj¹ wyrafinowane poczucie humory i takie¿ same pieœni oraz poezjê.\n\n+1 Zrêcznoœæ\n-1 Kondycja",Memo1->SelStart+1);


        }
                else if(RadioGroup1->ItemIndex==2)
        {
        Image1->Picture->Bitmap->LoadFromFile("Images/5.bmp" );
                Memo1->Lines->Clear();
        Memo1->Lines->Text=Memo1->Lines->Text.Insert("PÓ£ELFY: Pólefy to wynik zmieszania krwi ludzi i elfów. S¹ bardzo przystojne i ³¹cz¹ w sobie zalety obu tych ras. Zazwyczaj posiadaj¹ ciekawoœæ, pomys³owoœæ i ambicje swych ludzkich przodków z wyrafinowanymi zmys³ami, mi³oœci¹ do natury i artystycznymi zdolnoœciami elfów. ",Memo1->SelStart+1);

        }
                else if(RadioGroup1->ItemIndex==3)
        {
        Image1->Picture->Bitmap->LoadFromFile("Images/7.bmp" );
                        Memo1->Lines->Clear();
        Memo1->Lines->Text=Memo1->Lines->Text.Insert("KRASNOLUDY: Krasnoludy s¹ niskimi, krêpymi osobnikami, ³atwymi do rozpoznania po wzroœcie i posturze. Maj¹ czerstwe policzki, ciemne oczy i takie¿ w³osy. Zazwyczaj s¹ uparte i ma³omówne. Z chêci¹ oddaj¹ siê ciê¿kiej pracy, nie posiadaj¹ za to za grosz poczucia humoru. Lubuj¹ siê w piwie i miodzie, ale nade wszystko kochaj¹ z³oto. \n\n+1 Kondycja\n-1 Zrêcznoœæ\n-2 Charyzma",Memo1->SelStart+1);

        }
                else if(RadioGroup1->ItemIndex==4)
        {
        Image1->Picture->Bitmap->LoadFromFile("Images/9.bmp" );
                        Memo1->Lines->Clear();
        Memo1->Lines->Text=Memo1->Lines->Text.Insert("GNOMY: Spokrewnione z krasnoludami gnomy s¹ znacznie mniejsze ni¿ ich odlegli kuzyni. Z dum¹ równie¿ zauwa¿aja, ¿e nie sa tak kragle jak ich brodaci bracia. Wiêkszoœæ gnomów ma ciemna lub br¹zowa skórê, bia³e w³osy i du¿e nosy. Charakteryzuja siê doœæ niezwyk³ym poczuciem humoru i przepadaja za p³ataniem psikusów. Ich mi³oœæ do natury przewy¿sza jedynie uwielbienie szlachetnych kamieni i bi¿uterii.\n\n+1 Inteligencja\n -1 M¹droœæ",Memo1->SelStart+1);

        }
                else if(RadioGroup1->ItemIndex==5)
        {
        Image1->Picture->Bitmap->LoadFromFile("Images/11.bmp" );
                        Memo1->Lines->Clear();
        Memo1->Lines->Text=Memo1->Lines->Text.Insert("NIZIO£KI: Nizio³ki to niscy, pulchni osobnicy bardzo przypominaj¹cy ma³ych ludzi o kr¹g³ych i czêsto rumianych twarzach. Maj¹ zazwyczaj krêcone w³osy, porastaj¹ce równie¿ ich stopy. Zdecydowanie wol¹ domowe zacisze od niebezpieczeñstw wi¹¿¹cych siê z poszukiwaniem przygód. Kochaj¹ spokojne i dostatnie ¿ycie, dobr¹ zabawê i rodzinne opowieœci. \n\n+1 Zrêcznoœæ\n-1 Si³a",Memo1->SelStart+1);

        }




}

//---------------------------------------------------------------------------




void __fastcall TKreatorPostaci::RadioGroup2Click(TObject *Sender)
{
{
Panel3->Visible= !RadioGroup3->ItemIndex !=-1;
        if(RadioGroup2->ItemIndex==0)
        {
        Image1->Picture->Bitmap->LoadFromFile("Images/2.bmp" );
        Memo1->Lines->Clear();
       Memo1->Lines->Text=Memo1->Lines->Text.Insert("LUDZIE: Ludzie s¹ dominuj¹ca ras¹ Faerunu. Przewodz¹ naznaczniejszym imperiom i królestwom Zapomnianych Krain. S¹ chyba najbardziej tolerancyjn¹ i towarzyska ze wszystkich rasd, z wyj¹tkiem mo¿e nizio³ków. ",Memo1->SelStart+1);

        }
        else if(RadioGroup2->ItemIndex==1)
        {
        Image1->Picture->Bitmap->LoadFromFile("Images/4.bmp" );
                Memo1->Lines->Clear();
       Memo1->Lines->Text=Memo1->Lines->Text.Insert("ELFY: Elfy s¹ nieco ni¿sze i szczuplejsze od ludzi. Twarze maj¹ piêkne i delikatne, a jêzyk melodyjny. Czêsto uwa¿a siê je za lekkomyœlne i oddalone od innych ras. Elfy interesuje piêkno natury, taniec, zabawa, œpiewy i inne tym podobne rzeczy. Maj¹ wyrafinowane poczucie humory i takie¿ same pieœni oraz poezjê.\n\n+1 Zrêcznoœæ\n-1 Kondycja",Memo1->SelStart+1);

        }
                else if(RadioGroup2->ItemIndex==2)
        {
        Image1->Picture->Bitmap->LoadFromFile("Images/6.bmp" );
                        Memo1->Lines->Clear();
         Memo1->Lines->Text=Memo1->Lines->Text.Insert("PÓ£ELFY: Pólefy to wynik zmieszania krwi ludzi i elfów. S¹ bardzo przystojne i ³¹cz¹ w sobie zalety obu tych ras. Zazwyczaj posiadaj¹ ciekawoœæ, pomys³owoœæ i ambicje swych ludzkich przodków z wyrafinowanymi zmys³ami, mi³oœci¹ do natury i artystycznymi zdolnoœciami elfów. ",Memo1->SelStart+1);

        }
                else if(RadioGroup2->ItemIndex==3)
        {
        Image1->Picture->Bitmap->LoadFromFile("Images/8.bmp" );
                                Memo1->Lines->Clear();
        Memo1->Lines->Text=Memo1->Lines->Text.Insert("KRASNOLUDY: Krasnoludy s¹ niskimi, krêpymi osobnikami, ³atwymi do rozpoznania po wzroœcie i posturze. Maj¹ czerstwe policzki, ciemne oczy i takie¿ w³osy. Zazwyczaj s¹ uparte i ma³omówne. Z chêci¹ oddaj¹ siê ciê¿kiej pracy, nie posiadaj¹ za to za grosz poczucia humoru. Lubuj¹ siê w piwie i miodzie, ale nade wszystko kochaj¹ z³oto. \n\n+1 Kondycja\n-1 Zrêcznoœæ\n-2 Charyzma",Memo1->SelStart+1);

        }
                else if(RadioGroup2->ItemIndex==4)
        {
        Image1->Picture->Bitmap->LoadFromFile("Images/10.bmp" );
                                Memo1->Lines->Clear();
        Memo1->Lines->Text=Memo1->Lines->Text.Insert("GNOMY: Spokrewnione z krasnoludami gnomy s¹ znacznie mniejsze ni¿ ich odlegli kuzyni. Z dum¹ równie¿ zauwa¿aja, ¿e nie sa tak kragle jak ich brodaci bracia. Wiêkszoœæ gnomów ma ciemna lub br¹zowa skórê, bia³e w³osy i du¿e nosy. Charakteryzuja siê doœæ niezwyk³ym poczuciem humoru i przepadaja za p³ataniem psikusów. Ich mi³oœæ do natury przewy¿sza jedynie uwielbienie szlachetnych kamieni i bi¿uterii.\n\n+1 Inteligencja\n -1 M¹droœæ",Memo1->SelStart+1);

        }
                else if(RadioGroup2->ItemIndex==5)
        {
        Image1->Picture->Bitmap->LoadFromFile("Images/12.bmp" );
                                Memo1->Lines->Clear();
        Memo1->Lines->Text=Memo1->Lines->Text.Insert("NIZIO£KI: Nizio³ki to niscy, pulchni osobnicy bardzo przypominaj¹cy ma³ych ludzi o kr¹g³ych i czêsto rumianych twarzach. Maj¹ zazwyczaj krêcone w³osy, porastaj¹ce równie¿ ich stopy. Zdecydowanie wol¹ domowe zacisze od niebezpieczeñstw wi¹¿¹cych siê z poszukiwaniem przygód. Kochaj¹ spokojne i dostatnie ¿ycie, dobr¹ zabawê i rodzinne opowieœci. \n\n+1 Zrêcznoœæ\n-1 Si³a",Memo1->SelStart+1);

        }

 }
}
//---------------------------------------------------------------------------

void __fastcall TKreatorPostaci::KlasaChange(TObject *Sender)
{
Panel4->Visible= !Klasa->ItemIndex !=-1;
        if(Klasa->Text == "Wojownik")
        {
                Memo1->Lines->Clear();
                Memo1->Lines->Text=Memo1->Lines->Text.Insert("To rycerz, fechtmistrz, zolnierz i milosnik bójek. Jego zycie wypelnia poznawanie broni i taktyki. Mozna go spotkac nie tylko na polu bitwy, ale równiez walczacego twarza twarz z potworami. Dobry wojownik musi byc silny i zdrowy – inaczej ma nikle szanse na przetrwanie.",Memo1->SelStart+1);
        }
        else if(Klasa->Text == "Lowca")
        {
                Memo1->Lines->Clear();
                Memo1->Lines->Text=Memo1->Lines->Text.Insert("Lowca to wojownik, mysliwy i lesnik. Biegle posluguje sie bronia i jest wytrawnym znawca lasu. Czesto chroni i pomaga zagubionym wedrowcom i uczciwym wiesniakom. Lowca musi byc silny, madry i znac nature, by zyc pelnia zycia.",Memo1->SelStart+1);
        }
        else if(Klasa->Text == "Kaplan")
        {
                Memo1->Lines->Clear();
                Memo1->Lines->Text=Memo1->Lines->Text.Insert("Zaspokaja duchowe potrzeby wspólnoty. Jest zarówno obronca, jak i uzdrowicielem. Nie jest jednak niechetny walce. W przypadku zagrozenia zlem kaplan bez wahania odnajdzie je i zniszczy. Dotyczy to równiez zlych kaplanów, którzy jednakze niszcza dobro.",Memo1->SelStart+1);
        }
        else if(Klasa->Text == "Mag")
        {
                Memo1->Lines->Clear();
                Memo1->Lines->Text=Memo1->Lines->Text.Insert("To mistrz magicznej energii, wykorzystujacy ja i ksztaltujacy w czary. Aby móc jednak to czynic, musi studiowac dziwne jezyki i poznawac tajemnice – innymi slowy poswiecac wiekszosc swojego czasu na magiczne badania. Magowie wykorzystuja sa wiedze i madrosc. Rzadko kiedy poszukuja przygód jesli u ich boku nie stoja wojownicy lub zbrojni. Istnieje wiele róznych rodzajów (szkól) magii, dlatego tez jest wiele typów magów. Mag poznaje wszystkie szkoly magii i uczy sie szerokiej gamy zaklec. Znaczny zakres umiejetnosci czyni go doskonalym poszukiwaczem przygód.",Memo1->SelStart+1);
        }
        else if(Klasa->Text == "Zlodziej")
        {
                Memo1->Lines->Clear();
                Memo1->Lines->Text=Memo1->Lines->Text.Insert("To zreczny lotrzyk, który stara sie osiagnac wlasne cele – dobre lub zle. Jego znakami rozpoznawczymi sa spryt, zwinnosc i ciagle krycie sie w cieniu. Tylko od zlodzieja zalezy, czy wykorzysta swe talenty przeciw niewinnym wedrowcom, bogatym kupcom, potworom lub gnebiacej biedaków wladzy.",Memo1->SelStart+1);
        }
        else if(Klasa->Text == "Czarownik")
        {
                Memo1->Lines->Clear();
                Memo1->Lines->Text=Memo1->Lines->Text.Insert("to adepci magii, którzy od urodzenia posiadaja umiejetnosc rzucania czarów. Uwaza sie, ze w ich zylach plynie krew jakichs poteznych istot, byc moze maja w sobie czastke bogów, albo nawet sa smokami, które przybraly ludzka postac. Niezaleznie od tego magia Czarowników jest intuicyjna a nie logiczna. Znaja oni mniej czarów niz czarodzieje i wolniej zdobywaja nowe zaklecia. Moga za to czesciej uzywac swoich mocy i nie musza wczesniej przygotowywac swoich czarów. Czarownicy nie specjalizuja sie w poszczególnych szkolach magii. Poza tymi róznicami, sa bardzo podobni do czarodziei. Uwaga: Czarownik nie uczy sie czarów ze zwojów, wybiera je wraz ze zdobywaniem wyzszych poziomów. Podstawowa cecha czarownika jest inteligencja.",Memo1->SelStart+1);
        }

}
//---------------------------------------------------------------------------

void __fastcall TKreatorPostaci::CharakterChange(TObject *Sender)
{
Panel6->Visible= !Charakter->ItemIndex !=-1;
        if(Charakter->Text == "Dobry")
        {
                Memo1->Lines->Clear();
                Memo1->Lines->Text=Memo1->Lines->Text.Insert("Takie postacie wierza, ze równowaga sil jest istotna, ale wzgledy prawa i chaosu nie wplywaja na potrzebe dobra. Wszechswiat jest ogromny i zyje w nim wiele stworzen dazacych do róznych celów, ale i tak konsekwentna pogon za dobrem nie moze zniszczyc równowagi - moze nawet pomóc ja utrzymac. Jesli ochrona dobra oznacza potrzebe utrzymywania zorganizowanego spoleczenstwa, to tak wlasnie nalezy uczynic. Jezeli zas dobro moze zapanowac poprzez obalenie istniejacego ustroju, to niech tak sie stanie. Osoba o neutralnym dobrym charakterze to, na przyklad, baron, który lamie rozkazy swego króla, by zniszczyc cos, co uznaje za zle.",Memo1->SelStart+1);
        }
        if(Charakter->Text == "Neutralny")
        {
                Memo1->Lines->Clear();
                Memo1->Lines->Text=Memo1->Lines->Text.Insert("Neutralni wierza w pelna i ostateczna równowage sil i nie chca postrzegac czynów jako zle czy dobre. Wiekszosc zyjacych na swiecie osób zdaje sie miec jakies sady, wiec prawdziwie neutralnych jest naprawde niewielu. Robia oni co moga, aby uniknac stawania po stronie zla lub dobra, prawa lub chaosu. Za zadanie postawili sobie utrzymanie tych sil w zgodnej równowadze. Neutralne osoby czasami sa zmuszone do zawierania dziwnych sojuszy. Najczesciej musza opowiadac sie po stronie slabszych, czasem jednak zmieniaja barwy - szczególnie gdy pokonany nagle zaczyna zwyciezac. Prawdziwie neutralny druid móglby przylaczyc sie do sil lokalnego barona, aby zniszczyc plemie zlych gnolli, po czym odejsc lub zmienic sprzymierzenca, gdy uprzedni wrogowie nagle byliby bliscy unicestwienia. Staralby sie zapobiec temu, by któras ze stron stala sie zbyt potezna. Oczywiscie na swiecie jest niewiele takich postaci.",Memo1->SelStart+1);
        }

        if(Charakter->Text == "Zly")
        {
                Memo1->Lines->Clear();
                Memo1->Lines->Text=Memo1->Lines->Text.Insert("Istoty neutralne z³e s¹ przede wszystkim zainteresowane sob¹ i w³asnymi korzyœciami. Nie maj¹ nic przeciwko wspo³dzia³aniu lub - jeœli trzeba - dzia³aniu na w³asn¹ rêkê. Ich jedyny cel to ci¹g³e parcie do przodu. Jeœli istnieje szybki i ³atwy sposob osi¹gniêcia zysku (legalny, w¹tpliwie legalny czy zupe³nie bezprawny), to neutralny z³y z pewnoœci¹ go wykorzysta. Nie s¹ to jednak postacie preferuj¹ce styl 'kazdy dla siebie', ktory jest typowy dla istot chaotycznych. Mimo to neutralni zli nie maj¹ skrupu³ow przed zdradzeniem przyjacio³ i towarzyszy dla osobistych korzyœci. Podstaw¹ ich przymierzy s¹ zwykle pieni¹dze i w³adza, co czyni ich doœæ podatnymi na ³apowki. Typowe przyk³ady neutralnych z³ych postaci to najemnik pozbawiony skrupu³ow czy pospolity z³odziej i donosiciel, ktory pracuje dla w³adzy, by chroniæ siê i awansowaæ.",Memo1->SelStart+1);
        }


}
//---------------------------------------------------------------------------

void __fastcall TKreatorPostaci::Label23Click(TObject *Sender)
{
                Memo1->Lines->Clear();
                Memo1->Lines->Text=Memo1->Lines->Text.Insert("To wybór natury estetycznej i nie wplynie w ¿adnej sposób na cechy bohatera. Mo¿e mie jednak wp³yw na to, czy jakis bohater niezale¿ny zainteresuje siê twoj¹ postaci¹ pod wzglêdem uczuciowym.",Memo1->SelStart+1);

}
//---------------------------------------------------------------------------

void __fastcall TKreatorPostaci::Label24Click(TObject *Sender)
{
                Memo1->Lines->Clear();
                Memo1->Lines->Text=Memo1->Lines->Text.Insert("Od rasy twojego bohatera zale¿¹ jego bazowe zdolnoœci oraz wrodzone cechy, takie jak infrawizja.",Memo1->SelStart+1);

}
//---------------------------------------------------------------------------

void __fastcall TKreatorPostaci::Label21Click(TObject *Sender)
{
                Memo1->Lines->Clear();
                Memo1->Lines->Text=Memo1->Lines->Text.Insert("Klasa postaci jest czymœ w rodzaju profesji lub kariery. Jest tym, czym twój bohater wprawia³ siê od najm³odszych lat. Ka¿da klasa dysponuje odmiennymi specjalnymi mocami, dostêpnymi tylko dla niej.",Memo1->SelStart+1);

}
//---------------------------------------------------------------------------

void __fastcall TKreatorPostaci::Label22Click(TObject *Sender)
{
                Memo1->Lines->Clear();
                Memo1->Lines->Text=Memo1->Lines->Text.Insert("Teraz czeka ciê wybór charakteru, który okreœla, sposób ¿ycia twojego bohatera. Przed podjêciem decyzji uwa¿nie przeczytaj wszystkie opisy. Jeœli w trakcie gry oddalisz siê od wybranego charakteru, twoj¹ postaæ spotkaj¹ niezbyt mi³e konsekwencje.",Memo1->SelStart+1);

}
//---------------------------------------------------------------------------

void __fastcall TKreatorPostaci::Label3Click(TObject *Sender)
{
                Memo1->Lines->Clear();
                Memo1->Lines->Text=Memo1->Lines->Text.Insert("Podstawowe cechy, które okreœlaj¹ twoj¹ postaæ. ",Memo1->SelStart+1);

}
//---------------------------------------------------------------------------

void __fastcall TKreatorPostaci::Label4Click(TObject *Sender)
{
                Memo1->Lines->Clear();
                Memo1->Lines->Text=Memo1->Lines->Text.Insert("SI£A: Opisuje si³e miêsni bohatera, jego wytrzyma³oœæ i wytrwa³oœæ. Jest podstawow¹ cech¹ wojowników.\n\nMinimum:3 \nMaksimum:18",Memo1->SelStart+1);

}
//---------------------------------------------------------------------------

void __fastcall TKreatorPostaci::Label6Click(TObject *Sender)
{
                Memo1->Lines->Clear();
                Memo1->Lines->Text=Memo1->Lines->Text.Insert("ZRÊCZNOŒÆ: opisuje zwinnoœæ, refleks, koordynacje i umiejêtnoœæ zachowania równowagi. Jest podstawow¹ cech¹ z³odziei.\n\nMinimum:9\nMkasimum:19",Memo1->SelStart+1);

}
//---------------------------------------------------------------------------

void __fastcall TKreatorPostaci::Label8Click(TObject *Sender)
{
                Memo1->Lines->Clear();
                Memo1->Lines->Text=Memo1->Lines->Text.Insert("KONDYCJA: Opisuje ogólna budowê bohatera, jego stan zdrowia i fizyczn¹ wytrzyma³oœæ na obra¿enia, choroby i innego rodzaju trudy. Ta cecha jest wa¿na dla ³owców.\n\nMinimum:6\nMkasimum:17",Memo1->SelStart+1);

}
//---------------------------------------------------------------------------

void __fastcall TKreatorPostaci::Label10Click(TObject *Sender)
{
                Memo1->Lines->Clear();
                Memo1->Lines->Text=Memo1->Lines->Text.Insert("INTELIGENCJA: Opisuje zdolnoœæ zapamiêtywania, rozumowania i uczenia siê. Jest cech¹ podstawow¹ magów.\n\nUWAGA: Postaæ z Inteligencja równ¹ b¹dŸ mniejsz¹ od 8 jest niepiœmienna i nie jest w stanie korzystaæ ze zwojów jak i z wiêkszoœci ró¿d¿ek, niezale¿nie od klasy.\n\nMinimum:8\nMaksimum:18",Memo1->SelStart+1);
        
}
//---------------------------------------------------------------------------

void __fastcall TKreatorPostaci::Label12Click(TObject *Sender)
{
                Memo1->Lines->Clear();
                Memo1->Lines->Text=Memo1->Lines->Text.Insert("M¥DROŒÆ: Opisuje intuicje, zdolnoœæ os¹du, zdrowy rozs¹dek i si³ê woli bohatera. Jest podstawow¹ cech¹ kap³anów.\n\nMinimum:3\nMaksimum:18",Memo1->SelStart+1);
        
}
//---------------------------------------------------------------------------

void __fastcall TKreatorPostaci::Label14Click(TObject *Sender)
{
                Memo1->Lines->Clear();
                Memo1->Lines->Text=Memo1->Lines->Text.Insert("CHARYZMA: Opisuje si³ê przekonywania bohatera, jego urok osobisty i zdolnoœci przywódcze. \n\nMinimum:8\nMaksimum:18",Memo1->SelStart+1);

}
//---------------------------------------------------------------------------







void __fastcall TKreatorPostaci::Button17Click(TObject *Sender)
{

Memo2->Lines->Clear();
Memo2->Lines->Text=Memo2->Lines->Text.Insert("Gotow¹ postac mozna zapisac do pliku tekstowego, uzywajac menu znajdujacego sie w lewym gornym rogu programu.",Memo1->SelStart+1);



 //Memo1->Lines->Add (":") ;
//Memo1->Lines->Add() ;
Memo1->Lines->Clear();
Memo1->Lines->Add ("Imie:");
Memo1->Lines->Add(Edit1->Text) ;


        if(RadioGroup3->ItemIndex==0)
        {
        Memo1->Lines->Add ("Plec:Mezczyzna") ;
       }
        else
        {
        Memo1->Lines->Add ("Plec:Kobieta") ;
       }


        if(RadioGroup1->ItemIndex==0||RadioGroup2->ItemIndex==0)
        {
        Memo1->Lines->Add ("Rasa:Czlowiek") ;
       }
        else if(RadioGroup1->ItemIndex==1||RadioGroup2->ItemIndex==1)
        {
         Memo1->Lines->Add ("Rasa:Elf") ;

        }
                else if(RadioGroup1->ItemIndex==2||RadioGroup2->ItemIndex==2)
        {
        Memo1->Lines->Add ("Rasa:Polelf") ;
        }
                else if(RadioGroup1->ItemIndex==3||RadioGroup2->ItemIndex==3)
        {
        Memo1->Lines->Add ("Rasa:Krasnolud") ;
        }
                else if(RadioGroup1->ItemIndex==4||RadioGroup2->ItemIndex==4)
        {
        Memo1->Lines->Add ("Rasa:Gnom") ;
       }
                else if(RadioGroup1->ItemIndex==5||RadioGroup2->ItemIndex==5)
        {
        Memo1->Lines->Add ("Rasa:Niziolek") ;
        }
        if(Klasa->Text == "Wojownik")
        {
        Memo1->Lines->Add ("Klasa:Wojownik") ;
        }
        else if(Klasa->Text == "Lowca")
        {
        Memo1->Lines->Add ("Klasa:Lowca") ;
       }
        else if(Klasa->Text == "Kaplan")
        {
        Memo1->Lines->Add ("Klasa:Kaplan") ;
        }
        else if(Klasa->Text == "Mag")
        {
        Memo1->Lines->Add ("Klasa:Mag") ;
         }
        else if(Klasa->Text == "Zlodziej")
        {
        Memo1->Lines->Add ("Klasa:Zlodziej") ;
        }
        else if(Klasa->Text == "Czarownik")
        {
        Memo1->Lines->Add ("Klasa:Czarownik") ;
        }
       if(Charakter->Text == "Dobry")
        {
Memo1->Lines->Add ("Charakter:Dobry") ;       }
        if(Charakter->Text == "Neutralny")
        {
Memo1->Lines->Add ("Charakter:Neutralny") ;         }

        if(Charakter->Text == "Zly")
        {
Memo1->Lines->Add ("Charakter:Zly") ;         }

Memo1->Lines->Add ("Sila:") ;
Memo1->Lines->Add(sila) ;
Memo1->Lines->Add ("Zrecznosc:");
Memo1->Lines->Add(zrecznosc) ;
Memo1->Lines->Add ("Kondycja:") ;
Memo1->Lines->Add(kondycja) ;
Memo1->Lines->Add ("Inteligencja:");
Memo1->Lines->Add(inteligencja) ;
Memo1->Lines->Add ("Madrosc:");
Memo1->Lines->Add(madrosc) ;
Memo1->Lines->Add ("Charyzma::");
Memo1->Lines->Add(charyzma) ;


;
       // Memo1->Lines->Text=Memo1->Lines->Text.Insert("sila:",Memo1->Lines->Add(sila));
        // Memo1->Lines->Add(sila) ;
         //Memo1->Lines->Text=Memo1->Lines->Text.Insert("zrecznosc:",Memo1->SelStart-1);
         //Memo1->Lines->Add(zrecznosc) ;

}
//---------------------------------------------------------------------------







void __fastcall TKreatorPostaci::Otwrz1Click(TObject *Sender)
{
        if(OpenDialog1->Execute())
        {
                try

                {
                Memo1->Lines->LoadFromFile(OpenDialog1->FileName);
                }
                catch (...)
                {
                        ShowMessage("B³¹d otwarcia pliku.");
                }
        }
}
//---------------------------------------------------------------------------

void __fastcall TKreatorPostaci::Zapiszjako1Click(TObject *Sender)
{
        if(SaveDialog1->Execute())
        {
                try

                {
                Memo1->Lines->SaveToFile(SaveDialog1->FileName);
                }
                catch (...)
                {
                        ShowMessage("Zapis zakoñczy³ siê niepowodzeniem");
                }
        }

}
//---------------------------------------------------------------------------



void __fastcall TKreatorPostaci::Zakocz1Click(TObject *Sender)
{
Close();        
}
//---------------------------------------------------------------------------

void __fastcall TKreatorPostaci::Nowa1Click(TObject *Sender)
{
Application->Terminate();
}
//---------------------------------------------------------------------------


