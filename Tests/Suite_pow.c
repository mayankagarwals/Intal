void suite_pow_test_1(void)
{
    char s1[] = "0";
    int n = 100;
	char* result1 = intal_pow(s1, n);
	if(!result1) {
		CU_FAIL("Failed to return an intal")
	} else {
		CU_ASSERT_STRING_EQUAL(result1, "0"); 
		free(result1);
	}
}

void suite_pow_test_2(void)
{
    char s1[] = "100";
    int s2 = 0;
	char* result1 = intal_pow(s1, s2);
	if(!result1) {
		CU_FAIL("Failed to return an intal")
	} else {
		CU_ASSERT_STRING_EQUAL(result1, "1"); 
		free(result1);
	}
}

void suite_pow_test_3(void)
{
    char s1[] = "4";
    int s2 = 8;
	char* result1 = intal_pow(s1, s2);
	if(!result1) {
		CU_FAIL("Failed to return an intal")
	} else {
		CU_ASSERT_STRING_EQUAL(result1, "65536"); 
		free(result1);
	}
}

void suite_pow_test_4(void)
{
    char s1[] = "2342";
    int s2 = 2324;
	char* result1 = intal_pow(s1, s2);
	if(!result1) {
		CU_FAIL("Failed to return an intal")
	} else {
        char in[] = "831637513519207400857996586916177580898210072860830263"
        "3076356504148226153775742702494410831383156964621503417314381437221"
        "0674230929715448857102666941660422535895740429066444649360639392137"
        "2198951083908565197763178833653069327144592561716958364982186584796968"
        "56484876529638563641596579416231129116403888212604061202842451646116"
        "01602941511440041931467140983906200839832424554777766256282919439471"
        "5175691505591988257427703543048476486516792574899528177336708143237"
        "032683935432232379279700088560197604961302381110394563502687472037116"
        "341017459001044836086346983543726146841978653620253365812962454676215"
        "773862960325047950803691492353932611134313085469197639400675907752469"
        "6744986204510504940411089734263225538534657764034279140420087916245914"
        "383341324768932200063604805868204813567372577748732188927722279453711"
        "84650152602724270399986842154100829443564198347076369730339761393549513"
        "1007063865410541160028932503004033749228669434112507291256333556167438"
        "7252952167916362859312659425328927897351226847435817959450537574079713"
        "1059504349243256422854458361428464125211922124607593416709815108305859"
        "9201565267127370620050044750213571602929338551860033478963762334658664"
        "785933704094623942629295413630107392772182441821141294421497207457203"
        "1405824419382713912130625803928034035138111287522810637874308000413739"
        "683558682423845420451179034800778801801586829822720087276769153858730"
        "6743651458245665585007582162402989277602062696147484523485209372969366"
        "3158663894245085826179781263340552570774665250057950652430884900397549"
        "3317921264599151121534715694526759137928753660506677852359202399702133"
        "4673187343271064358184316731037547608948704944369735085213835400412722"
        "7130983808547653933465766427719620807846946331084569544230614663869097"
        "6826277977280963512778604904215728097715010967663117361816832136210168"
        "80686689550766006696370741771984212469891540387478819553489259100624307"
        "662692463291821442843147409213092712217566651074125465425735993268393175"
        "523054700538204205519077168837865561527227868998319336809914867847549387"
        "4352495537629742617239047963868328990405212651191258775963698942405936629451384537395193108503796827929152075176563309717496261142651989783723444417514000673280538449371035572839860493712415025385485200234542430341068385362515791069999681673795795654835224855665846738388762374048973183536453596173898370077832372172360473422313304363443278287524187368629372597227743644156038633861734363460180461779544600733937417357963222670366230147523967789891752624344904434223471223051964860472389142691243641584931031949067155750407873944604870093677539284212408879681799671207336959000794496246119447374962954827300721755490436496959802600956416406125949222149514984170555769009704894685271176154078897132865978766228273391974162518084819817645653721508641963806848256775438904461696754350558060908600829004284486067577154832683247155666769497803426146680596509264679375419650691828637511596801717669080780319068549831329138272827741549124785113013973934884263424984544835411744722811280200355138060922108834979009715430660235289337582881895666087281290083168546632851394573044561128072114743660015729327066617041528887792245490512431106791295232262204464391750931529684799618992331730979734733421073297604646379949823747641834262449781975464798601966277847615512440801885761247587650875630088063952384084547749961781939165648682306283775119482322123411829132067122139584128161465924371558661065048443674909943329369775024296993745572965588248986430809636173039868743174461276124597695428618258876012732472500483615539574351143779585805467085236364443173657375779521821886950895115000626841979574242219048160121821986883421760967405287820814629519004305790800595038187161299760952767095430168450289226235393209437394286340333092432542652830917832398858278715115147769780813200059627310299584913064618661362942659265298956489173196180219784574658704066921267376320748462155894786782608326537349650880174962340048609752473283078639395191967635180648307211307691437705799404725634411814047466892941567984368333990501516423700577257657157926107222629789659037773379026961508616062190816105060705461153483800755778856926389016234431581987964214683640601816778702979573121983853240002557357637856536318441753073455936371620415351375586760989014746582072685658804113046031613328075805591771280043634931398773274273696305062980033856771462933751723776629384393564893040540613763532674521078345836521404017403319901468458794886869243408512155578274835224110137729960127966334458123626127919273630759249369482733913879940554233062313997323016277699921566219977559237337857581222601156210761442982560296696839419172647844224632866325111568413069740582798803277821914733317242838360066561631710410171299406960255394823129521880743154520179916706647999482288322991965578379047516151707266902865117175192019418610611270571773439919547688921106283190804532232409659956035869225091405487276853735303825861231866682106843229003471743013630750949093647168026302172024000102501906836070824712017764972527941501559323503997590011207104397621516262630362954319441748286163021237254409983393904020458370848980278752052447596575781273197242052420257431999937044909020570649706268106995245522097871059343150766199145631541166533421044877402862113885755140057805507771505792611823109420155407862369510987470237891543808424647499949179840236422941408060048518110725217208431341603262476475877270665004048302507233766977524080036709198132160113548130171404164319830686372912165008925840275382436120003566888399091569889540192805609067338928500712721283375995792313453995060194714351097994659421984548634610541524863263111118082471610846455086279135463134988702914096268964148835230658344874188035777551960717611082745998641815788094109118450940433337888736978178181177735565645632344110356173213525541935326202954509880830993520613899605230375701322425323382593651801003487153556305942111167052540015613517838217542849019661485535737894333173047480595618567355698370308103294917885454239225494485530807208427276765151210591547424871397367798176142930886055149250311551150519943422843999065355497070536753894630431070324778272520350852591991493816042057783168179434492084689315202627404870153855125077808436371571648754336501357480535969541610851465197873922233724446923332229571497787510398177708073107070496962759169453871960636755507254803209161339283058321919601123331633618797514620110296923764332923312900681191179186353747513117337525330845138747465526300386374434287115063486490580355632000820586065266676092767964155344739699891598246400557819730083513781618228938158566341226396410501712077273243804443991686642847915148760729417687266157661891284552834822568896641770702953399805484987966659691292599180024082632331866175814730432062557978982301477211591045497029467825528471404599178744878975234903223530799675994052134872383161125947561208188444252868243214740359755368051276837945237092108588342888622220498342662416397030089303756558257091580421839095160850498323688422505221263861764284437149710010886072584802461598171492969537651784733650620534906638071285314292033934082287888212602278599465718043605814242632180083915096162303318450790192755944371480644164566665492104005327976433462909352634239886255273469058519697540016211889941544290622053144464510072435823914895593435577187853871767797701355538376618897056571660608598855219348687906429294215918259121130193706905560066037073755053121129544167800583439277568350163782948876927704170853597500903094409084388303629993372995391292646757198386090525281633199261850425468653825744673714263679449867828561152175160215399091675354766918167533586559024513557005308445325721021322539466540842716296445741663384722028070140601478162332910243009529781703044678283183381724751639256569433616180851371095509353057861956121649044303227850681662583384185505457792117047567037977549462415965339524997840896";
		CU_ASSERT_STRING_EQUAL(result1, in); 
		free(result1);
	}
}