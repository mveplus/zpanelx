<?php

/*
+-----------------------------------------------------------------------+
| language/da_DK/labels.inc                                             |
|                                                                       |
| Language file of the Roundcube Webmail client                         |
| Copyright (C) 2005-2010, The Roundcube Dev Team                       |
| Licensed under the GNU GPL                                            |
|                                                                       |
+-----------------------------------------------------------------------+
| Author: Martin Moeller <martin@liga.dk>                               |
|         Jesper R. Meyer <jrm@upthere.dk>                              |
|         Søren Aggeboe <soren@aggeboe.dk>                              |
|         John Loft Christiansen <john@nansensvej.dk>                   |
+-----------------------------------------------------------------------+

@version $Id: labels.inc 5569 2011-12-07 14:47:32Z thomasb $
*/

$labels = array();

// login page
$labels['welcome'] = 'Velkommen til $product';
$labels['username'] = 'Brugernavn';
$labels['password'] = 'Adgangskode';
$labels['server'] = 'Server';
$labels['login'] = 'Log på';

// Taskbar
$labels['logout'] = 'Log af';
$labels['mail'] = 'E-mail';
$labels['settings'] = 'Personlige indstillinger';
$labels['addressbook'] = 'Adressebog';

// mailbox names
$labels['inbox'] = 'Indbakke';
$labels['drafts'] = 'Kladder';
$labels['sent'] = 'Sendt post';
$labels['trash'] = 'Skrald';
$labels['junk'] = 'Ragelse';

// message listing
$labels['subject'] = 'Emne';
$labels['from'] = 'Afsender';
$labels['to'] = 'Modtager';
$labels['cc'] = 'Kopi til';
$labels['bcc'] = 'BCC';
$labels['replyto'] = 'Svar til';
$labels['followupto'] = 'Følg-op til';
$labels['date'] = 'Dato';
$labels['size'] = 'Størrelse';
$labels['priority'] = 'Prioritet';
$labels['organization'] = 'Organisation';
$labels['readstatus'] = 'Læst status';

$labels['mailboxlist'] = 'Mapper';
$labels['messagesfromto'] = 'Besked $from til $to af $count';
$labels['threadsfromto'] = 'Tråd $from til $to af $count';
$labels['messagenrof'] = 'Besked $nr af $count';

$labels['copy'] = 'Kopier';
$labels['move'] = 'Flyt';
$labels['moveto'] = 'Flyt til...';
$labels['download'] = 'Download';

$labels['filename'] = 'Filnavn';
$labels['filesize'] = 'Filstørrelse';

$labels['addtoaddressbook'] = 'Tilføj til adressebogen';

// weekdays short
$labels['sun'] = 'Søn';
$labels['mon'] = 'Man';
$labels['tue'] = 'Tir';
$labels['wed'] = 'Ons';
$labels['thu'] = 'Tor';
$labels['fri'] = 'Fre';
$labels['sat'] = 'Lør';

// weekdays long
$labels['sunday'] = 'Søndag';
$labels['monday'] = 'Mandag';
$labels['tuesday'] = 'Tirsdag';
$labels['wednesday'] = 'Onsdag';
$labels['thursday'] = 'Torsdag';
$labels['friday'] = 'Fredag';
$labels['saturday'] = 'Lørdag';

// month short
$labels['jan'] = 'Jan';
$labels['feb'] = 'Feb';
$labels['mar'] = 'Mar';
$labels['apr'] = 'Apr';
$labels['may'] = 'Maj';
$labels['jun'] = 'Jun';
$labels['jul'] = 'Jul';
$labels['aug'] = 'Aug';
$labels['sep'] = 'Sep';
$labels['oct'] = 'Okt';
$labels['nov'] = 'Nov';
$labels['dec'] = 'Dec';

//months long
$labels['longjan'] = 'Januar';
$labels['longfeb'] = 'Februar';
$labels['longmar'] = 'Marts';
$labels['longapr'] = 'April';
$labels['longmay'] = 'Maj';
$labels['longjun'] = 'Juni';
$labels['longjul'] = 'Juli';
$labels['longaug'] = 'August';
$labels['longsep'] = 'September';
$labels['longoct'] = 'Oktober';
$labels['longnov'] = 'November';
$labels['longdec'] = 'December';

$labels['today'] = 'I dag';

// toolbar buttons
$labels['checkmail'] = 'Se efter nye beskeder';
$labels['writenewmessage'] = 'Skriv en ny besked';
$labels['replytomessage'] = 'Svar på denne besked';
$labels['replytoallmessage'] = 'Svar til alle modtagere';
$labels['replyall'] = 'Svar alle';
$labels['replylist'] = 'Svar til listen';
$labels['forwardinline']    = 'Videresend';
$labels['forwardattachment'] = 'Videresend som vedhæftning';
$labels['forwardmessage'] = 'Videresend denne besked';
$labels['deletemessage'] = 'Slet besked';
$labels['movemessagetotrash'] = 'Flyt besked til skrald';
$labels['printmessage'] = 'Udskriv denne besked';
$labels['previousmessage'] = 'Vis forrige besked';
$labels['firstmessage'] = 'Vis første besked';
$labels['nextmessage'] = 'Vis næste besked';
$labels['lastmessage'] = 'Vis sidste besked';
$labels['backtolist'] = 'Tilbage til beskedlisten';
$labels['viewsource'] = 'Vis rå besked';
$labels['markmessages'] = 'Markér beskeder';
$labels['markread'] = 'Som læst';
$labels['markunread'] = 'Som ulæst';
$labels['markflagged'] = 'Som markeret';
$labels['markunflagged'] = 'Som umarkeret';
$labels['moreactions'] = 'Flere funktioner...';
$labels['messageactions'] = 'Flere funktioner...';

$labels['select'] = 'Vælg';
$labels['all'] = 'Alle';
$labels['none'] = 'Ingen';
$labels['currpage'] = 'Aktuel side';
$labels['unread'] = 'Ulæste';
$labels['flagged'] = 'Markeret';
$labels['unanswered'] = 'Ubesvaret';
$labels['deleted'] = 'Slettede';
$labels['invert'] = 'Invertér';
$labels['filter'] = 'Filtrer';
$labels['list'] = 'Liste';
$labels['threads'] = 'Tråde';
$labels['expand-all'] = 'Udfold alle';
$labels['expand-unread'] = 'Udfold ulæste';
$labels['collapse-all'] = 'Fold alle';
$labels['threaded'] = 'Trådet';

$labels['autoexpand_threads'] = 'Udfold besked tråde';
$labels['do_expand'] = 'alle tråde';
$labels['expand_only_unread'] = 'kun dem med ulæste beskeder';
$labels['fromto'] = 'Afsender/Modtager';
$labels['flag'] = 'Flag';
$labels['attachment'] = 'Vedhæftning';
$labels['nonesort'] = 'Ingen';
$labels['sentdate'] = 'Sendt dato';
$labels['arrival'] = 'Modtaget dato';
$labels['asc'] = 'opstigende';
$labels['desc'] = 'faldende';
$labels['listcolumns'] = 'Vist kolonne';
$labels['listsorting'] = 'Sorterings kolonne';
$labels['listorder'] = 'Sorter efter';
$labels['listmode'] = 'Listevisningsmode';

$labels['folderactions'] = 'Mappe handlinger...';
$labels['compact'] = 'Ryd op';
$labels['empty'] = 'Tøm';

$labels['quota'] = 'Disk forbrug';
$labels['unknown'] = 'ukendt';
$labels['unlimited'] = 'ubegrænset';

$labels['quicksearch'] = 'Hurtigsøgning';
$labels['resetsearch'] = 'Nulstil søgning';
$labels['searchmod'] = 'Søgeparametere';
$labels['msgtext'] = 'Hele beskeden';

$labels['openinextwin'] = 'Åbn i nyt vindue';
$labels['emlsave'] = 'Download (.eml)';

// message compose
$labels['compose'] = 'Forfat en besked';
$labels['editasnew'] = 'Redigér som ny';
$labels['savemessage'] = 'Gem denne kladde';
$labels['sendmessage'] = 'Send beskeden nu';
$labels['addattachment'] = 'Vedhæft en fil';
$labels['charset'] = 'Tegnsæt';
$labels['editortype'] = 'Tekstbehandler';
$labels['returnreceipt'] = 'Anmod om kvittering';
$labels['dsn'] = 'Notifikation om leveringstatus';
$labels['mailreplyintro'] = 'Den $date, $sender skrev:';
$labels['originalmessage'] = 'Original besked';

$labels['editidents'] = 'Ret identiteter';
$labels['checkspelling'] = 'Stavekontrol';
$labels['resumeediting'] = 'Genoptag redigering';
$labels['revertto'] = 'Vend tilbage til';

$labels['attachments'] = 'Vedhæftninger';
$labels['upload'] = 'Upload';
$labels['uploadprogress'] = '$percent ($current af $total)';
$labels['close'] = 'Luk';
$labels['messageoptions'] = 'Besked muligheder...';

$labels['low'] = 'Lav';
$labels['lowest'] = 'Lavest';
$labels['normal'] = 'Normal';
$labels['high'] = 'Høj';
$labels['highest'] = 'Højest';

$labels['nosubject'] = '(intet emne)';
$labels['showimages'] = 'Vis billeder';
$labels['alwaysshow'] = 'Vis altid billeder fra $sender';
$labels['isdraft']    = 'Dette er en kladde.';

$labels['htmltoggle'] = 'HTML';
$labels['plaintoggle'] = 'Almindelig tekst';
$labels['savesentmessagein'] = 'Gem afsendt besked i';
$labels['dontsave'] = 'gem ikke';
$labels['maxuploadsize'] = 'Maksimale tilladte filstørrelse er $size';

$labels['addcc'] = 'Tilføj Cc';
$labels['addbcc'] = 'Tilføj Bcc';
$labels['addreplyto'] = 'Tilføj Svar-Til adresse';
$labels['addfollowupto'] = 'Tilføj følg-op adresse';

// mdn
$labels['mdnrequest'] = 'Afsenderen af denne besked har bedt om at modtage en bekræftelse når du læser beskeden. Vil du sende kvittering for læsning?';
$labels['receiptread'] = 'Send kvittering for læsning';
$labels['yourmessage'] = 'Dette er en kvittering for at din besked er blevet vist';
$labels['receiptnote'] = 'Bemærk: Denne kvittering bekræfter udelukkende at beskeden blev vist på modtagerens computer. Der er ingen garanti for at modtageren har læst eller forstået beskedens indhold.';

// address book
$labels['name'] = 'Vist navn';
$labels['firstname'] = 'Fornavn';
$labels['surname'] = 'Efternavn';
$labels['middlename'] = 'Mellemnavn';
$labels['nameprefix']   = 'Præfiks';
$labels['namesuffix']   = 'Suffiks';
$labels['nickname'] = 'Alias/Kaldenavn';
$labels['jobtitle'] = 'Job titel';
$labels['organization'] = 'Firma';
$labels['department'] = 'Afdeling';
$labels['gender'] = 'Køn';
$labels['maidenname'] = 'Pigenavn';
$labels['email'] = 'E-mail';
$labels['phone'] = 'Telefon';
$labels['address'] = 'Adresse';
$labels['street'] = 'Vejnavn';
$labels['locality'] = 'By';
$labels['zipcode'] = 'Postnr.';
$labels['region'] = 'Område/region';
$labels['country'] = 'Land';
$labels['birthday'] = 'Fødselsdag';
$labels['anniversary'] = 'Jubilæum';
$labels['website'] = 'Hjemmeside';
$labels['instantmessenger'] = 'IM';
$labels['notes'] = 'Noter';
$labels['male'] = 'Mand';
$labels['female'] = 'Kvinde';
$labels['manager'] = 'Manager';
$labels['assistant'] = 'Assistent';
$labels['spouse'] = 'Ægtefælle';
$labels['allfields'] = 'Alle felter';
$labels['search'] = 'Søg';
$labels['advsearch'] = 'Avanceret søg';
$labels['other'] = 'Andet';

$labels['typehome']   = 'Hjem';
$labels['typework']   = 'Arbejde';
$labels['typeother']  = 'Andet';
$labels['typemobile']  = 'Mobil';
$labels['typemain']  = 'Fastnet';
$labels['typehomefax']  = 'Hjemme fax';
$labels['typeworkfax']  = 'Arbejde Fax';
$labels['typecar']  = 'Bil';
$labels['typepager']  = 'Personsøger';
$labels['typevideo']  = 'Video';
$labels['typeassistant']  = 'Assistent';
$labels['typehomepage']  = 'Hjemmeside';
$labels['typeblog'] = 'Blog';
$labels['typeprofile'] = 'Profil';

$labels['addfield'] = 'Tilføj felt...';
$labels['addcontact'] = 'Tilføj en ny kontakt';
$labels['editcontact'] = 'Redigér kontakt';
$labels['contacts'] = 'Kontakter';
$labels['contactproperties'] = 'Kontakt egenskaber';
$labels['personalinfo'] = 'Personlig information';

$labels['edit'] = 'Redigér';
$labels['cancel'] = 'Afbryd';
$labels['save'] = 'Gem';
$labels['delete'] = 'Slet';
$labels['rename'] = 'Omdøb';
$labels['addphoto'] = 'Tilføj';
$labels['replacephoto'] = 'Erstat';

$labels['newcontact'] = 'Opret nyt kontaktkort';
$labels['deletecontact'] = 'Slet valgte kontakter';
$labels['composeto'] = 'Skriv brev til';
$labels['contactsfromto'] = 'Kontakter $from til $to af $count';
$labels['print'] = 'Print';
$labels['export'] = 'Eksport';
$labels['exportvcards'] = 'Eksportér kontakter i vCard format';
$labels['newcontactgroup'] = 'Opret ny kontaktgruppe';
$labels['groupactions'] = 'Funktioner for kontaktgrupper...';
$labels['groupdelete']    = 'Slet gruppe';

$labels['previouspage'] = 'Vis forrige sæt';
$labels['firstpage'] = 'Vis første sæt';
$labels['nextpage'] = 'Vis næste sæt';
$labels['lastpage'] = 'Vis sidste sæt';

$labels['group'] = 'Gruppe';
$labels['groups'] = 'Grupper';
$labels['personaladrbook'] = 'Personlige Adresser';

$labels['searchsave'] = 'Gem søgning';
$labels['searchdelete'] = 'Slet søgning';

$labels['import'] = 'Importér';
$labels['importcontacts'] = 'Importér kontakter';
$labels['importfromfile'] = 'Importér fra fil:';
$labels['importtarget'] = 'Tilføj nye kontakter til adressebogen:';
$labels['importreplace'] = 'Overskriv hele adressebogen';
$labels['importtext'] = 'Du kan uploade kontakter fra en eksisterende adressebog.Vi understøtter i øjeblikket import af adresser i vCard formatet.';
$labels['done'] = 'Færdig';

// settings
$labels['settingsfor'] = 'Indstillinger for';
$labels['about'] = 'Om';
$labels['preferences'] = 'Præferencer';
$labels['userpreferences'] = 'Brugerpræferencer';
$labels['editpreferences'] = 'Redigér brugerpræferencer';

$labels['identities'] = 'Identiteter';
$labels['manageidentities'] = 'Styr identiteterne for denne konto';
$labels['newidentity'] = 'Ny identitet';

$labels['newitem'] = 'Nyt punkt';
$labels['edititem'] = 'Redigér punkt';

$labels['preferhtml'] = 'Foretræk HTML';
$labels['defaultcharset'] = 'Standard tegnkodning';
$labels['htmlmessage'] = 'HTML-besked';
$labels['dateformat'] = 'Dato format';
$labels['timeformat'] = 'Tid format';
$labels['prettydate'] = 'Pæn datovisning';
$labels['setdefault'] = 'Sæt standard';
$labels['autodetect'] = 'Automatisk';
$labels['language'] = 'Sprog';
$labels['timezone'] = 'Tidszone';
$labels['pagesize'] = 'Rækker per side';
$labels['signature'] = 'Signatur';
$labels['dstactive'] = 'Sommertid';
$labels['htmleditor'] = 'Skriv HTML-besked';
$labels['htmlonreply'] = 'kun når jeg besvarer HTML-beskeder';
$labels['htmlsignature'] = 'HTML-signatur';
$labels['previewpane'] = 'Forhåndsvisning';
$labels['skin'] = 'Interface skin';
$labels['logoutclear'] = 'Tøm Skrald når jeg logger af';
$labels['logoutcompact'] = 'Komprimér Indbakke når jeg logger af';
$labels['uisettings'] = 'Brugerinterface';
$labels['serversettings'] = 'Serverindstillinger';
$labels['mailboxview'] = 'Mailbox visning';
$labels['mdnrequests'] = 'Kvitteringer';
$labels['askuser'] = 'spørg brugeren';
$labels['autosend'] = 'send automatisk';
$labels['autosendknown'] = 'send automatisk til mine kontakter, ellers spørg mig';
$labels['autosendknownignore'] = 'send automatisk til mine kontakter, ellers ignorér';
$labels['ignore'] = 'ignorér';
$labels['readwhendeleted'] = 'Markér beskeden som læst ved sletning';
$labels['flagfordeletion'] = 'Markér beskeden til sletning istedet for at slette';
$labels['skipdeleted'] = 'Skjul slettede beskeder';
$labels['deletealways'] = 'Slet besked, hvis det mislykkes at flytte den til skrald';
$labels['showremoteimages'] = 'Vis eksterne indlejrede billeder';
$labels['fromknownsenders'] = 'fra kendte afsendere';
$labels['always'] = 'altid';
$labels['showinlineimages'] = 'Vis vedhæftede billeder under beskeden';
$labels['autosavedraft'] = 'Gem kladde automatisk';
$labels['everynminutes'] = 'hver $n. minut';
$labels['keepalive'] = 'Tjek for nye beskeder på';
$labels['never'] = 'aldrig';
$labels['immediately'] = 'straks';
$labels['messagesdisplaying'] = 'Viser beskeder';
$labels['messagescomposition'] = 'Skriver nye beskeder';
$labels['mimeparamfolding'] = 'Navne på vedhæftninger';
$labels['2231folding'] = 'Fuld RFC 2231 understøttelse (Thunderbird)';
$labels['miscfolding'] = 'RFC 2047/2231 understøttelse (MS Outlook)';
$labels['2047folding'] = 'Fuld RFC 2047 understøttelse (andre)';
$labels['force7bit'] = 'Brug MIME indkodning for 8-bits tegn';
$labels['advancedoptions'] = 'Advancerede muligheder';
$labels['focusonnewmessage'] = 'Fokusér browservindue når der kommer nye beskeder';
$labels['checkallfolders'] = 'Tjek alle mapper for nye beskeder';
$labels['displaynext'] = 'Efter slet/flyt besked, vis næste besked';
$labels['mainoptions'] = 'Generelle indstillinger';
$labels['section'] = 'Sektion';
$labels['maintenance'] = 'Vedligeholdelse';
$labels['newmessage'] = 'Ny besked';
$labels['listoptions'] = 'Liste-indstillinger';
$labels['signatureoptions'] = 'Signatur-indstillinger';
$labels['whenreplying'] = 'Når der svares';
$labels['replytopposting'] = 'start svar over originalen';
$labels['replybottomposting'] = 'start svar under originalen';
$labels['replyremovesignature'] = 'Fjern original signatur fra besked, når der svares';
$labels['autoaddsignature'] = 'Indsæt automatisk signatur';
$labels['newmessageonly'] = 'kun på nye beskeder';
$labels['replyandforwardonly'] = 'kun på svar og videresende beskeder';
$labels['replysignaturepos'] = 'Når beskeder besvares eller videresendes: placér signatur';
$labels['belowquote'] = 'under det citerede';
$labels['abovequote'] = 'over det citerede';
$labels['insertsignature'] = 'Indsæt signatur';
$labels['previewpanemarkread'] = 'Markér forhåndsviste beskeder som læst';
$labels['afternseconds'] = 'efter $n sekunder';
$labels['reqmdn'] = 'Bed altid om at få besked om læsning';
$labels['reqdsn'] = 'Bed altid om at få en status på levering';
$labels['replysamefolder'] = 'Placer svar til en besked i samme mappe som beskeden der besvares';
$labels['defaultaddressbook'] = 'Tilføj nye kontakter til den valgte adressebog';
$labels['autocompletesingle'] = 'Undgå alternative emailadresser under autofuldførelse';
$labels['spellcheckbeforesend'] = 'Tjek stavning inden beskeden sendes';
$labels['spellcheckoptions'] = 'Stavning muligheder';
$labels['spellcheckignoresyms'] = 'Ignorer ord med symboler';
$labels['spellcheckignorenums'] = 'Ignorer ord med tal';
$labels['spellcheckignorecaps'] = 'Ignorer ord hvor alle bogstaver er versaler';
$labels['addtodict'] = 'Tilføj til ordbog';

$labels['folder'] = 'Mappe';
$labels['folders'] = 'Mapper';
$labels['foldername'] = 'Mappenavn';
$labels['subscribed'] = 'Abonneret';
$labels['messagecount'] = 'Beskeder';
$labels['create'] = 'Opret';
$labels['createfolder'] = 'Opret ny mappe';
$labels['managefolders'] = 'Administrér mapper';
$labels['specialfolders'] = 'Specielle mapper';
$labels['properties'] = 'Egenskaber';
$labels['folderproperties'] = 'Mappe egenskaber';
$labels['parentfolder'] = 'Mappe et niveau op';
$labels['location'] = 'Placering';
$labels['info'] = 'Information';
$labels['getfoldersize'] = 'Klik for at hente mappestørrelse';
$labels['changesubscription'] = 'Klik for at ændre abonnement';
$labels['foldertype'] = 'Mappe Type';
$labels['personalfolder']  = 'Privat mappe';
$labels['otherfolder']  = 'Anden brugers mappe';
$labels['sharedfolder']  = 'Offentlig mappe';

$labels['sortby'] = 'Sortér efter';
$labels['sortasc'] = 'Ældste først';
$labels['sortdesc'] = 'Nyeste først';
$labels['undo'] = 'Fortryd';

$labels['plugin'] = 'Plugin';
$labels['version'] = 'Version';
$labels['source'] = 'Kilde';
$labels['license'] = 'Licens';
$labels['support'] = 'Få support';

// units
$labels['B'] = 'B';
$labels['KB'] = 'KB';
$labels['MB'] = 'MB';
$labels['GB'] = 'GB';

// character sets
$labels['unicode'] = 'Unicode';
$labels['english'] = 'Engelsk';
$labels['westerneuropean'] = 'Vestlig europæisk';
$labels['easterneuropean'] = 'Østlig europæisk';
$labels['southeasterneuropean'] = 'Syd-østlig europæisk';
$labels['baltic'] = 'Baltisk';
$labels['cyrillic'] = 'Kyrillisk';
$labels['arabic'] = 'Arabisk';
$labels['greek'] = 'Græsk';
$labels['hebrew'] = 'Hebræisk';
$labels['turkish'] = 'Tyrkisk';
$labels['nordic'] = 'Nordisk';
$labels['thai'] = 'Thai';
$labels['celtic'] = 'Keltisk';
$labels['vietnamese'] = 'Vietnamesisk';
$labels['japanese'] = 'Japansk';
$labels['korean'] = 'Koreansk';
$labels['chinese'] = 'Kinesisk';

?>