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
        Memo1->Lines->Text=Memo1->Lines->Text.Insert("To wybor natury estetyczniej i nie wplynie w zaden sposob na cechy bohatera.Moze miec jednak wplyw na to, czy jakis bohater niezalezny zainteresuje sie twoja postacia pod wzgl�dem uczuciowym",Memo1->SelStart+1);
}
//---------------------------------------------------------------------------

void __fastcall TKreatorPostaci::FormCreate(TObject *Sender)
{
Memo1->Lines->Clear();
Memo1->Lines->Text=Memo1->Lines->Text.Insert("Nacisnij przycisk z napisem Plec aby rozpoczac tworzenie postaci",Memo1->SelStart+1);
Memo2->Lines->Clear();
Memo2->Lines->Text=Memo2->Lines->Text.Insert("Aby zako�czyc proces tworzenia postaci, nacisnij przycisk 'Zapisz postac'.",Memo1->SelStart+1);
Image1->Picture->Bitmap->LoadFromFile("Images/0.bmp" );
}
//---------------------------------------------------------------------------


void __fastcall TKreatorPostaci::PlecContextPopup(TObject *Sender, TPoint &MousePos,
      bool &Handled)
{
Memo1->Lines->Text=Memo1->Lines->Text.Insert("To wybor natury estetyczniej i nie wplynie w zaden sposob na cechy bohatera.Moze miec jednak wplyw na to, czy jakis bohater niezalezny zainteresuje sie twoja postacia pod wzgl�dem uczuciowym",Memo1->SelStart+1);
}
//---------------------------------------------------------------------------


void __fastcall TKreatorPostaci::RadioGroup3Click(TObject *Sender)
{
        Panel1->Visible= !RadioGroup3->ItemIndex ==1;
        Panel2->Visible= !RadioGroup3->ItemIndex ==0;


        if(RadioGroup3->ItemIndex==0)
        {
                        Memo1->Lines->Clear();
                Memo1->Lines->Text=Memo1->Lines->Text.Insert("M�czy�ni �yj�cy w Krainach mog� awansowac w dowolnej klasie. kt�r� wybior�. Mog� by magami. Z�odziejamy czy znawcami sztuki wojennej.",Memo1->SelStart+1);
                plec = 1;
        }
        else
        {
                         Memo1->Lines->Clear();
                Memo1->Lines->Text=Memo1->Lines->Text.Insert("Kobiety �yj�ce w Krainach mog� awansowac w dowolnej klasie, z �atwosci� dor�wnuj�c swym m�skim odpowiednikom pod wzgl�dem wszystkich umiej�tnosci.",Memo1->SelStart+1);
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
        Memo1->Lines->Text=Memo1->Lines->Text.Insert("LUDZIE: Ludzie s� dominuj�ca ras� Faerunu. Przewodz� naznaczniejszym imperiom i kr�lestwom Zapomnianych Krain. S� chyba najbardziej tolerancyjn� i towarzyska ze wszystkich rasd, z wyj�tkiem mo�e nizio�k�w. ",Memo1->SelStart+1);


        }
        else if(RadioGroup1->ItemIndex==1)
        {
        Image1->Picture->Bitmap->LoadFromFile("Images/3.bmp" );
        Memo1->Lines->Clear();
        Memo1->Lines->Text=Memo1->Lines->Text.Insert("ELFY: Elfy s� nieco ni�sze i szczuplejsze od ludzi. Twarze maj� pi�kne i delikatne, a j�zyk melodyjny. Cz�sto uwa�a si� je za lekkomy�lne i oddalone od innych ras. Elfy interesuje pi�kno natury, taniec, zabawa, �piewy i inne tym podobne rzeczy. Maj� wyrafinowane poczucie humory i takie� same pie�ni oraz poezj�.\n\n+1 Zr�czno��\n-1 Kondycja",Memo1->SelStart+1);


        }
                else if(RadioGroup1->ItemIndex==2)
        {
        Image1->Picture->Bitmap->LoadFromFile("Images/5.bmp" );
                Memo1->Lines->Clear();
        Memo1->Lines->Text=Memo1->Lines->Text.Insert("PӣELFY: P�lefy to wynik zmieszania krwi ludzi i elf�w. S� bardzo przystojne i ��cz� w sobie zalety obu tych ras. Zazwyczaj posiadaj� ciekawo��, pomys�owo�� i ambicje swych ludzkich przodk�w z wyrafinowanymi zmys�ami, mi�o�ci� do natury i artystycznymi zdolno�ciami elf�w. ",Memo1->SelStart+1);

        }
                else if(RadioGroup1->ItemIndex==3)
        {
        Image1->Picture->Bitmap->LoadFromFile("Images/7.bmp" );
                        Memo1->Lines->Clear();
        Memo1->Lines->Text=Memo1->Lines->Text.Insert("KRASNOLUDY: Krasnoludy s� niskimi, kr�pymi osobnikami, �atwymi do rozpoznania po wzro�cie i posturze. Maj� czerstwe policzki, ciemne oczy i takie� w�osy. Zazwyczaj s� uparte i ma�om�wne. Z ch�ci� oddaj� si� ci�kiej pracy, nie posiadaj� za to za grosz poczucia humoru. Lubuj� si� w piwie i miodzie, ale nade wszystko kochaj� z�oto. \n\n+1 Kondycja\n-1 Zr�czno��\n-2 Charyzma",Memo1->SelStart+1);

        }
                else if(RadioGroup1->ItemIndex==4)
        {
        Image1->Picture->Bitmap->LoadFromFile("Images/9.bmp" );
                        Memo1->Lines->Clear();
        Memo1->Lines->Text=Memo1->Lines->Text.Insert("GNOMY: Spokrewnione z krasnoludami gnomy s� znacznie mniejsze ni� ich odlegli kuzyni. Z dum� r�wnie� zauwa�aja, �e nie sa tak kragle jak ich brodaci bracia. Wi�kszo�� gnom�w ma ciemna lub br�zowa sk�r�, bia�e w�osy i du�e nosy. Charakteryzuja si� do�� niezwyk�ym poczuciem humoru i przepadaja za p�ataniem psikus�w. Ich mi�o�� do natury przewy�sza jedynie uwielbienie szlachetnych kamieni i bi�uterii.\n\n+1 Inteligencja\n -1 M�dro��",Memo1->SelStart+1);

        }
                else if(RadioGroup1->ItemIndex==5)
        {
        Image1->Picture->Bitmap->LoadFromFile("Images/11.bmp" );
                        Memo1->Lines->Clear();
        Memo1->Lines->Text=Memo1->Lines->Text.Insert("NIZIO�KI: Nizio�ki to niscy, pulchni osobnicy bardzo przypominaj�cy ma�ych ludzi o kr�g�ych i cz�sto rumianych twarzach. Maj� zazwyczaj kr�cone w�osy, porastaj�ce r�wnie� ich stopy. Zdecydowanie wol� domowe zacisze od niebezpiecze�stw wi���cych si� z poszukiwaniem przyg�d. Kochaj� spokojne i dostatnie �ycie, dobr� zabaw� i rodzinne opowie�ci. \n\n+1 Zr�czno��\n-1 Si�a",Memo1->SelStart+1);

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
       Memo1->Lines->Text=Memo1->Lines->Text.Insert("LUDZIE: Ludzie s� dominuj�ca ras� Faerunu. Przewodz� naznaczniejszym imperiom i kr�lestwom Zapomnianych Krain. S� chyba najbardziej tolerancyjn� i towarzyska ze wszystkich rasd, z wyj�tkiem mo�e nizio�k�w. ",Memo1->SelStart+1);

        }
        else if(RadioGroup2->ItemIndex==1)
        {
        Image1->Picture->Bitmap->LoadFromFile("Images/4.bmp" );
                Memo1->Lines->Clear();
       Memo1->Lines->Text=Memo1->Lines->Text.Insert("ELFY: Elfy s� nieco ni�sze i szczuplejsze od ludzi. Twarze maj� pi�kne i delikatne, a j�zyk melodyjny. Cz�sto uwa�a si� je za lekkomy�lne i oddalone od innych ras. Elfy interesuje pi�kno natury, taniec, zabawa, �piewy i inne tym podobne rzeczy. Maj� wyrafinowane poczucie humory i takie� same pie�ni oraz poezj�.\n\n+1 Zr�czno��\n-1 Kondycja",Memo1->SelStart+1);

        }
                else if(RadioGroup2->ItemIndex==2)
        {
        Image1->Picture->Bitmap->LoadFromFile("Images/6.bmp" );
                        Memo1->Lines->Clear();
         Memo1->Lines->Text=Memo1->Lines->Text.Insert("PӣELFY: P�lefy to wynik zmieszania krwi ludzi i elf�w. S� bardzo przystojne i ��cz� w sobie zalety obu tych ras. Zazwyczaj posiadaj� ciekawo��, pomys�owo�� i ambicje swych ludzkich przodk�w z wyrafinowanymi zmys�ami, mi�o�ci� do natury i artystycznymi zdolno�ciami elf�w. ",Memo1->SelStart+1);

        }
                else if(RadioGroup2->ItemIndex==3)
        {
        Image1->Picture->Bitmap->LoadFromFile("Images/8.bmp" );
                                Memo1->Lines->Clear();
        Memo1->Lines->Text=Memo1->Lines->Text.Insert("KRASNOLUDY: Krasnoludy s� niskimi, kr�pymi osobnikami, �atwymi do rozpoznania po wzro�cie i posturze. Maj� czerstwe policzki, ciemne oczy i takie� w�osy. Zazwyczaj s� uparte i ma�om�wne. Z ch�ci� oddaj� si� ci�kiej pracy, nie posiadaj� za to za grosz poczucia humoru. Lubuj� si� w piwie i miodzie, ale nade wszystko kochaj� z�oto. \n\n+1 Kondycja\n-1 Zr�czno��\n-2 Charyzma",Memo1->SelStart+1);

        }
                else if(RadioGroup2->ItemIndex==4)
        {
        Image1->Picture->Bitmap->LoadFromFile("Images/10.bmp" );
                                Memo1->Lines->Clear();
        Memo1->Lines->Text=Memo1->Lines->Text.Insert("GNOMY: Spokrewnione z krasnoludami gnomy s� znacznie mniejsze ni� ich odlegli kuzyni. Z dum� r�wnie� zauwa�aja, �e nie sa tak kragle jak ich brodaci bracia. Wi�kszo�� gnom�w ma ciemna lub br�zowa sk�r�, bia�e w�osy i du�e nosy. Charakteryzuja si� do�� niezwyk�ym poczuciem humoru i przepadaja za p�ataniem psikus�w. Ich mi�o�� do natury przewy�sza jedynie uwielbienie szlachetnych kamieni i bi�uterii.\n\n+1 Inteligencja\n -1 M�dro��",Memo1->SelStart+1);

        }
                else if(RadioGroup2->ItemIndex==5)
        {
        Image1->Picture->Bitmap->LoadFromFile("Images/12.bmp" );
                                Memo1->Lines->Clear();
        Memo1->Lines->Text=Memo1->Lines->Text.Insert("NIZIO�KI: Nizio�ki to niscy, pulchni osobnicy bardzo przypominaj�cy ma�ych ludzi o kr�g�ych i cz�sto rumianych twarzach. Maj� zazwyczaj kr�cone w�osy, porastaj�ce r�wnie� ich stopy. Zdecydowanie wol� domowe zacisze od niebezpiecze�stw wi���cych si� z poszukiwaniem przyg�d. Kochaj� spokojne i dostatnie �ycie, dobr� zabaw� i rodzinne opowie�ci. \n\n+1 Zr�czno��\n-1 Si�a",Memo1->SelStart+1);

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
                Memo1->Lines->Text=Memo1->Lines->Text.Insert("To rycerz, fechtmistrz, zolnierz i milosnik b�jek. Jego zycie wypelnia poznawanie broni i taktyki. Mozna go spotkac nie tylko na polu bitwy, ale r�wniez walczacego twarza twarz z potworami. Dobry wojownik musi byc silny i zdrowy � inaczej ma nikle szanse na przetrwanie.",Memo1->SelStart+1);
        }
        else if(Klasa->Text == "Lowca")
        {
                Memo1->Lines->Clear();
                Memo1->Lines->Text=Memo1->Lines->Text.Insert("Lowca to wojownik, mysliwy i lesnik. Biegle posluguje sie bronia i jest wytrawnym znawca lasu. Czesto chroni i pomaga zagubionym wedrowcom i uczciwym wiesniakom. Lowca musi byc silny, madry i znac nature, by zyc pelnia zycia.",Memo1->SelStart+1);
        }
        else if(Klasa->Text == "Kaplan")
        {
                Memo1->Lines->Clear();
                Memo1->Lines->Text=Memo1->Lines->Text.Insert("Zaspokaja duchowe potrzeby wsp�lnoty. Jest zar�wno obronca, jak i uzdrowicielem. Nie jest jednak niechetny walce. W przypadku zagrozenia zlem kaplan bez wahania odnajdzie je i zniszczy. Dotyczy to r�wniez zlych kaplan�w, kt�rzy jednakze niszcza dobro.",Memo1->SelStart+1);
        }
        else if(Klasa->Text == "Mag")
        {
                Memo1->Lines->Clear();
                Memo1->Lines->Text=Memo1->Lines->Text.Insert("To mistrz magicznej energii, wykorzystujacy ja i ksztaltujacy w czary. Aby m�c jednak to czynic, musi studiowac dziwne jezyki i poznawac tajemnice � innymi slowy poswiecac wiekszosc swojego czasu na magiczne badania. Magowie wykorzystuja sa wiedze i madrosc. Rzadko kiedy poszukuja przyg�d jesli u ich boku nie stoja wojownicy lub zbrojni. Istnieje wiele r�znych rodzaj�w (szk�l) magii, dlatego tez jest wiele typ�w mag�w. Mag poznaje wszystkie szkoly magii i uczy sie szerokiej gamy zaklec. Znaczny zakres umiejetnosci czyni go doskonalym poszukiwaczem przyg�d.",Memo1->SelStart+1);
        }
        else if(Klasa->Text == "Zlodziej")
        {
                Memo1->Lines->Clear();
                Memo1->Lines->Text=Memo1->Lines->Text.Insert("To zreczny lotrzyk, kt�ry stara sie osiagnac wlasne cele � dobre lub zle. Jego znakami rozpoznawczymi sa spryt, zwinnosc i ciagle krycie sie w cieniu. Tylko od zlodzieja zalezy, czy wykorzysta swe talenty przeciw niewinnym wedrowcom, bogatym kupcom, potworom lub gnebiacej biedak�w wladzy.",Memo1->SelStart+1);
        }
        else if(Klasa->Text == "Czarownik")
        {
                Memo1->Lines->Clear();
                Memo1->Lines->Text=Memo1->Lines->Text.Insert("to adepci magii, kt�rzy od urodzenia posiadaja umiejetnosc rzucania czar�w. Uwaza sie, ze w ich zylach plynie krew jakichs poteznych istot, byc moze maja w sobie czastke bog�w, albo nawet sa smokami, kt�re przybraly ludzka postac. Niezaleznie od tego magia Czarownik�w jest intuicyjna a nie logiczna. Znaja oni mniej czar�w niz czarodzieje i wolniej zdobywaja nowe zaklecia. Moga za to czesciej uzywac swoich mocy i nie musza wczesniej przygotowywac swoich czar�w. Czarownicy nie specjalizuja sie w poszczeg�lnych szkolach magii. Poza tymi r�znicami, sa bardzo podobni do czarodziei. Uwaga: Czarownik nie uczy sie czar�w ze zwoj�w, wybiera je wraz ze zdobywaniem wyzszych poziom�w. Podstawowa cecha czarownika jest inteligencja.",Memo1->SelStart+1);
        }

}
//---------------------------------------------------------------------------

void __fastcall TKreatorPostaci::CharakterChange(TObject *Sender)
{
Panel6->Visible= !Charakter->ItemIndex !=-1;
        if(Charakter->Text == "Dobry")
        {
                Memo1->Lines->Clear();
                Memo1->Lines->Text=Memo1->Lines->Text.Insert("Takie postacie wierza, ze r�wnowaga sil jest istotna, ale wzgledy prawa i chaosu nie wplywaja na potrzebe dobra. Wszechswiat jest ogromny i zyje w nim wiele stworzen dazacych do r�znych cel�w, ale i tak konsekwentna pogon za dobrem nie moze zniszczyc r�wnowagi - moze nawet pom�c ja utrzymac. Jesli ochrona dobra oznacza potrzebe utrzymywania zorganizowanego spoleczenstwa, to tak wlasnie nalezy uczynic. Jezeli zas dobro moze zapanowac poprzez obalenie istniejacego ustroju, to niech tak sie stanie. Osoba o neutralnym dobrym charakterze to, na przyklad, baron, kt�ry lamie rozkazy swego kr�la, by zniszczyc cos, co uznaje za zle.",Memo1->SelStart+1);
        }
        if(Charakter->Text == "Neutralny")
        {
                Memo1->Lines->Clear();
                Memo1->Lines->Text=Memo1->Lines->Text.Insert("Neutralni wierza w pelna i ostateczna r�wnowage sil i nie chca postrzegac czyn�w jako zle czy dobre. Wiekszosc zyjacych na swiecie os�b zdaje sie miec jakies sady, wiec prawdziwie neutralnych jest naprawde niewielu. Robia oni co moga, aby uniknac stawania po stronie zla lub dobra, prawa lub chaosu. Za zadanie postawili sobie utrzymanie tych sil w zgodnej r�wnowadze. Neutralne osoby czasami sa zmuszone do zawierania dziwnych sojuszy. Najczesciej musza opowiadac sie po stronie slabszych, czasem jednak zmieniaja barwy - szczeg�lnie gdy pokonany nagle zaczyna zwyciezac. Prawdziwie neutralny druid m�glby przylaczyc sie do sil lokalnego barona, aby zniszczyc plemie zlych gnolli, po czym odejsc lub zmienic sprzymierzenca, gdy uprzedni wrogowie nagle byliby bliscy unicestwienia. Staralby sie zapobiec temu, by kt�ras ze stron stala sie zbyt potezna. Oczywiscie na swiecie jest niewiele takich postaci.",Memo1->SelStart+1);
        }

        if(Charakter->Text == "Zly")
        {
                Memo1->Lines->Clear();
                Memo1->Lines->Text=Memo1->Lines->Text.Insert("Istoty neutralne z�e s� przede wszystkim zainteresowane sob� i w�asnymi korzy�ciami. Nie maj� nic przeciwko wspo�dzia�aniu lub - je�li trzeba - dzia�aniu na w�asn� r�k�. Ich jedyny cel to ci�g�e parcie do przodu. Je�li istnieje szybki i �atwy sposob osi�gni�cia zysku (legalny, w�tpliwie legalny czy zupe�nie bezprawny), to neutralny z�y z pewno�ci� go wykorzysta. Nie s� to jednak postacie preferuj�ce styl 'kazdy dla siebie', ktory jest typowy dla istot chaotycznych. Mimo to neutralni zli nie maj� skrupu�ow przed zdradzeniem przyjacio� i towarzyszy dla osobistych korzy�ci. Podstaw� ich przymierzy s� zwykle pieni�dze i w�adza, co czyni ich do�� podatnymi na �apowki. Typowe przyk�ady neutralnych z�ych postaci to najemnik pozbawiony skrupu�ow czy pospolity z�odziej i donosiciel, ktory pracuje dla w�adzy, by chroni� si� i awansowa�.",Memo1->SelStart+1);
        }


}
//---------------------------------------------------------------------------

void __fastcall TKreatorPostaci::Label23Click(TObject *Sender)
{
                Memo1->Lines->Clear();
                Memo1->Lines->Text=Memo1->Lines->Text.Insert("To wyb�r natury estetycznej i nie wplynie w �adnej spos�b na cechy bohatera. Mo�e mie jednak wp�yw na to, czy jakis bohater niezale�ny zainteresuje si� twoj� postaci� pod wzgl�dem uczuciowym.",Memo1->SelStart+1);

}
//---------------------------------------------------------------------------

void __fastcall TKreatorPostaci::Label24Click(TObject *Sender)
{
                Memo1->Lines->Clear();
                Memo1->Lines->Text=Memo1->Lines->Text.Insert("Od rasy twojego bohatera zale�� jego bazowe zdolno�ci oraz wrodzone cechy, takie jak infrawizja.",Memo1->SelStart+1);

}
//---------------------------------------------------------------------------

void __fastcall TKreatorPostaci::Label21Click(TObject *Sender)
{
                Memo1->Lines->Clear();
                Memo1->Lines->Text=Memo1->Lines->Text.Insert("Klasa postaci jest czym� w rodzaju profesji lub kariery. Jest tym, czym tw�j bohater wprawia� si� od najm�odszych lat. Ka�da klasa dysponuje odmiennymi specjalnymi mocami, dost�pnymi tylko dla niej.",Memo1->SelStart+1);

}
//---------------------------------------------------------------------------

void __fastcall TKreatorPostaci::Label22Click(TObject *Sender)
{
                Memo1->Lines->Clear();
                Memo1->Lines->Text=Memo1->Lines->Text.Insert("Teraz czeka ci� wyb�r charakteru, kt�ry okre�la, spos�b �ycia twojego bohatera. Przed podj�ciem decyzji uwa�nie przeczytaj wszystkie opisy. Je�li w trakcie gry oddalisz si� od wybranego charakteru, twoj� posta� spotkaj� niezbyt mi�e konsekwencje.",Memo1->SelStart+1);

}
//---------------------------------------------------------------------------

void __fastcall TKreatorPostaci::Label3Click(TObject *Sender)
{
                Memo1->Lines->Clear();
                Memo1->Lines->Text=Memo1->Lines->Text.Insert("Podstawowe cechy, kt�re okre�laj� twoj� posta�. ",Memo1->SelStart+1);

}
//---------------------------------------------------------------------------

void __fastcall TKreatorPostaci::Label4Click(TObject *Sender)
{
                Memo1->Lines->Clear();
                Memo1->Lines->Text=Memo1->Lines->Text.Insert("SI�A: Opisuje si�e mi�sni bohatera, jego wytrzyma�o�� i wytrwa�o��. Jest podstawow� cech� wojownik�w.\n\nMinimum:3 \nMaksimum:18",Memo1->SelStart+1);

}
//---------------------------------------------------------------------------

void __fastcall TKreatorPostaci::Label6Click(TObject *Sender)
{
                Memo1->Lines->Clear();
                Memo1->Lines->Text=Memo1->Lines->Text.Insert("ZR�CZNO��: opisuje zwinno��, refleks, koordynacje i umiej�tno�� zachowania r�wnowagi. Jest podstawow� cech� z�odziei.\n\nMinimum:9\nMkasimum:19",Memo1->SelStart+1);

}
//---------------------------------------------------------------------------

void __fastcall TKreatorPostaci::Label8Click(TObject *Sender)
{
                Memo1->Lines->Clear();
                Memo1->Lines->Text=Memo1->Lines->Text.Insert("KONDYCJA: Opisuje og�lna budow� bohatera, jego stan zdrowia i fizyczn� wytrzyma�o�� na obra�enia, choroby i innego rodzaju trudy. Ta cecha jest wa�na dla �owc�w.\n\nMinimum:6\nMkasimum:17",Memo1->SelStart+1);

}
//---------------------------------------------------------------------------

void __fastcall TKreatorPostaci::Label10Click(TObject *Sender)
{
                Memo1->Lines->Clear();
                Memo1->Lines->Text=Memo1->Lines->Text.Insert("INTELIGENCJA: Opisuje zdolno�� zapami�tywania, rozumowania i uczenia si�. Jest cech� podstawow� mag�w.\n\nUWAGA: Posta� z Inteligencja r�wn� b�d� mniejsz� od 8 jest niepi�mienna i nie jest w stanie korzysta� ze zwoj�w jak i z wi�kszo�ci r�d�ek, niezale�nie od klasy.\n\nMinimum:8\nMaksimum:18",Memo1->SelStart+1);
        
}
//---------------------------------------------------------------------------

void __fastcall TKreatorPostaci::Label12Click(TObject *Sender)
{
                Memo1->Lines->Clear();
                Memo1->Lines->Text=Memo1->Lines->Text.Insert("M�DRO��: Opisuje intuicje, zdolno�� os�du, zdrowy rozs�dek i si�� woli bohatera. Jest podstawow� cech� kap�an�w.\n\nMinimum:3\nMaksimum:18",Memo1->SelStart+1);
        
}
//---------------------------------------------------------------------------

void __fastcall TKreatorPostaci::Label14Click(TObject *Sender)
{
                Memo1->Lines->Clear();
                Memo1->Lines->Text=Memo1->Lines->Text.Insert("CHARYZMA: Opisuje si�� przekonywania bohatera, jego urok osobisty i zdolno�ci przyw�dcze. \n\nMinimum:8\nMaksimum:18",Memo1->SelStart+1);

}
//---------------------------------------------------------------------------







void __fastcall TKreatorPostaci::Button17Click(TObject *Sender)
{

Memo2->Lines->Clear();
Memo2->Lines->Text=Memo2->Lines->Text.Insert("Gotow� postac mozna zapisac do pliku tekstowego, uzywajac menu znajdujacego sie w lewym gornym rogu programu.",Memo1->SelStart+1);



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
                        ShowMessage("B��d otwarcia pliku.");
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
                        ShowMessage("Zapis zako�czy� si� niepowodzeniem");
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


